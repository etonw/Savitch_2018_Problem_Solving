/*
project_03_05_declining_balance.cpp

     AUTHOR :  Eton C. Williams
       DATE :  29 June 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 3: More Flow of Control
               p 206           

REQUIREMENTS:
5. Interest on a loan is paid on a declining balance, and hence a loan with an
interest rate of, say, 14 percent can cost significantly less than 14 percent
of the balance. Write a program that takes a

 loan amount and interest rate as input and then 

outputs the monthly payments and balance of the loan until the loan is paid off. 

Assume that the monthly payments are onetwentieth of the original loan amount, and that 

any amount in excess of the interest is credited toward decreasing the balance due. 

Thus, on a loan of $20,000, the payments would be $1,000 a month. If the interest rate
is 10 percent, then each month the interest is one-twelfth of 10 percent
of the remaining balance. The first month (10 percent of $20,000)/12,
or $166.67, would be paid in interest, and the remaining $833.33 would
decrease the balance to $19,166.67. The following month the interest
would be (10 percent of $19,166.67)/12, and so forth. 

Also have the program output the total interest paid over the life of the loan.

Finally, determine what simple annualized percentage of the original loan
balance was paid in interest. 

For example, if $1,000 was paid in interest on
a $10,000 loan and it took 2 years to pay off, then the annualized interest
is $500, which is 5 percent of the $10,000 loan amount. Your program
should allow the user to repeat this calculation as often as desired.



*/

#include <iostream>
#include <cmath>   
using namespace std;

//PROTOTYPE FUNCTIONS
double input_double();
char input_char_switch_y_n();
void set_decimal_places();
void program_end();


//initialize global variables and CONSTANTS
char REPEAT;  //User input to determine if program runs more than once

int main() 
{
	// VARIABLES
    double loan_amount(0),
            interest_rate(0),
            interest_rate_decimal(0), 
            monthly_payment(0),
            monthly_payment_interest(0),
            loan_balance(0),
            total_interest_paid(0),
            simple_annualized_percentage(0); 
    int i = 0; 
    

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i) Input the loan amount and interest rate"
         << endl 
         << " (ii) Compute and output the monthly payment and loan balance until the loan is paid off"
         << endl
         << "(iii) Output the total interest paid over the life of the loan and the simple annualized interest percentage of the original loan "
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t= INPUT PROMPT =";
        
        cout << endl << endl
             << " What is the loan amount? : ";
        loan_amount = input_double();

        cout << endl << endl
             << " What is the interest rate (in percentage)?  : ";
        interest_rate = input_double();

        interest_rate_decimal = interest_rate / 100;
        
        // Echo input
        cout << endl << endl
             << "YOU ENTERED: " 
             << endl << endl;
        
        cout << "loan_amount : " 
             << loan_amount 
             << endl << endl;
        
        cout << "interest_rate : " 
             << interest_rate 
             << endl << endl; 
        
        cout << endl << endl
             << "\t\t\t= COMPUTATION RESULTS =  \n\n" 
             << endl << endl;
        
        // CALCULATION
        loan_balance = loan_amount;
        monthly_payment = loan_amount /20;
        set_decimal_places();
        
        int i = 1;
        
        while (loan_balance > 0)
        {
            monthly_payment_interest = (interest_rate_decimal * loan_balance)/ 12;
            total_interest_paid += monthly_payment_interest;
            loan_balance = loan_balance - (monthly_payment - monthly_payment_interest);

        cout << "Month " << i 
             << "  Monthly Payment : $" << monthly_payment 
             << "\nMonthly interest paid: $" << monthly_payment_interest 
             << "\nLoan balance: $"  << loan_balance
             << endl << endl;

            i++;
        }
 
        cout << endl << endl;

        // OUTPUT

        
        cout << "Final calculation" << endl
             << "Total interest paid over the life of the loan : $" 
             << total_interest_paid 
             << " for "  << i << " months"
             << endl << endl; 

        simple_annualized_percentage = ( (total_interest_paid / loan_amount) / (i/12)  ) * 100;
        double annualized_interest = total_interest_paid / (i/12) ;
      
        cout << "Annualized interest is : $"
            << annualized_interest
            << "\nSimple_annualized_percentage is "
            << simple_annualized_percentage
            << "%"    
            << endl << endl;
        
        REPEAT = input_char_switch_y_n();   // USER determines if program repeats
    } while (REPEAT == 'Y');    //condition to repeat the program
    void program_end(); //echo input and end program
return 0; 
}// end main

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

// function: take y/ n char input: easily modified for other char input
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

void program_end() //echo input and end program
{
    cout << endl << endl
     << "\t\tYou entered : "
     << REPEAT
     << "\t\tGood bye"
     << endl << endl
     << "\t\t\t\t\t= END OF PROGRAM =\n"
     << endl;
}
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

