/*
project_03_02_solve_quadratic_equation.cpp

     AUTHOR :  Eton C. Williams
       DATE :  01 July 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 3: More Flow of Control
               p 206           

REQUIREMENTS:
2. (This Project requires that you know some basic facts about complex
numbers, so it is only appropriate if you have studied complex numbers
in some mathematics class.)

Write a C++ program that solves a quadratic equation to find its roots.
The roots of a quadratic equation a*x*x + b*x + c = 0

(where a is not zero) are given by the formula
(−b ± sqrt(b*b − 4*a*c)) / 2*a

The value of the discriminant (b2 − 4ac) determines the nature of roots.

If the value of the discriminant is zero, then the equation has a single real
root. If the value of the discriminant is positive then the equation has two
real roots. If the value of the discriminant is negative, then the equation
has two complex roots.

The program takes values of a, b, and c as input and outputs the roots.

Be creative in how you output complex roots. 

Include a loop that allows the
user to repeat this calculation for new input values until the user says she
or he wants to end the program.

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
    double a(0), b(0), c(0), x1(0), x2(0), i1(0), i2(0); 

    

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i) Solve a quadratic equation a*x*x + b*x  + c = 0"
         << endl 
         << " (ii) It will input the values of a, b and c"
         << endl
         << "(iii) Solve the equation and output the roots of the equation "
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t= INPUT PROMPT =";
        
        cout << endl << endl
             << " What is the value of 'a': ? ";
        a = input_double();

        cout << endl << endl
             << " What is the value of 'b': ? ";
        b = input_double();

        cout << endl << endl
             << " What is the value of 'c': ? ";
        c = input_double();

       
        // Echo input
        cout << endl << endl
             << "YOU ENTERED: " 
             << endl << endl;
        
        cout << "a : " 
             << a 
             << endl << endl;
        
        cout << "b : " 
             << b 
             << endl << endl; 
        
        cout << "c : " 
             << c 
             << endl << endl; 
        
        // CALCULATION and OUTPUT
        cout << endl << endl
             << "\t\t\t= COMPUTATION RESULTS =  \n\n" 
             << endl << endl;
        
        if ( a != 0)
        {
            if ( (b*b - 4*a*c) > 0 )       // two real roots
            {
                x1 = ( -b + sqrt(b*b - 4*a*c) ) / 2*a;
                x2 = ( -b - sqrt(b*b - 4*a*c) ) / 2*a;
                
                cout << " For equation "<< a << "x*x + " << b << "x + "<< c << " = 0" 
                     <<   endl << endl;
                cout << "x1 = " << x1 << endl << endl;
                cout << "x2 = " << x2 << endl << endl;                
            }
            else if ( (b*b - 4*a*c) == 0 )  // single real root
            {
                x1 = ( -b ) / 2*a;

                cout << " For equation "<< a << "x*x + " << b << "x + "<< c << " = 0" 
                     <<   endl << endl;                
                cout << " Single real root, x = "
                     << x1 << endl << endl;
          
            }
            else if ( (b*b - 4*a*c) < 0 )      // two imaginary roots
            {
                double negative_square = b*b - 4*a*c;
                double now_positive_square_root = sqrt(negative_square / -1);

                x1 = ( -b/(2*a) );
                i1 = (now_positive_square_root) / 2*a;
                x2 = ( -b/(2*a) );
                i2 = (now_positive_square_root) / 2*a;
                cout << " For equation "<< a << "x*x + " << b << "x + "<< c << " = 0" 
                     <<  endl << endl;                
                cout << "x1 = " << x1 << " + " << i1 << " * i " << endl << endl;
                cout << "x2 = " << x2 << " - " << i2 << " * i " << endl << endl;                    
            }
        }
        else    // a == 0, not quadratic equation
        {
            cout << " a == 0; This is not a quadratic equation"
                    << endl << endl
                    << "Goodbye"
                    << endl << endl;
        }
        
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

