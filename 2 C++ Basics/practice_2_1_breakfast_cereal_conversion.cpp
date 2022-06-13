/*
practice_2_1_breakfast_cereal_conversion.cpp

Book:
    Savitch_2018_Problem Soving with C++
    2 C++ Basics
    p 135

Date:    June 2022

Author:    Eton Williams

Required:
1. A metric ton is 35,273.92 ounces. 

Write a program that will read the weight of a package of breakfast cereal in ounces and 

output the weight in metric tons as well as 
the number of boxes needed to yield 1 metric ton of cereal.

Your program should allow the user to repeat this calculation as often as the user wishes.
*/

#include <iostream>
#include <cmath>  //needed for ceil() function to roundup to nearest integer
using namespace std;

//prototype functions
double input_double();
char repeat_query();
void setDecimalPlaces();

//initialize global variables and CONSTANTS
char REPEAT;  //User inputs this to determine a repeat of the program

int main() 
{
	// initialize variables
    const double OUNCES_IN_TON = 35273.92;
    double package_weight_tons, 
           package_weight_ounces, 
           box_weight_tons, 
           box_weight_ounces, 
           number_boxes_rounded_up, 
           fraction_boxes_to_make_a_ton; 
    int boxes_in_package ; 

    // Start and Program description
	cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;
    
    cout << "This program will: \n\n"
         << "1. Convert cereal package weight from ounces to tons\n"
         << "2. Calculate how many ceral boxes to make a ton of cereal.\n"
         << "   [Note: 35273.92 ounces in 1 ton ]\n\n";
    
    do{        //runs repeatedly
        // prompt
        cout << "\nHow many ounces does the package of cereal weigh? ";
        package_weight_ounces = input_double();
        cout << "\nHow many boxes of cereal are in the package? ";
        boxes_in_package = input_double();

        setDecimalPlaces();    // format number after decimal point
        
        // Echo input
        cout << "\n\n\t\tYou entered: \tThe package weighs " 
             << package_weight_ounces 
             << " ounces and each package holds " 
             << boxes_in_package 
             << " individual boxes of cereal.\n"; 

        // Calculation
        package_weight_tons = package_weight_ounces * (1/OUNCES_IN_TON);
        box_weight_tons = package_weight_tons / boxes_in_package;          // normal to returns a number < 1
        fraction_boxes_to_make_a_ton = 1.0  / box_weight_tons;            // most likely scenario like   2.3,   1.23
        
    	// 1. Convert cereal package weight from ounces to tons
        cout << "\n\n\t\tCalculation results : " 
             << package_weight_ounces 
             << " ounces of cereal in a package weigh "
             << package_weight_tons
             << " tons.\n";

        // 2. Calculate how many ceral boxes to make a ton of cereal.
        if (  (fraction_boxes_to_make_a_ton > 0)  &&  (box_weight_tons > 1)  )   // box weighs over a ton
        {
        cout <<"\n\t\tEvaluation: Each box already weighs " 
             << box_weight_tons   
             << " tons. So one ceral box weighs enough to reach a ton.\n";
        }
        else if (  (fraction_boxes_to_make_a_ton > 0)  &&  (box_weight_tons < 1) )  // box weighs under a ton like 0.013
        {
        number_boxes_rounded_up = ceil(fraction_boxes_to_make_a_ton);    // function to roundup to nearest integer
        cout <<"\n\t\tEvaluation: Each box weighs " 
             << box_weight_tons 
             << " tons. So "
             << number_boxes_rounded_up 
             << " boxes are needed for 1 ton of cereal.\n";           
        } 
        else if ( fraction_boxes_to_make_a_ton == 1 )         
        {
        cout << "\n\t\tEvaluation: Each box weighs exactly 1 ton."     // box weighs exactly a ton
             << " So one ceral box weighs enough to reach a ton.\n";
        }
        
        REPEAT = repeat_query();   // function to query if user wishes to continue 
    } while (REPEAT == 'y' || REPEAT == 'Y');    //condition to repeat the program

    //echo input
    cout << "`\nYou entered: " << REPEAT << endl;

    // end program
	cout << "\n\n\t\t\t\t\t\t\t~ End of Program ~\n";
    cout << endl;
	return 0; 
}

// function for taking numerical input ( double) from the user
double input_double ()
{
    double entered_number; 
    std::cout << " (enter number): ";
    std::cin >> entered_number;
    return entered_number; 
}

// function to format number of decimal places
void setDecimalPlaces()
{
    cout.setf(ios::fixed);		
    cout.setf(ios::showpoint);
    cout.precision(8);			// set number of decimal places in bracket
}

// function to query if user wishes to continue 
char repeat_query()
{
   char ans;
   std::cout << "\nRepeat Program ? (enter y/n): ";
   std::cin >> ans; 
   return ans;
}




