/*
self_test_37_gallons_to_liters.cpp

Savitch_2018_Problem Soving with C++
2 C++ Basics
p 129

37. Write a complete C++ program that 

asks the user for a number of gallons
and then outputs the equivalent number of liters. 

There are 3.78533 liters in a gallon. 
Use a declared constant.

Since this is just an exercise, you need not have any comments in your program.
*/

#include <iostream>
using namespace std;

//prototype functions
double input_double ();
void setDecimalPlaces();

int main() 
{
	cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;

	// initialize variables
    const double LITERS_TO_GALLONS = 3.78533;
    double gallons, liters; 

    // prompt
    cout << "This program converts gallons to liters.\n";
    cout << "How many gallons? ";
    gallons = input_double();
    
    // Echo inputs
    cout << "\n\nYou input: " << gallons << endl; 
    
    // calculation
    liters = LITERS_TO_GALLONS * gallons;

    // format number after decimal point
    setDecimalPlaces();
    
	// output
    cout << "\n\n" << gallons << " gallons = " << liters << " liters\n" << endl;
    
	cout << "\n\n\t\t\t\t\t\t\t~ End of Program ~\n" << endl;
	return 0; 
}

// function for taking numerical input ( double) from the user
double input_double ()
{
    double output; 
    std::cout << "Enter number: ";
    std::cin >> output;
    std::cout << endl;
    return output; 
}

// function to format number of decimal places
void setDecimalPlaces()
{
    cout.setf(ios::fixed);		
    cout.setf(ios::showpoint);
    cout.precision(2);			//2 decimal places in bracket
}
