/*
project_01_01_long_distance_calls.cpp

     AUTHOR :  Eton C. Williams
       DATE :  29 June 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 3: More Flow of Control
               p 204           

REQUIREMENTS:
1. Write a program that computes the cost of a long-distance call. The cost of
the call is determined according to the following rate schedule:

a. Any call started between 8:00 am and 6:00 pm, Monday through Friday,
is billed at a rate of $0.40 per minute.

b. Any call starting before 8:00 am or after 6:00 pm, Monday through
Friday, is charged at a rate of $0.25 per minute.

c. Any call started on a Saturday or Sunday is charged at a rate of $0.15
per minute.

The input will consist of the day of the week, the time the call started, and
the length of the call in minutes. The output will be the cost of the call. The
time is to be input in 24-hour notation, so the time 1:30 pm is input as
13:30

The day of the week will be read as one of the following pairs of character
values, which are stored in two variables of type char:
Mo Tu We Th Fr Sa Su

Be sure to allow the user to use either uppercase or lowercase letters or a
combination of the two. 

The number of minutes will be input as a value of type int. 
(You can assume that the user rounds the input to a whole number of minutes.) 

Your program should include a loop that lets the
user repeat this calculation until the user says she or he is done.

*/

#include <iostream>
#include <cmath>   
using namespace std;

//PROTOTYPE FUNCTIONS
double input_double();
void set_decimal_places();
void program_end();
char input_char_switch_y_n();

char input_day_char_switch();
int get_time_of_day();

//initialize global variables and CONSTANTS
char REPEAT;  //User input to determine if program runs more than once

char day_char1 = ' ';
char day_char2 = ' ';

int call_length(0);
int time_of_day(0);


int main() 
{
   
double cost(1);
    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i) Input the day, time and length of a phone call"
         << endl 
         << " (ii) Calculate and return the cost of the phone call"
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t= INPUT PROMPT =";
        
       char day_char1 = ' ';
       char day_char2 = ' ';

        cout << endl << endl
             << "Please enter the day: [ Mo | Tu | We | Th | Fr | Sa | Su ] "
             << endl;
    
        day_char1 = input_day_char_switch();
        day_char2 = input_day_char_switch();

        cout << endl << endl
             << "Please enter the length of the call in minutes:  "
             << endl;
        cin >> call_length;

        time_of_day >> get_time_of_day();
        

        // Echo input
        cout << endl << endl
             << "YOU ENTERED: " 
             << endl << endl;
        
        cout << "day_char1 : " 
             << day_char1 
             << endl << endl;
        
        cout << "day_char2 : " 
             << day_char2 
             << endl << endl;

        cout << " Length of call is " 
             << call_length 
             << " minutes"
             << endl << endl; 

        cout << " Time of day is " 
             << time_of_day 
             << " hrs"
             << endl << endl;    

        
         // CALCULATION
        if (day_char1 == 'M' && day_char2 == 'o')
        {
            if (800 <= time_of_day && time_of_day <= 1800)
            {
                cost = 0.4 * call_length;
            }
            else if ( (0 <= time_of_day && time_of_day <= 800 )  || (1800 < time_of_day && time_of_day <= 2400 ) )
            {
                cost = 0.25 * call_length;
            }
        }
        else if (day_char1 == 'T' && day_char2 == 'u') 
        {
            if (800 <= time_of_day && time_of_day <= 1800)
            {
                cost = 0.4 * call_length;
            }
            else if ( (0 <= time_of_day && time_of_day <= 800 )  || (1800 < time_of_day && time_of_day <= 2400 ) )
            {
                cost = 0.25 * call_length;
            }
        }
        else if (day_char1 == 'W' && day_char2 == 'e') 
        {
            if (800 <= time_of_day && time_of_day <= 1800)
            {
                cost = 0.4 * call_length;
            }
            else if ( (0 <= time_of_day && time_of_day <= 800 )  || (1800 < time_of_day && time_of_day <= 2400 ) )
            {
                cost = 0.25 * call_length;
            }
        }
        else if (day_char1 == 'T' && day_char2 == 'h') 
        {
            if (800 <= time_of_day && time_of_day <= 1800)
            {
                cost = 0.4 * call_length;
            }
            else  if ( (0 <= time_of_day && time_of_day <= 800 )  || (1800 < time_of_day && time_of_day <= 2400 ) )
            {
                cost = 0.25 * call_length;
            }
        }
        else if (day_char1 == 'F' && day_char2 == 'r') 
        {
             if (800 <= time_of_day && time_of_day <= 1800)
            {
                cost = 0.4 * call_length;
            }
            else  if ( (0 <= time_of_day && time_of_day <= 800 )  || (1800 < time_of_day && time_of_day <= 2400 ) )
            {
                cost = 0.25 * call_length;
            }
        }
        else if (day_char1 == 'S' && day_char2 == 'a') 
        {
            cost = 0.15 * call_length;
        }
        else if (day_char1 == 'S' && day_char2 == 'u') 
        {
            cost = 0.15 * call_length;
        }

       set_decimal_places();
        
        cout << "The total cost of the phone call is $ "
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

// function: take  char input
char input_day_char_switch()
{

    char char_input = ' ';
    do
    {
	    cout << endl
             << "(Enter a single char, followed by Enter)"
             << endl;
        
        cin >> char_input;
        switch(char_input)
	    {
    		case 'M':
    		case 'm':  // allow for both upper and lower case letters
    			char_input = 'M';
    			break;
    		
    		case 'O':
    		case 'o':
    			char_input = 'o';
    			break;
    		
    		case 'T':
    		case 't':
    			char_input = 'T';
    			break;
    		
    		case 'U':
    		case 'u':
    			char_input = 'u';
    			break;
    		
    		case 'W':
    		case 'w':
    			char_input = 'W';
    			break;
    		
    		case 'E':
    		case 'e':
    			char_input = 'e';
    			break;
    		
    		case 'H':
    		case 'h':
    			char_input = 'h';
    			break;
    		
    		case 'F':
    		case 'f':
    			char_input = 'F';
    			break;
    		
    		case 'R':
    		case 'r':
    			char_input = 'r';
    			break;
    		
    		case 'S':
    		case 's':
    			char_input = 'S';
    			break;
    		
    		case 'A':
    		case 'a':
    			char_input = 'a';
    			break;
    		
         
            default:   //  no legal option was entered		
                cout << endl
                     << " Not a valid choice. " << endl
    			     << " Choose again." << endl << endl;
		} 
    } while(char_input != 'M' && char_input != 'o' && char_input != 'T' &&     
            char_input != 'u' && char_input != 'W' && char_input != 'e' && 
            char_input != 'h' && char_input != 'F' && char_input != 'r' &&
            char_input != 'S' && char_input != 'a' );  // loop until correct input entered
    
	return char_input;
} // end function

int get_time_of_day() // returns 0 <= time of day <= 2400
{
    do
    {
        cout << endl
             << "Please enter the time of day: [24-hour format: XXXX]  "
             << endl;

        cin >> time_of_day;
    		
        if (0  > time_of_day || time_of_day > 2400)  // input outside desired range
        {
             cout << endl
                     << " Not a valid choice. " << endl
                     << " Choose again." << endl << endl;
        }	

	} while(0  > time_of_day || time_of_day > 2400);  // loop until correct input entered
	return time_of_day;
}
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

