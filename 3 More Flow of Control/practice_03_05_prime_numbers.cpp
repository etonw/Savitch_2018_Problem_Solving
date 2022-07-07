/*
practice_03_05_prime_numbers.cpp

     AUTHOR :  Eton C. Williams
       DATE :  28 June 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 3: More Flow of Control
               p 205           

REQUIREMENTS:
5. Write a program that finds and prints all of the prime numbers between 3
and 100. 

A prime number is a number such that 1 and itself are the only
numbers that evenly divide it (for example, 3, 5, 7, 11, 13, 17, …).

One way to solve this problem is to use a doubly nested loop. The
outer loop can iterate from 3 to 100 while the inner loop checks to
see if the counter value for the outer loop is prime. 

boolean is_prime = false; 
for (int i = 3; i <= 100 ;i++)  // iterate from 3 to 100
{
    for ( int j = 2; j < i-1 ;j++)
    {
        if( i%j == 0) 
        {
            is_prime = false
        }
        else 
        {
            is_prime = true;
        }
        if (is_prime)
        {
            cout << i << " is a prime number" << endl;
        }
    } // end inner for
}// end outer for

One way to see if number n is prime is to loop from 2 to n 21 and if any of these
numbers evenly divides n, then n cannot be prime. If none of the
values from 2 to n 21 evenly divides n, then n must be prime. (Note
that there are several easy ways to make this algorithm more efficient.)

*/

#include <iostream>
#include <cmath>   
using namespace std;

//PROTOTYPE FUNCTIONS
char input_char_switch_y_n();

//initialize global variables and CONSTANTS
char REPEAT;  //User input to determine if program runs more than once

int main() 
{
	// VARIABLES

    int n(0) ; 
    

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i) Find and print all the prime numbers from 3 to 100"
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        


         // CALCULATION


        // OUTPUT

        
        // USER determines if program repeats
        REPEAT = input_char_switch_y_n();   
    } while (REPEAT == 'Y');    //condition to repeat the program

    //echo input and end program
    cout << endl << endl
         << "\t\tYou entered : "
         << REPEAT
         << "\t\tGood bye"
         << endl << endl
         << "\t\t\t\t\t= END OF PROGRAM =\n"
         << endl;
    
    return 0; 
}


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

