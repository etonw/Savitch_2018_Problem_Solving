/*
project_02_01_artificial_sweetner

Book:
    Savitch_2018_Problem Soving with C++
    2 C++ Basics
    p 136

Date:   13 June 2022

Author:    Eton Williams

Required:
1. A government research lab has concluded that an artificial sweetener commonly used in diet soda pop will cause death in laboratory mice. A friend of yours is desperate to lose weight but cannot give up soda pop. Your friend wants to know 

how much [CANS] diet soda pop it is possible to drink without dying as a result. 

The input to the program is the amount of 
artificial sweetener needed to kill a mouse (use 5 grams), 
the mass of the mouse (use 35 grams), 
and the weight of the dieter (use 45400 grams for a 100 pound person). 

Assume that the lethal dose for a mouse is proportional to the lethal dose for the human.

A single can of soda pop has a mass of 350 grams. 

To ensure the safety of your friend, 

be sure the program requests the weight at which the dieter will stop dieting, rather than the dieter’s current weight. 

Assume that diet soda contains 1/10th of 1% artificial sweetener. 

Use a variable declaration with the modifier const to give a name to this fraction. 

You may want to express the percent as the double value 0.001. 

Your program should allow the calculation to be repeated as often as the user wishes.

*/

#include <iostream>
#include <cmath>   
using namespace std;

//prototype functions
double input_double();
char repeat_query();
void setDecimalPlaces();

//initialize global variables and CONSTANTS

int main() 
{
	// initialize variables
char REPEAT;  //User inputs this to determine a repeat of the program
const double GRAMS_IN_A_POUND = 454;
const double CAN_MASS = 350;
const double PERCENT_SWEETNER_PER_CAN = 0.001;
double mouse_mass (0);  
double mass_artifical_sweetner_to_kill_mouse(0);
double dieter_weight(0);
double dieter_mass(0);    
    
    // Start and Program description
	cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;
    cout << "This program will: \n\n"
         << " Will determine how many cans of soda one may have. \n"
         << " Without being poisoned\n"
         << " \n\n";
    
    do{ //runs repeatedly
        // prompt for input
        cout << "\n\n\t\t\t\t\t\t\t\t= NEW INPUT =\n" << endl;
        
        cout << "\n What is the mass of the test mouse? ";
        mouse_mass = input_double();
        
        cout << "\n What is the mass of the artificial sweetner needed to kill the mouse? ";
        mass_artifical_sweetner_to_kill_mouse = input_double();
        
        cout << "\n What will be the weight in pounds of the dieter when he stops dieting? ";
        dieter_weight = input_double();      
        
        // Echo input
        cout << "\n\n\t\tYou entered: \n\nMass_of_mouse " 
             << mouse_mass 
            
             << "\n\nMass of the artificial sweetner needed to kill the mouse :" 
             << mass_artifical_sweetner_to_kill_mouse 
            
             << "\n\nWeight of the dieter when stops dieting: "
             << dieter_weight; 

        
         // Calculation

        dieter_mass = dieter_weight * GRAMS_IN_A_POUND;   // 45400 g
        
        double mass_sweetner_in_one_can = CAN_MASS * PERCENT_SWEETNER_PER_CAN;  // = 0.35 g
      
        double lethal_proportion_per_unit_mass = mass_artifical_sweetner_to_kill_mouse / mouse_mass;   // 0.142857
        
        double max_mass_sweetner_dieter_can_ingest = lethal_proportion_per_unit_mass * dieter_mass; // = 6485.7142 g
        
        double number_of_cans_lethal = max_mass_sweetner_dieter_can_ingest / mass_sweetner_in_one_can;   
        
        cout << "\n\nALL CALCULATIONS: ";
        
        cout << "\n\nmass of the dieter: "
             << dieter_mass;

        cout << "\n\nmass_sweetner_in_one_can: "
             << mass_sweetner_in_one_can;

        cout << "\n\nlethal_proportion_to_per_unit_mass: "
             << lethal_proportion_per_unit_mass;
        
        cout << "\n\nmax_mass_sweetner_dieter_can_ingest: "
             << max_mass_sweetner_dieter_can_ingest; 

        cout << "\n\nANS: number_of_cans_lethal: "
             << number_of_cans_lethal; 
        
        cout << "\n\n\t\tANS: The number of cans of soda that can be safely ingested is : " 
             << floor(number_of_cans_lethal)
             << " when the dieter is at weight = "
             << dieter_weight
             << " pounds."
             << endl;

            
        // function to query if user wishes to continue 
        REPEAT = repeat_query();   
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
