/*
project_02_07_expected_cost_after_inflation.cpp

     AUTHOR :  Eton C. Williams
       DATE :  25 June 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 3: More Flow Of Control
               p 136           

REQUIREMENTS:
7. It is difficult to make a budget that spans several years, because prices are
not stable. If your company needs 200 pencils per year, you cannot simply
use this year’s price as the cost of pencils 2 years from now. Because of
inflation the cost is likely to be higher than it is today.

 Write a program to gauge the expected cost of an item in a specified number of years. The

program asks for the cost of the item,
 the number of years from now that the item will be purchased, and the
 rate of inflation. 

The program then outputs the estimated cost of the item after the specified period. Have the
user enter the inflation rate as a percentage, like 5.6 (percent). Your program
should then convert the percent to a fraction, like 0.056, and should use a
loop to estimate the price adjusted for inflation. (Hint: This is similar to computing
interest on a charge card account, which was discussed in this chapter.)

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
double  cost_of_item(0); 
double	years_in_future(0);
double	rate_of_inflation_percent(0);
double  rate_of_inflation_decimal(0);
double	estimated_cost(0);
int count(0);
    

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i) Ask for the Current Cost of the Item,"
         << endl 
         << " (ii) the Number of Years from now that the item will be purchased"
         << endl
         << "(iii) and the Rate of Inflation "
         << endl
         << "(iv) and will Calculate and Output the Estimated Cost of the item after the specified period"                 
        << endl
         << "(iii) and the Rate of Inflation "
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t= INPUT PROMPT =";
        
        cout << endl << endl
             << "Current Cost of the Item? ";
        cost_of_item = input_double();

        cout << endl << endl
             << " Number of Years from now that the item will be purchased : ";
        years_in_future = input_double();

       cout << endl << endl
             << " Rate of Inflation : ";
        rate_of_inflation_percent = input_double();  

        // Echo input
        cout << endl << endl
             << "YOU ENTERED: " 
             << endl << endl;
        
        cout << "cost_of_item : " 
             << cost_of_item 
             << endl << endl;
        
        cout << "years_in_future : " 
             << years_in_future 
             << endl << endl; 

        cout << "rate_of_inflation_percent : " 
             << rate_of_inflation_percent 
             << endl << endl;         

         // CALCULATION and OUTPUT
        rate_of_inflation_decimal = rate_of_inflation_percent / 100;
        count = years_in_future;
        estimated_cost = cost_of_item;
        
        cout << "\t\t\t= COMPUTATION RESULTS =  \n\n" 
             << " count \t\t estimated_cost "
             << endl << endl;    
        
        while (count > 0)
        {
        	estimated_cost = estimated_cost  *   (1 + rate_of_inflation_decimal) ;   // CHECK THIS

            set_decimal_places();
            cout << count
                 << " \t\t "
                 << estimated_cost
                 << endl;
            count--;
        }

        cout << endl << endl;
        
        cout << "estimated_cost :" 
             << estimated_cost 
             << endl << endl;
        
        cout << "count :" 
             << count 
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


