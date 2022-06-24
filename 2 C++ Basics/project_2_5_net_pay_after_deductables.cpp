/*
project_2_5_net_pay_after_deductables.cpp

     AUTHOR :  Eton C. Williams
       DATE :  21 June 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 3: More Flow Of Control
               p 139           

REQUIREMENTS:
6. An employee is paid at a rate of $16.78 per hour for the first 40 hours
worked in a week. Any hours over that are paid at the overtime rate of oneand-
one-half times that. From the worker’s gross pay, 6% is withheld for
Social Security tax, 14% is withheld for federal income tax, 5% is withheld
for state income tax, and $10 per week is withheld for union dues. If the
worker has three or more dependents, then an additional $35 is withheld
to cover the extra cost of health insurance beyond what the employer pays.
Write a program that will read in the number of hours worked in a week
and the number of dependents as input and will then output the worker’s
gross pay, each withholding amount, and the net take-home pay for the
week. For a harder version, write your program so that it allows the calculation
to be repeated as often as the user wishes. 
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
const double pay_rate = 16.78;
const double social_security_tax_rate = 0.06;
const double federal_income_tax_rate = 0.05;
const double union_dues = 10;
const double dependents_insurance_deductable = 35;
const double overtime_rate = 1.5;

double hours_per_week_worked(0), 
        social_security_tax(0),
        federal_income_tax(0),
        number_of_dependents(0),
        gross_pay(0),
        net_pay(0);
        
        
    

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i) Ask how many hours have been worked in a week"
         << endl 
         << " (ii) Ask the number of dependents"
         << endl
         << "(iii) Will calculate and present the gross pay, each deduction and the net pay "
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t= INPUT PROMPT =";
        
        cout << endl << endl
             << "how many hours have been worked in a week? ";
        hours_per_week_worked = input_double();

        cout << endl << endl
             << "  number of dependents ? : ";
        number_of_dependents = input_double();
       
        // Echo input
        cout << endl << endl
             << "YOU ENTERED: " 
             << endl << endl;
        
        cout << "hours_per_week_worked : " 
             << hours_per_week_worked 
             << endl << endl;
        
        cout << "number_of_dependents : " 
             << number_of_dependents 
             << endl << endl; 
        
         // CALCULATION
        if (hours_per_week_worked <= 40)  
        {
            gross_pay = hours_per_week_worked * pay_rate;
            social_security_tax = gross_pay * social_security_tax_rate;
            federal_income_tax = gross_pay * federal_income_tax_rate;
        }
        else
        {
            gross_pay =  ((hours_per_week_worked - 40) * pay_rate * overtime_rate ) + 40 * pay_rate;
            social_security_tax = gross_pay * social_security_tax_rate;
            federal_income_tax = gross_pay * federal_income_tax_rate;
            // dependents_insurance_deductable = 35;
            //union_dues = 10;
        }        
        if (number_of_dependents >= 3)
        {    
            net_pay = gross_pay - social_security_tax - federal_income_tax - union_dues - dependents_insurance_deductable;
        }    
        else
        {
            net_pay =  gross_pay - social_security_tax - federal_income_tax - union_dues;
        }

        // OUTPUT

        set_decimal_places();
        
        cout << endl << endl
             << "\t\t\t= COMPUTATION RESULTS =  \n\n" 
             << endl << endl;
        
        cout << "gross_pay :" 
             << gross_pay 
             << endl << endl;
        
        cout << "social_security_tax :" 
             << social_security_tax 
             << endl << endl; 

        cout << "federal_income_tax :" 
             << federal_income_tax 
             << endl << endl;  

        cout << "dependents_insurance_deductable :" 
             << dependents_insurance_deductable 
             << endl << endl;  

        cout << "union_dues :" 
             << union_dues 
             << endl << endl;   
        
        cout << "net_pay :" 
             << net_pay 
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


