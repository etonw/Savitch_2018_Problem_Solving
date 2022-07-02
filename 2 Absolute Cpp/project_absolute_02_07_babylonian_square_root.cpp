/*
project_absolute_02_07_babylonian_square_root.cpp

     AUTHOR :  Eton C. Williams
       DATE :  25 June 2022
       BOOK :  Absolute C++
               Chapter 2: C++ Basics
               p 42         


REQUIREMENTS:
8 The Babylonian algorithm to compute the square root of a positive number n is as
follows:

1. Make a guess at the answer (you can pick n/2 as your initial guess).
2. Compute r = n / guess .
3. Set guess = (guess + r) / 2 .
4. Go back to step 2 for as many iterations as necessary. The more steps 2 and 3
are repeated, the closer guess will become to the square root of n .
Write a program that inputs a double for n , iterates through the Babylonian algorithm
five times, and outputs the answer as a double to two decimal places. Your
answer will be most accurate for small values of n .

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
    double entered_number = (0); 
    double answer (0); 
    

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i) use the Babylonian Algorithm to compute the " 
         << endl
         << " square root of a positive number entered by the user"
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t= INPUT PROMPT =";
        
        cout << endl << endl
             << " Enter a positive number : ";
        entered_number = input_double();


        // Echo input
        cout << endl << endl
             << "YOU ENTERED: " 
             << endl << endl;
        
        cout << "number : " 
             << entered_number 
             << endl << endl;
        
         // CALCULATION

        /*
        From: https://stackoverflow.com/questions/43795199/c-square-root-babylonian-method#:~:text=Babylonian%20Square%20Roots,average%20as%20your%20next%20guess.
        int main(){

        float estimation = 1, num;
        
        cout << " input :";
        cin >> num;
        
        for (int i = 0; i < 20; i++){
            estimation = (estimation + (num / estimation)) / 2;
        }
        
        cout << estimation << '\n';
        
        return 0;
        }

        */

        double n = entered_number;
        double guess1(0);
                double guess2(0);
        double r (0);
         guess1 = n / 2;   // Step 1: Make a guess.
        
        int count = 1;
        do{
           
            r =  n / guess1;  // Step 2: Divide your original number by your guess.
            
            cout << "count = "
                 << count
                 << ",\tn = "
                 << n
                 << " , \tguess1 = n/2 = "
                 << guess1
                 << " \tr =  n / guess1 = "
                 << r
                 << " ."
                 << endl;
            
            guess2 = ( guess1 + r) / 2;
            guess1 = guess2;
            
            cout << "guess2 = ( guess1 + r) / 2 = "   // Step 3: Find the average of these numbers.
                 << guess2
                 << " ,\t guess1 = guess2 = "
                 << guess1
                 << endl << endl;

        } while ( count++ <= 5);   // iterates 5 times

        set_decimal_places();
    cout << "The square root approximation for "
         << entered_number
         << " is :"
         << guess1
         << endl << endl;


        // OUTPUT
        cout << endl << endl << endl
             << "\t\t\t= COMPUTATION RESULTS =  \n\n" 
             << endl << endl;
        
        cout << " Answer =  : " 
             << guess1 
             << endl << endl;

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
