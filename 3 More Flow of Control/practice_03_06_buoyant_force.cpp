/*
practice_03_06_buoyant_force.cpp

     AUTHOR :  Eton C. Williams
       DATE :  28 June 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 3: More Flow of Control
               p 204           

REQUIREMENTS:
6. Buoyancy is the ability of an object to float. Archimedes’ principle states
that the buoyant force is equal to the weight of the fluid that is displaced
by the submerged object. The 

buoyant force can be computed by Fb = V * y
where Fb  is the buoyant force, V is the volume of the submerged object,
and y is the specific weight of the fluid. 

If Fb  is greater than or equal to the weight of the object, then it will float, otherwise it will sink.

Write a program that inputs the weight (in pounds) and radius (in feet)
of a sphere and outputs whether the sphere will sink or float in water.

Use y = 62.4 lb/ft3  as the specific weight of water. 

The volume of a sphere is computed by (4/3)πr3

*/

#include <iostream>
#include <cmath>   
using namespace std;

//PROTOTYPE FUNCTIONS
double input_double();
char input_char_switch_y_n();
void set_decimal_places();
void program_end();


//initialize global variables and CONSTANTS
char REPEAT;  //User input to determine if program runs more than once

int main() 
{
	// VARIABLES
    double bouyant_force(0),
            volume(0),
            specific_weight_water = 62.4,
            radius(0),
            weight(0); 

    

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i) Input the weight ( in pounds) of a sphere"
         << endl 
         << " (ii) Input the radius (in feet) of a sphere"
         << endl
         << "(iii) Output whether the sphere will sink or float "
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t= INPUT PROMPT =";
        
        cout << endl << endl
             << "Input the weight ( in pounds) of the sphere? ";
        weight = input_double();

        cout << endl << endl
             << " Input the radius (in feet) of the sphere : ";
        radius = input_double();
       
        // Echo input
        cout << endl << endl
             << "YOU ENTERED: " 
             << endl << endl;
        
        cout << "weight : " 
             << weight 
             << endl << endl;
        
        cout << "radius : " 
             << radius 
             << endl << endl; 
        
         // CALCULATION
        volume = ( 4/3) * (22/7) * radius * radius * radius;
        bouyant_force = volume * specific_weight_water;

        // OUTPUT
        cout << endl << endl
             << "\t\t\t= COMPUTATION RESULTS =  \n\n" 
             << endl << endl;

        if (bouyant_force >= weight)
        {
            cout << "volume =" 
                 << volume 
                 << endl << endl;
        
            cout << "bouyant_force :" 
                 << bouyant_force 
                 << endl << endl; 

            cout << "weight : " 
                 << weight 
                 << endl << endl;
            
            cout << " The sphere will float" << endl << endl;
        }
        else
        {
            cout << "volume =" 
                 << volume 
                 << endl << endl;
        
            cout << "bouyant_force :" 
                 << bouyant_force 
                 << endl << endl; 

            cout << "weight : " 
                 << weight 
                 << endl << endl;
            
            cout << " The sphere will sink" << endl << endl;
        }
        
        REPEAT = input_char_switch_y_n();   // USER determines if program repeats
    } while (REPEAT == 'Y');    //condition to repeat the program
    void program_end(); //echo input and end program
return 0; 
}// end main

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

// function: take y/ n char input: easily modified for other char input
char input_char_switch_y_n()
{
    char char_input = ' ';
    do
    {
	    cout << "\t\tRepeat program?  Y (Yes) /  N (No) " ;
        cin >> char_input;
        switch(char_input)
	    {
    		case 'Y':
    		case 'y':  // allow for both upper and lower case letters
    			char_input = 'Y';
    			break;
    		
    		case 'N':
    		case 'n':
    			char_input = 'N';
    			break;

          
            default:   //  no legal option was entered		
                cout << endl
                     << " Not a valid choice. " << endl
    			     << " Choose again." << endl << endl;
		} 
    } while(char_input != 'Y' && char_input != 'N' );  // loop until correct input entered
	return char_input;
} // end function

void program_end() //echo input and end program
{
    cout << endl << endl
     << "\t\tYou entered : "
     << REPEAT
     << "\t\tGood bye"
     << endl << endl
     << "\t\t\t\t\t= END OF PROGRAM =\n"
     << endl;
}
/* //  mutlistatement if-else for boolean comparison

    if (player1 == 'P' && player2 == 'P')
    {
        cout <<  "Paper selected by both Players. Nobody wins." << endl;
    }
    
    else if (player1 == 'P' && player2 == 'R')
    {	
        cout << "Paper covers Rock. Player1 wins" << endl; 
    }
    
    else
    {    
        cout << "there is a problem with the entered inputs for the players";
    }

*/

