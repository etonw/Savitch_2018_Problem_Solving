/*
project_absolute_02_03_retroactive_pay.cpp

     AUTHOR :  Eton C. Williams
       DATE :  25 June 2022
       BOOK :  Absolute C++
               Chapter 2: C++ Basics
               p 42           

REQUIREMENTS:
3.Workers at a particular company have won a 7.6% pay increase retroactive for six
months. 

Write a program that takes an employee’s previous annual salary as input
and 

outputs
 the amount of retroactive pay due the employee,
 the new annual salary, and
 the new monthly salary. 

Use a variable declaration with the modifier const to express the pay increase.

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
const double PAY_INCREASE_PERCENT = 0.076;
double previous_annual_salary (0);

double retroactive_pay_due(0);
    double new_annual_salary(0);
double new_monthly_salary(0);
    

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i)  takes an employee’s previous annual salary as input"
         << endl 
         << " (ii)  the amount of retroactive pay due the employee"
         << endl
         << "(iii)  the new annual salary "
         << endl
         << " (iv)  the new monthly salary "        
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t= INPUT PROMPT =";
        
        cout << endl << endl
             << " Enter the employee’s previous annual salary : ";
        previous_annual_salary = input_double();
       
        // Echo input
        cout << endl << endl
             << "YOU ENTERED: " 
             << endl << endl;
        
        cout << "previous_annual_salary : " 
             << previous_annual_salary 
             << endl << endl;
        
         // CALCULATION
        retroactive_pay_due =  (   ( previous_annual_salary  * (1 + PAY_INCREASE_PERCENT) ) - (previous_annual_salary)    )   /  2 ;
                                  
        new_annual_salary =   previous_annual_salary * ( 1 + PAY_INCREASE_PERCENT);
        
        new_monthly_salary =  new_annual_salary / 12;

        set_decimal_places();
        
        // OUTPUT
        cout << endl << endl
             << "\t\t\t= COMPUTATION RESULTS =  \n\n" 
             << endl << endl;
        
        cout << "retroactive_pay_due :" 
             << retroactive_pay_due 
             << endl << endl;
        
        cout << "new_annual_salary :" 
             << new_annual_salary 
             << endl << endl; 
 
        cout << "new_monthly_salary :" 
             << new_monthly_salary 
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


