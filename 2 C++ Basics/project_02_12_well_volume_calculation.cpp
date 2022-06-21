/*
project_2_12_well_volume_calculation.cpp

Book:
    Savitch_2018_Problem Soving with C++
    2 C++ Basics
    p 140

Date:   20 June 2022

Author:    Eton Williams

Required:
	 Many private water wells produce only 1 or 2 gallons of water per minute.
    One way to avoid running out of water with these low-yield wells is to use a holding tank. 
    A family of four will use about 250 gallons of
	water per day. However, there is a “natural” water holding tank in the
	casing (that is, the hole) of the well itself. A deeper well stores more
	water that can be pumped out for household use. But how much water
	will be available?
	
	Write a program that allows the user to input the radius of the well casing
	in inches (a typical well will have a 3-inch radius) and the depth of the
	well in feet (assume water will fill this entire depth, although in practice
	that will not be true since the static water level will generally be 50 feet or
	more below the ground surface). 
	
	The program should output the number of gallons stored in the well casing.
	
	For your reference, the volume of a cylinder is πr2h, where r is the radius and h is the height, and 1 cubic foot = 7.48 gallons of water.
	
	For example, a 300-foot-well full of water with a radius of 3 inches for the
	casing holds about 441 gallons of water—plenty for a family of four and
no need to install a separate holding tank.

*/

#include <iostream>
#include <cmath>   
using namespace std;

//prototype functions
double input_double();
char input_char ();
char repeat_query();
void setDecimalPlaces();

//initialize global variables and CONSTANTS
char REPEAT;  //User inputs this to determine a repeat of the program

int main() 
{
	// initialize variables
    const double PI = 3.141592653589793;
    double well_casing_radius_inches(0),
	    well_casing_radius_feet(0),
	    well_depth_feet(0),
	    volume_cubic_feet(0),
        volume_gallons(0);
    

    // Start and Program description
	cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;
    cout << "This program will: \n\n"
         << " (i) Ask for the radius of a well casing in inches,\n"
         << "(ii) Ask for the depth of the well in feet.\n"
         << "(iii) Output the volume of the well in gallons. "
         << endl << endl;
    
    do{ //runs repeatedly
        // prompt for input
        cout << "\n\n\t\t\t\t\t\t\t\t= NEW INPUT =\n" << endl << endl;
        cout << "Radius of a well casing in inches? ";
        well_casing_radius_inches = input_double();
        cout << "\n\n Depth of the well in feet? ";
        well_depth_feet = input_double();
       
        // Echo input
        cout << "\n\n\t\tYou entered: \n well_casing_radius_inches : " 
             << well_casing_radius_inches 
             << "\nWell_depth_feet : " 
             << well_depth_feet 
             << endl << endl; 
        
         // Calculation
        well_casing_radius_feet = well_casing_radius_inches / 12;
        volume_cubic_feet = PI * 
            well_casing_radius_feet * 
            well_casing_radius_feet  * 
            well_depth_feet;
        volume_gallons = volume_cubic_feet * 7.48;

        setDecimalPlaces();

        //output
        cout << "\n\n\t\tVolume of well = " 
             << volume_gallons
             << " gallons."
             << endl << endl;

            
        // function to query if user wishes to continue 
        REPEAT = repeat_query();   
    } while (REPEAT == 'y' || REPEAT == 'Y');    //condition to repeat the program

    //echo input
    cout << "\n\nYou entered: " << REPEAT << endl << endl;

    // end program
	cout << "\n\t\t\t\t\t\t\t~ End of Program ~\n";
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
    cout.precision(1);			// set number of decimal places in bracket
}

// function to query if user wishes to repeat program 
char repeat_query()
{
   char ans;
   std::cout << "\nRepeat Program ? (enter y/n): ";
   std::cin >> ans; 
   return ans;
}

// function to take y/ n char input
char input_char ()
{
    char entered_letter = 'a'; 
    do
        {
            std::cout << " (enter y/n): ";
            std::cin >> entered_letter; 
        
        } while ( entered_letter != 'y' || entered_letter != 'Y' || entered_letter != 'n'|| entered_letter != 'N'  );
    return entered_letter; 
}


