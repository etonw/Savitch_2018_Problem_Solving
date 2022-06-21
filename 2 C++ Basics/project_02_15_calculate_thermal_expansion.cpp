/*
project_2_15_calculate_thermal_expansion.cpp

Book:
    Savitch_2018_Problem Soving with C++
    2 C++ Basics
    p 142

Date:   20 June 2022

Author:    Eton Williams

Required:
15. It is important to consider the effect of thermal expansion when building a
structure that must withstand changes in temperature. For example, a metal
beam will expand in hot temperatures. The additional stress could cause
the structure to fail. Similarly, a material will contract in cold temperatures.
The linear change in length of a material if it is allowed to freely expand is
described by the following equation:
delta_L= alpha * L0* delta_T

Here, L0 is the initial length of the material in meters, delta_L is the displacement
in meters, delta_T is the change in temperature in Celsius, and alpha is a coefficient
for linear expansion.

Write a program that inputs a, LΔ, and TΔ, then calculates and outputs the
linear displacement. If the displacement is positive then output that “The
material will expand by” the displacement in meters. 

If the displacement is negative then output that “The material will contract by” the displacement in meters. 

You shouldn’t output the displacement as a negative number.

Here are some values for alpha for different materials.
Aluminum 2.31 × 10−5
Copper 1.70 × 10−5
Glass 8.50 × 10−6
Steel 1.20 × 10−5

*/

#include <iostream>
#include <cmath>   
using namespace std;

//prototype functions
double input_double();
char input_char ();
char repeat_query();
void set_decimal_places();
double get_material_alpha();
string get_material_name();

//initialize global variables and CONSTANTS
char REPEAT;  //User inputs this to determine a repeat of the program

int main() 
{
	// initialize variables
 
    
    double initial_length(0), 
        delta_length(0),
        displacement_meters(0),
        delta_temperature(0),
        alpha(0),
        positive_value(0);
    int choice (0); 
    string material_name = " ";

    // Start and Program description
	cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;
    cout << "This program will: \n\n"
         << "(i) ask the user which material is the calculation is for \n"
         << "(ii) ask the user to input its initial length and the change in temperature.\n"
         << "(iii) Calculate and output the change in length as either an expansion or contraction. "
         << endl << endl;
    
    do{ //runs repeatedly
        // prompt for input
        //ask for which ALPHA, intial_length, delta_temperature
               do
               {
                    cout << "What material will you perform this calculation for?: "
                        << "\nEnter 1 for Aluminum "
                        << "\nEnter 2 for Copper "
                        << "\nEnter 3 for Glass "
                        << "\nEnter 4 for Steel\n\n"
                        << "Your selection: ";
                    cin >> choice;
            
                    if (choice == 1)
                    {
                        alpha = 2.31e-5;  
                        material_name = "Aluminum";
                    }
                    else if(choice == 2)
                    {
                        alpha = 1.70e-5;   
                        material_name = "Copper";                
                    }
                    else if(choice == 3)
                    {
                        alpha =  8.50e-6;          
                        material_name = "Glass";
                    }
                    else if(choice == 4)
                    {
                        alpha =  1.20e-5;  
                        material_name = "Steel";                
                    }
                   } while (choice != 1  &&  choice != 2  &&  choice != 3  &&  choice != 4 );  
            

        cout << "\n\n What is the initial length of the material? ";
        initial_length = input_double();
        cout << "\n\n What is the change in temperature of the material? ";
        delta_temperature = input_double();
       
        // Echo input
        cout << "\n\n\t\tYou entered: \n\n"
             << material_name 
             << " as the material, " 
             << "\nCoefficient of linear expansion, alpha of = " 
             << alpha 
             << "\nIntial_length = " 
             << initial_length             
             << "\nChange in temperature = " 
             << delta_temperature             
             << " degrees Celcius." 
             << endl << endl; 
        
         // Calculation
        delta_length = alpha * initial_length * delta_temperature;

        set_decimal_places();
        // Output
            if (delta_length > 0)
            {
                cout << "The material will expand by : "
                    << delta_length
                    << " meters";
            }
            else   // if delta_length < 0, do not output a negative number, divide by -1
            {
                positive_value = delta_length / -1;
                cout << "The material will contract by : "
                << positive_value
                << " meters";
            }

        REPEAT = repeat_query();   // function to query if user wishes to continue 
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
void set_decimal_places()
{
    cout.setf(ios::fixed);		
    cout.setf(ios::showpoint);
    cout.precision(5);			// set number of decimal places in bracket
}

// function to query if user wishes to repeat program 
char repeat_query()
{
   char ans;
   std::cout << "\n\nRepeat Program ? (enter y/n): ";
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
