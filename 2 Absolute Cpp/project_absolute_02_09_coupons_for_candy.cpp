/*
project_absolute_02_09_coupons_for_candy.cpp

     AUTHOR :  Eton C. Williams
       DATE :  25 June 2022
       BOOK :  Absolute C++
               Chapter 2: C++ Basics
               p 42                  

REQUIREMENTS:
9. The video game machines at your local arcade output coupons depending on how
well you play the game. You can redeem 

10 coupons for a candy bar or 
3 coupons for a gumball.

You prefer candy bars to gumballs. Write a program that 

inputs the number of coupons you win and 

outputs how many candy bars and gumballs you can get if you spend all of your coupons on candy bars first and any remaining coupons on gumballs.

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
    int coupons (0);
    int candy_bars(0);
    int gumballs(0);
    string xxxxxxxxxx;
    
     
    

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i) Ask the user for how many coupons they have"
         << endl 
         << " (ii) outputs how many candy bars they can have "
         << endl
         << "(iii) and then how many gumballs they can have using those coupons"
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t= INPUT PROMPT =";
        
        cout << endl << endl
             << "How many coupons you got, gangster ? : ";
        coupons = input_double();
      
        // Echo input
        cout << endl << endl
             << "YOU ENTERED: " 
             << endl << endl;
        
        cout << "coupons : " 
             << coupons 
             << endl << endl;
        
         // CALCULATION

        candy_bars = coupons / 10 ;
        gumballs = (coupons % 10 ) / 3;

        // OUTPUT
        cout << endl << endl
             << "\t\t\t= COMPUTATION RESULTS =  \n\n" 
             << endl << endl;
        
        cout << "candy_bars :" 
             << candy_bars 
             << endl << endl;

        cout << "gumballs :" 
             << gumballs 
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


