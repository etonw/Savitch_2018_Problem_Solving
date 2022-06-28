/*
practice_03_02_revolving_credit_account.cpp

     AUTHOR :  Eton C. Williams
       DATE :  27 June 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 3: More Flow of Control
               p 204           

REQUIREMENTS:
2. Write a program to compute the interest due, total amount due, and
the minimum payment for a revolving credit account. 

The program accepts the account balance as input, then adds on the interest to get the total amount due. 

The rate schedules are the following: The interest is
1.5 percent on the first $1,000 and 1 percent on any amount over that.

The minimum payment is the total amount due if that is $10 or less;
otherwise, it is $10 or 10 percent of the total amount owed, whichever is
larger. 

Your program should include a loop that lets the user repeat this
calculation until the user says she or he is done.


//calculate
*/

#include <iostream>
#include <cmath>   
using namespace std;

//PROTOTYPE FUNCTIONS
double input_double();
void set_decimal_places();
char input_char_switch_y_n();
char input_char_switch();

//initialize global variables and CONSTANTS
char REPEAT;  //User input to determine if program runs more than once

int main() 
{
	// VARIABLES
    double account_balance(0);
    double interest_due(0);
    double total_amount_due(0);   
    double minimum_payment(0);
    

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i) Accept the account balance as input"
         << endl 
         << " (ii) Calculate and return the interest due"
         << endl
         << "(iii) the total amount due and the minimum payment "
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t= INPUT PROMPT =";
        
        cout << endl << endl
             << "Enter the account balance? ";
        account_balance = input_double();

       
        // Echo input
        cout << endl << endl
             << "YOU ENTERED: " 
             << endl << endl;
        
        cout << "account_balance : " 
             << account_balance 
             << endl << endl;
        
         // CALCULATION

        //calculate interest_due
        if ( account_balance - 1000 > 0 )
        {
            interest_due = (0.015 * 1000) +  ( 0.01 * (account_balance - 1000 )   );
        }
        else
        {
            interest_due = 0.015 * account_balance;
        }
        
        //calculate total_amount_due
        total_amount_due = interest_due + account_balance;
        
        //calculate minimum payment
        if (total_amount_due <= 10)
        {
            minimum_payment = total_amount_due; 
        }
          
        else if (10 > 0.01 * total_amount_due)
        {
            minimum_payment = 10;
        }  
            
        else if (10 < 0.01 * total_amount_due)
        {
            minimum_payment = 0.01 * total_amount_due;
        }

        set_decimal_places();
        
        // OUTPUT
        cout << endl << endl
             << "\t\t\t= COMPUTATION RESULTS =  \n\n" 
             << endl << endl;
        
        cout << "Total interest due is :" 
             << interest_due 
             << endl << endl;
        
        cout << "The Total Amount Due is :" 
             << total_amount_due 
             << endl << endl; 
        
        cout << "The Minimum Payment is :" 
             << minimum_payment 
             << endl << endl; 
                
        // USER determines if program repeats
        REPEAT = input_char_switch_y_n();   
    } while (REPEAT == 'Y');    //condition to repeat the program

    //echo input
    cout << endl << endl
         << "You entered : "
         << REPEAT
         << "\t\tGood bye"
         << endl << endl;

    // end program
	cout << "\t\t\t\t\t= END OF PROGRAM =\n";
    cout << endl;
    
	return 0; 
}

// function: take numerical double from User
double input_double ()
{
    double entered_number; 
    std::cout << " (enter number): ";
    std::cin >> entered_number;
    return entered_number; 
}

// function: format number of decimal places
void set_decimal_places()
{
    cout.setf(ios::fixed);		
    cout.setf(ios::showpoint);
    cout.precision(2);			// number of decimal places in parantheses
} // end function

char input_char_switch_y_n()
{
    char char_input = ' ';
    do
    {
	    cout << "\t\tRepeat program?  Y (Yes) /  N (No) " ;
        cin >> char_input;
        switch(char_input)
	    {
    		case 'Y':
    		case 'y':  // allow for both upper and lower case letters
    			char_input = 'Y';
    			break;
    		
    		case 'N':
    		case 'n':
    			char_input = 'N';
    			break;

          
            default:   //  no legal option was entered		
                cout << endl
                     << " Not a valid choice. " << endl
    			     << " Choose again." << endl << endl;
		} 
    } while(char_input != 'Y' && char_input != 'N' );  // loop until correct input entered
	return char_input;
} // end function


/* //  mutlistatement if-else for boolean comparison

    if (player1 == 'P' && player2 == 'P')
    {
        cout <<  "Paper selected by both Players. Nobody wins." << endl;
    }
    
    else if (player1 == 'P' && player2 == 'R')
    {	
        cout << "Paper covers Rock. Player1 wins" << endl; 
    }
    
    else
    {    
        cout << "there is a problem with the entered inputs for the players";
    }

*/

char input_char_switch()
{
    char char_input = ' ';
    do
    {
	    cout << "Please enter P (Paper), R (Rock) or S (Sissors) :  " ;
        cin >> char_input;
        switch(char_input)
	    {
    		case 'P':
    		case 'p':
    			char_input = 'P';
    			break;
    		
    		case 'R':
    		case 'r':
    			char_input = 'R';
    			break;
    		
      		case 'S':
    		case 's':
    			char_input = 'S';
    			break;
          
            default:   //  no legal option was entered		
                cout << endl
                     << " Not a valid choice. " << endl
    			     << " Choose again." << endl << endl;
		} 
    } while(char_input != 'P' && char_input != 'R' && char_input != 'S');  // loop until correct input entered
	return char_input;
} // end function
