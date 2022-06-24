/*
 project_02_04_useful_loan_v2.cpp

     AUTHOR :  Eton C. Williams
       DATE :  21 June 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 2: C++ Basics
               p 138           

REQUIREMENTS:
4. Negotiating a consumer loan is not always straightforward. One form of
loan is the discount installment loan, which works as follows. Suppose a loan has a 

face value of $1,000, 
interest rate is 15%,  
duration is 18 months. 

interest is computed by multiplying the face value of $1,000 by 0.15, to yield $150.

Total interest owed = interest multiplied by the loan period of 1.5 years to yield $225 

That amount is immediately deducted from the face value, leaving the consumer with only $775.

Repayment is made in equal monthly installments based on the face value. 

So the monthly loan payment will be $1,000 divided by 18, which is $55.56.

This method of calculation may not be too bad if the consumer needs $775 dollars, but the calculation is a bit more complicated if the consumer needs $1,000.

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
double  loan_face_value;         // = 1000;
double 	interest_rate;           // = 15,
double 	interest_rate_decimal; 
double  useful_loan_amount;
double  loan_period_in_months;   // = 18 
double  loan_period_in_years;    // = 1.5;
double 	interest_owed; 
double  monthly_repayment;
    

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i) Ask the User for the useful loan amount, the interest rate and the loan period in months"
         << endl 
         << " (ii) Calculate and return the Loan Face Value and the Monthly Payment"
         << endl
         << "(iii) Program repeats as many times as neccessary "
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t= INPUT PROMPT =";
        
        cout << endl << endl
             << "Useful Loan Amount? ";
        useful_loan_amount = input_double();

        cout << endl << endl
             << " Interest Rate ( as percentage )? : ";
        interest_rate = input_double();

        cout << endl << endl
             << " Loan Period in Months? : ";
        loan_period_in_months = input_double();
        
        // Echo input
        cout << endl << endl
             << "YOU ENTERED: " 
             << endl << endl;
        
        cout << "useful_loan_amount : " 
             << useful_loan_amount 
             << endl << endl;
        
        cout << "interest_rate : " 
             << interest_rate 
             << endl << endl; 

        cout << "loan_period_in_months : " 
             << loan_period_in_months 
             << endl << endl; 
        
         // CALCULATION
        interest_rate_decimal = interest_rate/100;   
        loan_period_in_years = loan_period_in_months/12;

        loan_face_value = useful_loan_amount 
                        + (  useful_loan_amount * interest_rate_decimal * loan_period_in_years )                                       /  (1 - interest_rate_decimal * loan_period_in_years  ) ;
            
        monthly_repayment = loan_face_value / loan_period_in_months;

        // OUTPUT
        cout << endl << endl
             << "\t\t\t= COMPUTATION RESULTS =  " 
             << endl << endl;
        
        cout << "Loan Face Value : " 
             << loan_face_value 
             << endl << endl;
        
        cout << "The Monthly Payment : " 
             << monthly_repayment 
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

