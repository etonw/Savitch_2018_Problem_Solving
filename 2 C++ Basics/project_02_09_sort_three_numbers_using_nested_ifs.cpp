/*
project_2_9_sort_three_numbers_using_nested_ifs.cpp

     AUTHOR :  Eton C. Williams
       DATE :  21 June 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 2: C++ Basics
               p 136           

REQUIREMENTS:
9. Write a program that reads in three int values. The numbers should then
be output in ascending order from smallest to largest. Can you do this
with only if statements and three int variables (Hint: try nesting if statements
or using the && operator)? What happens if you input three identical
numbers?

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
    double a(0), b(0), c(0) ; 

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i) Will read three integers"
         << endl 
         << " (ii) Will output the numbers from smallest to largest"
         << endl << endl;
    
    // program runs at least once, good for testing
    do{          
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t= INPUT PROMPT =";
        
        cout << endl << endl
             << "Please enter the first number,a : ";
        a = input_double();

        cout << endl << endl
             << "Please enter the second number,b : ";
        b = input_double();
        
        cout << endl << endl
             << "Please enter the third number,c : ";
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
                        
        if (  (a > b)  &&  (a > c)  )  // a is the largest
        {
        	if (b > c) { cout <<  c << " " <<  b << " " << a; }
        	else       { cout << b  << " " <<  c << " " << a; }
        }
        else if (  (b > a)  &&  (b > c)  ) // b is the largest
        {	
            if (a > c) { cout << c << " "  <<  a << " " << b; }
        	else       { cout << a <<  " " <<  c << " " << b; }
        }
        else if (  (c > a)  && ( c > b)  ) // c is the largest
        {
        	if (b > a) { cout << a << " " << b << " " << c;}
        	else       { cout << b << " " << a << " " << c; }
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


