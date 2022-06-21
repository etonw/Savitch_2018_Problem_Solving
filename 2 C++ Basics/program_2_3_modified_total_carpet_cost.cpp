/*
program_2_3_modified_total_carpet_cost.cpp

     AUTHOR :  Eton C. Williams
       DATE :  21 June 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 2: C++ Basics
               p 136           

REQUIREMENTS:
2. A store sells carpets for $2.75 per meter. If a customer buys more than 10 m of carpet, they get a discount of 15% on every additional meter of carpet they purchase. Write a program that inputs the carpet length that a user wishes to buy, stores the value in a double variable, and then calculates
and outputs the total cost of the carpet.

3. Modify your program from Programming Project 2 so that the minimum
length of carpet that is applicable for the discount, the percent rate of the
discount, and the cost per meter can be input by the user.

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
    double total_length(0);
    double min_length_for_discount(0);
    double discount_rate_percentage(0);
    double discount_percent_decimal(0);
    double cost_per_meter(0);    
    double total_cost(0);
    

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "      This program will :"
         << endl 
         << "  (i) Take the length of carpet, minimum length applicable for discount, the percent rate for discount, cost per meter of carpet that the User wants to buy"
         << endl 
         << " (ii) Determine the discount "
         << endl 
         << "(iii) Calculate and Output the Total Cost"
         << endl << endl;
    
    // program runs at least once, good for testing
    do{          
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t\t\t= INPUT PROMPT =" 
             << endl << endl
             << "Please enter the total length of carpet you wish to buy : ";
        total_length = input_double();
        
        cout << endl << endl
             << " Please enter the minimum length applicable for discount : ";
        min_length_for_discount = input_double();
        
        cout << endl << endl
             << "Please enter the the percent rate for discount  : ";
        discount_rate_percentage = input_double();
        
        cout << endl << endl
             << "Please enter the cost per meter of carpet : ";
        cost_per_meter = input_double();
        cout << endl << endl;
       
        // Echo input
        cout << endl << endl
             << "YOU ENTERED: " 
             << endl << endl;
        
        cout << "Total Length : " 
             << total_length 
             << endl << endl;
            
        cout << "min_length_for_discount : " 
             << min_length_for_discount 
             << endl << endl;
            
        cout << "discount_rate_percentage : " 
             <<  discount_rate_percentage 
             << endl << endl;
            
        cout << "cost_per_meter : " 
             << cost_per_meter 
             << endl << endl; 
        
         // CALCULATION
        discount_percent_decimal = 1 - ( discount_rate_percentage / 100 );
        
    	if (    total_length > min_length_for_discount    )
        {
        	//discount of 15% on every additional meter
        	total_cost = (    (total_length - min_length_for_discount) * cost_per_meter * discount_percent_decimal    ) 
                       + (    min_length_for_discount * cost_per_meter    );        
        }
    	else
        {
            total_cost = total_length * cost_per_meter;
        }
        
        set_decimal_places();
        // OUTPUT
        cout << endl << endl
             << "\t\t\t\t\t= COMPUTATION RESULTS =  \n\n" 
             << endl << endl
             << "Total Cost = " 
             << total_cost 
             << endl << endl; 
        
        // USER determines if program repeats
        cout << endl << endl
             << "Repeat Program ? ";
        REPEAT = input_char_y_or_n();   
    } while (REPEAT == 'y' || REPEAT == 'Y');    //condition to repeat the program

    //echo input
    cout << endl << endl
         << "You entered: "
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


