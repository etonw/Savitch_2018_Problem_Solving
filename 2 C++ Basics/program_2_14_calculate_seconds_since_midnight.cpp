/*
program_2_14_calculate_seconds_since_midnight.cpp

Book:
    Savitch_2018_Problem Soving with C++
    2 C++ Basics
    p 140

Date:   20 June 2022

Author:    Eton Williams

14. Computers normally treat time as the number of seconds from an arbitrary starting point called an epoch.

Write a C++ program that asks the user for the current hour of the day (from 0 to 23), the current minute of the hour (from 0 to 59) and the current second of the minute (from 0 to 59). 

Use the user’s input to calculate the number of seconds since midnight that
their time represents. 

If the user enters an invalid input, like 67 minutes for the current minutes in the hour, then ask them for that value again 

until they enter a correct value. Sample input and output is shown below.

Enter the hour of the day: 3
Enter the minutes of the hour: 45
Enter the seconds passed in the current minute: 25
Enter the seconds passed in the current minute: 90
Enter the seconds passed in the current minute: 3
The time in seconds since midnight is: 45903

*/

#include <iostream>
#include <cmath>   
using namespace std;

//prototype functions
double input_double();
char input_char();
char repeat_query();
void setDecimalPlaces();
int get_current_hours();
int get_current_minutes();
int get_current_seconds();

//initialize global variables and CONSTANTS
char REPEAT;  //User inputs this to determine a repeat of the program

int main() 
{
	// initialize variables
  int current_hour(0),
	current_minute(0),
	current_second(0),
    time_in_seconds_since_midnight(0);
    

    // Start and Program description
	cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;
    cout << "This program will: \n\n"
         << "(i) Ask the user for the hour of the day \n"
         << "(ii) Ask the user for the minute of the hour.\n"
         << "(iii) Ask the user for the seconds passed in the current minute "
         << "(iii) Output the seconds passed since midnight "
         << endl << endl;
    
    do{ //runs repeatedly
        // prompt for input
        cout << "\n\n\t\t\t\t\t\t\t\t= NEW INPUT =\n" << endl << endl;
        current_hour = get_current_hours();
        current_minute = get_current_minutes();
        current_second = get_current_seconds();
       
        // Echo input
        cout << "\n\nYou entered: \n\n current_hour :" 
             << current_hour 
             << "\n current_minute :" 
             << current_minute 
             << "\n current_second :" 
             << current_second 
            << endl << endl; 
        
         // Calculation
        time_in_seconds_since_midnight = ( current_hour * 60 * 60 ) +
						( current_minute * 60 ) +
                        ( current_second );


        cout << "\n\n\t\tTime in seconds since midnight = " 
             << time_in_seconds_since_midnight
             << " seconds"
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
    cout.precision(2);			// set number of decimal places in bracket
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

int get_current_hours ()
{
    int input(0);
        do
        {
        std::cout << "\nEnter the hour of the day: ";
        std::cin >> input;
        } while (  (input < 0)   ||  (input > 23)  );
    return input;    
}

int get_current_minutes ()
{
   int input(0);
    	do
        {
    		std::cout << "\nEnter the minute of the hour: ";
    		std::cin >> input;
        } while (  (input < 0)   ||  (input > 59)  );
    return input;
}

int get_current_seconds()
{
   int input(0);
    	do
        {
    		std::cout << "\nEnter the seconds passed in the current minute: ";
    		std::cin >> input;
        } while (  (input < 0)  ||  (input > 59)  );
    return input;
}


