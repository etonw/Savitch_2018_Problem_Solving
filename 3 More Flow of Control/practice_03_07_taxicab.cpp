/*
practice_03_07_taxicab.cpp

     AUTHOR :  Eton C. Williams
       DATE :  28 June 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 3: More Flow of Control
               p 205           

REQUIREMENTS:
7. A taxicab company calculates charges using a fixed $3.20 hire charge, a
$2.05-per-kilometer charge for the distance covered, and an additional
$0.95-per-minute charge based on the duration of the journey, in minutes. If
the journey starts between 2300 and 0600 hours, a 15% surcharge is applied.

Write a program that asks the user to input the 
duration of the journey (rounded up to the nearest minute), 
the distance traveled (in kilometers),
and the journey start time (as a 24-hour single int value). 



The program should then output the fare that should be charged.

*/

#include <iostream>
#include <cmath>   
using namespace std;

//PROTOTYPE FUNCTIONS
double input_double();
char input_char_switch_y_n();
void set_decimal_places();
void program_end();
double input_double_range();


//initialize global variables and CONSTANTS
char REPEAT;  //User input to determine if program runs more than once

int main() 
{
	// VARIABLES
    int minute(0), distance(0), start(0); 
    double cost(0);

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i) Input the  duration of the journey (to the nearest minute),"
         << endl 
         << " (ii) the distance travelled, and the journey start time (24-hour single int value)"
         << endl
         << "(iii) Calculate and output the cost of the taxi ride "
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t= INPUT PROMPT =";
        
        cout << endl << endl
             << "duration of the journey (to the nearest minute)? : ";
        minute = input_double();

        cout << endl << endl
             << " the distance travelled? : ";
        distance = input_double();

        cout << endl << endl
             << " journey start time (24-hour single int value)? : ";
        start = input_double_range();       
        
         // CALCULATION
        cost = 0;
        cost = cost + 3.20; // fixed surcharge
        double cost_distance = distance * 2.05;
        double cost_minute = minute * 0.95;
        cost = cost + cost_distance + cost_minute;

        if (  (23 <= start && start <=24) || (0 <= start && start <=6)  )   // 15% surcharge
        {
            cost = cost * 1.15;
        }    

        // OUTPUT
        cout << endl << endl
             << "\t\t\t= COMPUTATION RESULTS =  \n\n" 
             << endl << endl;
        
        cout << "The cost of the journey is : " 
             << cost 
             << endl << endl;

        
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
double input_double_range()
{
    bool valid_input = false; 
    double n; 

    do 
    {
        std::cout << " (enter number between 0 and 24): ";
        std::cin >> n;
        if (0 <=n && n <=24 ) 
        {
            valid_input = true;
        } 
        else // Error statement
        {
            valid_input = false; 
            cout << "You have not entered a valid input" << endl
                 << endl;
        }    
    } while(valid_input == false);
    return n; 
}
