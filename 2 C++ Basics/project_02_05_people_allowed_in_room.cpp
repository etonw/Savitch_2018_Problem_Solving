/*
project_2_5_people_allowed_in_room.cpp


     AUTHOR :  Eton C. Williams
       DATE :  21 June 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 2: C++ Basics
               p 136           

REQUIREMENTS:
5. Write a program that determines whether a meeting room is in violation of
fire law regulations regarding the maximum room capacity. The program
will read in the maximum room capacity and the number of people attending
the meeting. If the number of people is less than or equal to the
maximum room capacity, the program announces that it is legal to hold
the meeting and tells how many additional people may legally attend. If
the number of people exceeds the maximum room capacity, the program
announces that the meeting cannot be held as planned due to fire regulations
and tells how many people must be excluded in order to meet the
fire regulations. For a harder version, write your program so that it allows
the calculation to be repeated as often as the user wishes. If this is a class
exercise, ask your instructor whether you should do this harder version.


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
    double maximum_room_capacity(0);
    double number_of_attendees(0);
    double additional_attendees_possible(0);
    double attendees_to_remove(0);

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i) Read in the Maximum Room Capacity and the Number of People attending the meeting "
         << endl 
         << " (ii) Determine if the room is below or above capacity"
         << endl
         << "(iii) Determine how many people may enter the room or have to leave the room "
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t= INPUT PROMPT =";
        
        cout << endl << endl
             << "What is the Maximum Room Capacity? ";
        maximum_room_capacity = input_double();

        cout << endl << endl
             << " How many People are attending the meeting? : ";
        number_of_attendees = input_double();
       
        // Echo input
        cout << endl << endl
             << "YOU ENTERED: " 
             << endl << endl;
        
        cout << "maximum_room_capacity : " 
             << maximum_room_capacity 
             << endl << endl;
        
        cout << "number_of_attendees : " 
             << number_of_attendees 
             << endl << endl; 
        
         // CALCULATION and OUTPUT
        cout << endl << endl
             << "\t\t\t= COMPUTATION RESULTS =  \n\n" 
             << endl << endl;
        
        if (number_of_attendees <= maximum_room_capacity ) 
        {
            //cout "legal to hold the meeting
        	additional_attendees_possible = maximum_room_capacity - number_of_attendees;

            cout << "It is is legal to hold the meeting. " 
                 << endl << endl;
    
            cout << "You can have  : " 
                 << additional_attendees_possible 
                 << " more attendees possible." 
                << endl << endl;
        }   
        else if (number_of_attendees > maximum_room_capacity )
        {
            // cout "meeting cannot be held due to fire regulations
        	attendees_to_remove = number_of_attendees - maximum_room_capacity ;
            
            cout << "The meeting cannot be held due to fire regulations" 
                 << endl << endl;
    
            cout << attendees_to_remove 
                 << " must leave the meeting for it to be legal." 
                 << endl << endl;
        }

       
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


