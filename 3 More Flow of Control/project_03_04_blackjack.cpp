/*
project_03_04_blackjack.cpp

     AUTHOR :  Eton C. Williams
       DATE :  29 June 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 3: More Flow of Control
               p 206           

REQUIREMENTS:
4. Write a program that scores a blackjack hand. In blackjack, a player
receives from two to five cards. The cards 2 through 10 are scored as 2
through 10 points each. 

The face cards—jack, queen, and king—are scored as 10 points.

The goal is to come as close to a score of 21 as possible without going over 21. 

Hence, any score over 21 is called “busted.” The ace
can count as either 1 or 11, whichever is better for the user. For example,
an ace and a 10 can be scored as either 11 or 21. Since 21 is a better score,
this hand is scored as 21. An ace and two 8s can be scored as either 17 or
27. Since 27 is a “busted” score, this hand is scored as 17.

The user is asked how many cards she or he has, and the user responds
with one of the integers 2, 3, 4, or 5. The user is then asked for the card
values. Card values are 2 through 10, jack, queen, king, and ace.

A good way to handle input is to use the type char so that the card input 2, for
example, is read as the character '2', rather than as the number 2. Input
the values 2 through 9 as the characters '2' through '9'. Input the values
10, jack, queen, king, and ace as the characters 't', 'j', 'q', 'k', and
'a'. (Of course, the user does not type in the single quotes.) Be sure to
allow upper- as well as lowercase letters as input.

After reading in the values, the program should convert them from character
values to numeric card scores, taking special care for aces. 

The output is
either a number between 2 and 21 (inclusive) or the word Busted.

You are likely to have one or more long multiway branches that use a switch
statement or nested if-else statement. Your program should include a loop
that lets the user repeat this calculation until the user says she or he is done.

Got the solution from: 
http://www.sr2jr.com/textbook-solutions/computer-science/60302008/problem-solving-with-cpp-more-flow-of-control
*/

#include <iostream>
#include <cmath>   
using namespace std;

//PROTOTYPE FUNCTIONS
double input_double();
char input_char_switch_y_n();
void set_decimal_places();
void program_end();

int get_number_of_cards();
char get_card_value();

//initialize global variables and CONSTANTS
char REPEAT;  //User input to determine if program runs more than once

int main() 
{
	// VARIABLES
int number_of_cards(0),
    number(0), ace_count(0); 
char card =' ';

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i) Score a blackjack hand."
         << endl 
         << " (ii) It will ask how many cards the player has, then the card values"
         << endl
         << "(iii) Compute and return the player's score "
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t= INPUT PROMPT ="
             << endl << endl;

        number = 0;
        ace_count = 0;

        cout << "Enter the number of cards [2, 3, 4, or 5 ] : ";
        cin >> number_of_cards;

        // COMPUTATION AND OUTPUT
        if (number_of_cards < 2 || number_of_cards > 5)
        {
            cout << "Error: invalid input";
        }    
        else // number of cards input is valid
        {
            int count(0);
            bool input_good = false;
            while( (input_good == false)  ||  (count <= number_of_cards)  )
                {
                            // do this for number of cards indicated
                    for(int j = number_of_cards; j > 0; j--)  
                    {
                        cout << endl << endl 
                             << "Enter Card " << endl
                             << "[ 2 , 3, 4, 5, 6, 7, 8, 9 ]" << endl
                             << "[ t , j , q , k , a ] " << endl << endl ;
                        cin >> card;
                        cout << endl << endl; 
                       
                        // compute the value of each card
                        if ( card >= '2' && card <= '9' )
                        {
                            cout << " Value of the card " 
                                << card << " is: " 
                                << 2 + int(card - '2')   //  I LEARNT A LOT FROM THIS CODE
                                << endl << endl;
                            count++;
                            input_good = true;
                            
                            number = number + 2 + (int)(card -'2');
                            input_good = true;
                        }
                        else if ( card == 't' || card == 'T' || card == 'j' ||
                                  card == 'J' || card == 'q' || card == 'Q' ||
                                  card == 'k' || card == 'K')
                        {
                            cout << " Value of the card " 
                                << card << " is 10 " << endl << endl;
                            number+=10;
                            count++;
                            input_good = true;
                            }    
                        else if ( card == 'a' || card == 'A' )
                        {
                            ace_count++;
                            cout << " Value of the card to be determined later" << endl
                                << " Number of Aces submited = " << ace_count << endl << endl;
                            count++;
                            input_good = true;                  
                        } 
                        else 
                        {
                            cout << "Invalid input" << endl << endl;
                            input_good = false; // make the input run again
                        }    
                    } // end for
                }
            
            

            if(ace_count)
            {
                // if you have more than one ace, you must give one of them the value = 1
                while(ace_count > 1) 
                    {
                        number += 1;
                        ace_count--;
                        cout << " Value of the first ace = 1 " << endl << endl;
                    }
                    if( number > 10 && ace_count == 1)
                    {
                        number += 1; 
                        cout << " Value of the second ace = 1 " 
                             << endl << endl;                         
                    }
                    else if ( number < 10 && ace_count == 1)
                    {
                        cout << " Value of the second ace = 11 " 
                             << endl << endl;   
                        number += 11; 
                    }
            } // end if
            
            cout << endl << endl
                 << "\t\t\t= COMPUTATION RESULTS =  \n\n" 
                 << endl << endl;            
            
            if(number > 21)
            {
                cout << endl << " Busted!" << endl
                     << endl
                     << " Score : "
                     << number
                     << endl << endl;                 
            }
            else
            {
                cout << "Score: "
                     << number
                     << endl;
            }
            } // end else
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

