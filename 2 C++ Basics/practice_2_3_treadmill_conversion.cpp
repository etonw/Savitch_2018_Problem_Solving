/*
practice_2_3_treadmill_conversion.cpp
Book:
    Savitch_2018_Problem Soving with C++
    2 C++ Basics
    p 136

Date:   13 June 2022

Author:    Eton Williams

Required:
3. Many treadmills output the speed of the treadmill in miles per hour
(mph) on the console, but most runners think of speed in terms of a
pace. A common pace is the number of minutes and seconds per mile instead of mph.

Write a program that 
starts with a quantity in mph and converts the quantity into minutes and seconds per mile.
As an example, the proper output for an input of 6.5 mph should be 9 minutes and 13.8 seconds per mile. 

If you need to convert a double to an int, which will discard any value after the decimal point, then you may use
intValue = static_cast<int>(dblVal);

mph to minutes and seconds

6.5 mph == 9 minutes, 13.8 seconds
6.5 mph == 553.8 seconds
1 mph == 85.2 seconds


total_pace_seconds = miles_per_hour * SECONDS_IN_1_MPH;
total_pace_minutes_incl_decimal =  total_pace_seconds / 60;               // = 3.45;
pace_minutes = static_cast<int>(total_pace_minutes_incl_decimal)          // extract whole number
pace_minutes_decimal_part = total_pace_minutes_incl_decimal - floor(total_pace_minutes_incl_decimal);      // extract decimal 
pace_seconds = pace_minutes_decimal_part * 60;

*/

#include <iostream>
#include <cmath>   
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
    const double SECONDS_IN_1_MPH = 85.2;
    double miles_per_hour(0),
           total_pace_seconds(0),
           total_pace_minutes_incl_decimal(0),
           pace_minutes_1(0),
           pace_minutes_2(0),
           pace_seconds(0),
           pace_minutes_decimal_part(0) ; 
    

    // Start and Program description
	cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;
    cout << "This program will: \n\n"
         << "Convert Miles Per Hour into a pace of Minutes and Seconds \n\n";
    
    do{ //runs repeatedly
        // prompt or input
        cout << "\n\n\t\t\t\t\t\t\t\t= NEW INPUT =\n" << endl;
        cout << "\nWhat is the Miles Per Hour? ";
        miles_per_hour = input_double();
       
        // Echo input
        cout << "\n\n\t\tYou entered: \t Miles Per Hour? " 
             << miles_per_hour 
             << "\n";    
   
        // Calculation      
        total_pace_seconds = miles_per_hour * SECONDS_IN_1_MPH;
        total_pace_minutes_incl_decimal =  total_pace_seconds / 60;               // i.e. = 3.45;
        pace_minutes_1 = static_cast<int>(total_pace_minutes_incl_decimal);         // extract whole number
        pace_minutes_2 = floor(total_pace_minutes_incl_decimal);
        pace_minutes_decimal_part = total_pace_minutes_incl_decimal - floor(total_pace_minutes_incl_decimal);      // extract decimal 
        pace_seconds = pace_minutes_decimal_part * 60;

        // Output
        cout << "\n\n\t\tYour pace is\t "
            << pace_minutes_1
            <<" minutes (with static_cast) and "
            << pace_seconds
            << " seconds";

        cout << "\n\n\t\tYour pace is\t "
            << pace_minutes_2
            <<" minutes (with floor() function) and "
            << pace_seconds
            << " seconds";        
        
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
    cout.precision(2);			// set number of decimal places in bracket
}

// function to query if user wishes to continue 
char repeat_query()
{
   char ans;
   std::cout << "\n\nRepeat Program ? (enter y/n): ";
   std::cin >> ans; 
   return ans;
}




