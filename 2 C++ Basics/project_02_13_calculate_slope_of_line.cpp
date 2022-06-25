/*
project_02_13_calculate_slope_of_line.cpp

     AUTHOR :  Eton C. Williams
       DATE :  25 June 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 2: C++ Basics
               p 136           

REQUIREMENTS:
13. Write a program to calculate the slope between two points x1, y1 and x2, y2.

The points should be entered as four double values in the order x1, y1, x2,
and y2.

The formula to calculate the slope, m, between two points is
m = (y2 - y1)/(X2 - x1);

Output the calculated slope value.

Use this value to output the equation of the line in the form
y = mx + c

You can calculate the value of c from one of the pair of points entered as
input.
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
double x1(0), 
	   x2(0),
	   y1(0),
       y2(0),
        m(0),
        c(0);
    

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i) Take the (x,y) values of two points"
         << endl 
         << " (ii) Calculate the slope, m and the y-intersect, c"
         << endl
         << "(iii) Output the equation of the line "
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t= INPUT PROMPT =";
        
        cout << endl << endl
             << "x1 : ";
        x1 = input_double();

        cout << endl << endl
             << "y1 : ";
        y1 = input_double();

        
        cout << endl << endl
             << "x2 : ";
        x2 = input_double();

        cout << endl << endl
             << "y2 : ";
        y2 = input_double();        
        
        
        // Echo input
        cout << endl << endl
             << "YOU ENTERED: " 
             << endl << endl;
        
        cout << " Point 1: ( " 
             << x1 
             << " , "
             << y1
             << " )"
             << endl << endl;
        
        cout << " Point 2: ( " 
             << x2 
             << " , "
             << y2
             << " )"
             << endl << endl;        

        
        // CALCULATION
        m = (y2 - y1) / (x2 - x1);
        c = y1 - (m * x1 );
        
        
        // OUTPUT
        cout << endl << endl
             << "\t\t\t= COMPUTATION RESULTS =  \n\n" 
             << endl << endl;
        
        cout << "The equation of the line is y = " 
             << m
             << "x + "
             << c
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


