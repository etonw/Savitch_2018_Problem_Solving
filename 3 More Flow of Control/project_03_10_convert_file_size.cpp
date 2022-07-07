/*
project_03_10_convert_file_size.cpp

     AUTHOR :  Eton C. Williams
       DATE :  06 July 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 3: More Flow of Control
               p 208           

REQUIREMENTS:

10. Computer file sizes are measured in units of bytes, or higher units like
kilobytes, megabytes, or gigabytes. Bytes, kilobytes, megabytes, and
gigabytes are related by the following:
a. One kilobyte is equal to 1024 bytes.
b. One megabyte is equal to 1024 kilobytes.
c. One gigabyte is equal to 1024 megabytes.
Write a program that lets the user convert the size of a file from gigabytes,
megabytes, or kilobytes to bytes. The program should prompt the user to
enter the size of the file and the units the file size is being measured in,
with G for gigabytes, M for Megabytes and K for Kilobytes. The program
should then output the size of the file in each of the corresponding
smaller file size types. For example, if the user enters the file size in
megabytes, the program should output the file size in kilobytes and bytes.


*/

#include <iostream>
#include <cmath>   
using namespace std;

//PROTOTYPE FUNCTIONS
double input_double();
char input_char_switch_y_n();
void set_decimal_places();
void program_end();
char  input_char_switch_G_M_K();

//initialize global variables and CONSTANTS
char REPEAT;  //User determines if program repeats

int main() 
{
	// VARIABLES
    double size(0) ; 
    char type = ' ' ; 


    // PROGRAM DESCRIPTION
	cout << endl 
         << endl;
    cout << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"   << endl 
         << "  (i) Take as the input the file size"    << endl 
         << " (ii) And output the conversion in either kilobyte, megabyte or gigabyte"    << endl
         << endl;
    
    // program runs at least once, good for testing
    do{        
        // INPUT
        cout << endl << endl
             << endl;
        cout << "\t\t\t\t\t\t= INPUT PROMPT =" << endl << endl;
        
        cout << " What is the size of the file ? : ";
        size = input_double();

        cout << endl << endl;
        cout << " What are the units of the file size ? : ";
        type = input_char_switch_G_M_K();
       
        // Echo input
        cout << endl 
             << endl;
        cout << "\t\t\t\t\tYOU ENTERED: "           << endl 
             << endl;
        cout << "\t\t\t\t\t size : "         << size  << endl 
             << endl;
        cout << "\t\t\t\t\t type : "         << type  << endl 
             << endl;
        
         // CALCULATION and OUTPUT

        cout << endl << endl;
        cout << "\t\t\t\t\t\t= COMPUTATION RESULTS =  " << endl;

        set_decimal_places();
        switch(type)
        {
            case 'G':

            cout << " The file size is equal to "  << size * 1024  << " Megabytes" << endl
                 << " and " << size * 1024 * 1024 << " Kilobytes ";
             
            break;

            case 'M':
            cout << " The file size is equal to "  << size / 1024 << " Gigabytes" << endl
                 << " and " << size * 1024 << " Kilobytes ";
            break;

            case 'K':
            cout << " The file size is equal to "  << size / (1024 *1024) << " Gigabytes" << endl
                 << " and " << size / 1024 << " Megabytes ";
            break;


            default:   //  no legal option was entered		
                cout << endl
                     << " Error: No type was chosen.  " << endl
    			     << " Choose again." << endl << endl;
            
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

char input_char_switch_G_M_K()
{
    char char_input = ' ';
    do
    {
	    cout << "\t\t[G=Gigabyte, M=Megabyte, K=Kilobyte] " ;
        cin >> char_input;
        switch(char_input)
	    {
    		case 'G':
    		case 'g':  // allow for both upper and lower case letters
    			char_input = 'G';
    			break;
    		
    		case 'M':
    		case 'm':
    			char_input = 'M';
    			break;

    		case 'K':
    		case 'k':
    			char_input = 'K';
    			break;
            
            default:   //  no legal option was entered		
                cout << endl
                     << " Not a valid choice. " << endl
    			     << " Choose again." << endl << endl;
		} 
    } while(char_input != 'G' && char_input != 'M' && char_input != 'K');  // loop until correct input entered
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

