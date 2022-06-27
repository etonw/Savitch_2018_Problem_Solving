/*
iterations_while_loop.cpp

     AUTHOR :  Eton C. Williams
       DATE :  25 June 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 3.3 More about C++ Loop Statements
               p 177

REQUIREMENTS:
testing how while loops work with iterations

*/

#include <iostream>
#include <cmath>   
using namespace std;

//PROTOTYPE FUNCTIONS
double input_double();
char input_char_y_or_n();
void set_decimal_places();

//initialize global variables and CONSTANTS
char REPEAT;  //User input to determine if program runs more than once

int main() 
{
	// VARIABLES
    double sum(0), n(0) ; 

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i) testing how while loops work with iterations"
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t= INPUT PROMPT =";
        
        cout << endl << endl
             << "Enter a value for n, number of iteriations: ";
        n = input_double();

       
        // Echo input
        cout << endl << endl
             << "YOU ENTERED: " 
             << endl << endl;
        
        cout << "n : " 
             << n 
             << endl << endl << endl;
        
         // CALCULATION and OUTPUT
    n = 1;

        while (n <= 10)
            {
                cout << " n = " << n << "\t\t\t" ; 
                sum = sum + n;
                cout << " sum = " << sum << endl << endl; 
                n++;
            }
        
        // USER determines if program repeats
        cout << endl << endl
             << "Repeat Program ? ";
        REPEAT = input_char_y_or_n();   
    } while (REPEAT == 'y' || REPEAT == 'Y');    //condition to repeat the program

    //echo input
    cout << endl << endl
         << "You entered : "
         << REPEAT 
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

// function: take y/ n char input
char input_char_y_or_n()
{
    char entered_letter = 'x'; 
    do
        {
            std::cout << "\t(enter y/n):  ";
            std::cin >> entered_letter; 
            
        } while ( entered_letter != 'y' && entered_letter != 'Y' &&  entered_letter != 'n' && entered_letter != 'N'  );

    return entered_letter; 
} // end function


/*

                    =  PROGRAM DESCRIPTION =

This program will :
  (i) testing how while loops work with iterations



                    = INPUT PROMPT =

Enter a value for n, number of iteriations:  (enter number): 11


YOU ENTERED: 

n : 11


 n = 1           sum = 1

 n = 2           sum = 3

 n = 3           sum = 6

 n = 4           sum = 10

 n = 5           sum = 15

 n = 6           sum = 21

 n = 7           sum = 28

 n = 8           sum = 36

 n = 9           sum = 45

 n = 10          sum = 55
*/
