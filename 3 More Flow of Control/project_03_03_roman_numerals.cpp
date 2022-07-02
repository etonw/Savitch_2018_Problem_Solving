/*
project_03_03_roman_numerals.cpp

     AUTHOR :  Eton C. Williams
       DATE :  2 July 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 3: More Flow of Control
               p 207           

REQUIREMENTS:
3. Write a program that accepts a year written as a four-digit Arabic (ordinary)
numeral and outputs the year written in Roman numerals. 

Important Roman numerals are V for 5, X for 10, L for 50, C for 100, D for 500, and
M for 1,000. 

Recall that some numbers are formed by using a kind of
subtraction of one Roman “digit”; for example, IV is 4 produced as V minus
I, XL is 40, CM is 900, and so on. A few sample years: MCM is 1900, MCML
is 1950, MCMLX is 1960, MCMXL is 1940, MCMLXXXIX is 1989. 

Assume the year is between 1000 and 3000. Your program should include a loop
that lets the user repeat this calculation until the user says she or he is done.

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
    int n(0) ; // input number
    

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i) Take a four digit number between 1000 and 3000"
         << endl 
         << " (ii) Compute and output the Roman numeral equivalent"
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t= INPUT PROMPT =";
        
        cout << endl << endl
             << "lease input a four-digit-number between 1000 and 3000? ";
         cin >> n; 
       
        // Echo input
        cout << endl << endl
             << "YOU ENTERED: " 
             << endl << endl;
        
        cout << "n = : "  //1000 <= n <= 3000
             << n 
             << endl << endl;
        
         // CALCULATION and OUtput
        cout << endl << endl
             << "\t\t\t= COMPUTATION RESULTS =  \n\n" 
             << endl << endl;
        
        cout << n 
             << " is equal to: ";

        // get first number
        int thousands = n/1000 ;
        
        if ( thousands == 1)
        cout << "M";
        else if ( thousands == 2)
        cout << "MM";
        else if( thousands ==3)
        cout << "MMM";
        
        
        // get second number
        
        int hundreds = (n%1000) / 100;
        
        if ( hundreds == 1)
        cout << "C";
        else if ( hundreds == 2)
        cout << "CC";
        else if ( hundreds == 3)
        cout << "CCC";
        else if ( hundreds == 4)
        cout << "CD";
        else if ( hundreds == 5)
        cout << "D";
        else if ( hundreds == 6)
        cout << "DC";
        else if ( hundreds == 7)
        cout << "DCC";
        else if ( hundreds == 8)
        cout << "DCCC";
        else if ( hundreds == 9)
        cout << "CM";
        
        // get third number
        
        int tens = ( (n%1000) %100 )/10;
        if ( tens == 1)
        cout << "X";
        else if (tens == 2)
        cout << "XX";
        else if (tens == 3)
        cout << "XXX";
        else if (tens == 4)
        cout << "XL";
        else if (tens == 5)
        cout << "L";
        else if (tens == 6)
        cout << "LX";
        else if (tens == 7)
        cout << "LXX";
        else if (tens == 8)
        cout << "LXXX";
        else if (tens == 9)
        cout << "XC";
        
        // get fourth number
        int ones =  ( (n%1000) %100 )%10;
        
        if ( ones == 1)
        cout << "I";
        else if (ones == 2)
        cout << "II";
        else if (ones == 3)
        cout << "III";
        else if (ones == 4)
        cout << "IV";
        else if (ones == 5)
        cout << "V";
        else if (ones == 6)
        cout << "VI";
        else if (ones == 7)
        cout << "VII";
        else if (ones == 8)
        cout << "VIII";
        else if (ones == 9)
        cout << "IX";

    cout << endl << endl; 
        
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

