/*
practice_03_03_astrological_predictions_2.cpp

     AUTHOR :  Eton C. Williams
       DATE :  28 June 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 3: More Flow of Control
               p 204           

REQUIREMENTS:
3. Write an astrology program. The 

user types in a birthday, and the program responds with the sign and horoscope for that birthday. The month may be entered as a number from 1 to 12. Then enhance your program so that if the birthday is only one or two days away from an adjacent sign,
the program announces that the birthday is on a “cusp” and also outputs
the horoscope for that nearest adjacent sign.

This program will have a long multiway branch. Make up a horoscope for each sign. 

Your program should include a loop that lets the user repeat this calculation until the user says she or he is done.

The horoscope signs and dates are:

Aries March 21–April 19
    3 21-23 cusp(); pisces();
    4 17-19 cusp(); taurus(); 
Taurus April 20–May 20
    4 20-22 cusp(); aries();
    5 18-20 cusp(); gemini();
Gemini May 21–June 21
    5 21-23 cusp(); taurus(); 
    6 19-21 cusp(); cancer();
Cancer June 22–July 22
    6 22-24 cusp(); gemini();
    7 20-22 cusp(); leo();
Leo July 23–August 22
    7 23-25 cusp(); cancer();
    8 20-22 cusp(); virgo();
Virgo August 23–September 22
    8 23-25 cusp(); leo();
    9 20-22 cusp(); libra();
Libra September 23–October 22
    9 23-25 cusp(); virgo();
    10 20-22 cusp(); scorpio();
Scorpio October 23–November 21
    10 23-25 cusp(); libra();
    11 19-21 cusp(); sagittarius();
Sagittarius November 22–December 21
    11 22-24 cusp(); scorpio();
    12 19-21 cusp(); capricorn();
Capricorn December 22–January 19
    12 22-24 cusp(); sagittarius();
    1 17-19 cusp(); aquarius();
Aquarius January 20–February 18
    1 20-22 cusp(); capricorn();
    2 16-18 cusp(); pisces();
Pisces February 19–March 20
    2 19-21 cusp(); aquarius();
    3 18-20 cusp(); aries();


Reflection: 
- learnt to check for error with the use == inside a while loop, instead of using a =
- keep it simple - used multistatement if-else (48 statements) to check if entered values for month and day were correct instead of a function
    - learnt to use a combination of boolean statements in those if-else statements

- used a void function for the output statements :p

took almost 360 minutes to complete

*/

#include <iostream>
#include <cmath>   
using namespace std;

//PROTOTYPE FUNCTIONS
char input_char_switch_y_n();
void program_end();

void cusp();

void aries();
void taurus();
void gemini();
void cancer();
void leo();
void virgo();
void libra();
void scorpio();
void sagittarius();
void capricorn();
void aquarius();
void pisces();

//initialize global variables and CONSTANTS
char REPEAT = 'y';  //User input to determine if program runs more than once
bool valid_input = false;  // set to True when input in valid range

int main() 
{
	// VARIABLES
    int month(0), day(0) ; 

    // INTRODUCTION
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i) Take as input from the user their birthday. "
         << endl 
         << " (ii) Respond with the sign and horoscope for that birthday."
         << endl
         << "(iii) Respond with the sign and horoscope if date is within 2 days  of that sign. "
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        valid_input = false; 
        
        cout << endl << endl
                 << "\t\t\t\t\t= INPUT PROMPT =";

        do // first check for valid input then assign sign and horoscope 
        {
            
            //prompt
            cout << endl << endl << "Please enter your birthday [month] :? ";
            cin  >> month;
    
            cout << endl << endl << " Please enter the birthday [day] : ";
            cin  >> day;
           
            // Echo input
            cout << endl << endl << "YOU ENTERED: "  << endl 
                 << endl;
            
            cout << "month : "   << month  << endl 
                 << endl;
            
            cout << "day : "     << day    << endl 
                 << endl; 
            
            // COMPUTATION        
            if      (month == 3 && ( 21 <= day && day <= 31))  aries();
            else if (month == 4 && ( 1 <= day && day <= 19))  aries();
                
            else if (month == 4 && (20 <= day && day <= 30)) taurus();
            else if (month == 5 && (1 <= day && day <= 20)) taurus();
                
            else if (month == 5 && (21 <= day && day <= 31)) gemini();
            else if (month == 6 && (1 <= day && day <= 21)) gemini();
                
            else if (month == 6 && (22 <= day && day <= 30)) cancer();
            else if (month == 7 && (1 <= day && day <= 22)) cancer();
                
            else if (month == 7 && (23 <= day && day <= 31)) leo();
            else if (month == 8 && (1 <= day && day <= 22) ) leo();
                
            else if (month == 8 && (23 <= day && day <= 31)) virgo();
            else if (month == 9 && (1 <= day && day <= 22) ) virgo();
                
            else if (month == 9 && (23 <= day && day <= 30)) libra();
            else if (month == 10 && (1 <= day && day <= 22)) libra();
                
            else if (month == 10 && (23 <= day && day <= 31)) scorpio();
            else if (month == 11 && (1 <= day && day <= 21)) scorpio();
                
            else if (month == 11 && (23 <= day && day <= 30)) sagittarius();
            else if (month == 12 && (1 <= day && day <= 21)) sagittarius();
                
            else if (month == 12 && (22 <= day && day <= 31)) capricorn();
            else if (month == 1 && (1 <= day && day <= 19)) capricorn();
                
            else if (month == 1 && (20 <= day && day <= 31)) aquarius(); 
            else if (month == 2 && (1 <= day && day <= 18)) aquarius();  
                
            else if (month == 2 && (19 <= day && day <= 28)) pisces();
            else if (month == 3 && (1 <= day && day <= 20)) pisces();    
            
            else // Error statement
            {
                valid_input = false; 
                cout << "You have not entered a valid birthday" << endl
                     << " Please enter another set of numbers" << endl
                     << endl;
            }    
    
        } while(valid_input == false);    // repeats until input valid

        // assign cusps if within 2 days of another horoscope
        if      (month == 3 && ( 21 <= day && day <= 23 ))  { cusp(); pisces(); }
        else if (month == 4 && ( 17 <= day && day <= 19 )) {  cusp(); taurus();  }       

        else if (month == 4 && ( 20 <= day && day <= 22 )) {  cusp(); aries(); }       
        else if (month == 5 && ( 18 <= day && day <= 20 )) {  cusp(); gemini();  }       

        else if (month == 5 && ( 21 <= day && day <= 23 )) {  cusp(); taurus(); }        
        else if (month == 6 && ( 19 <= day && day <= 21 )) {  cusp(); cancer(); }       

        else if (month == 6 && ( 22 <= day && day <= 24 ) ) {  cusp(); gemini(); }     
        else if (month == 7 && ( 20 <= day && day <= 22 ) ) {  cusp(); leo(); }       

        else if (month == 7 && ( 23 <= day && day <= 25 ) ) {  cusp(); cancer(); }        
        else if (month == 8 && ( 20 <= day && day <= 22 ) ) {  cusp(); virgo(); }       

        else if (month == 8 && ( 23 <= day && day <= 25 ) ) {  cusp(); leo();  }      
        else if (month == 9 && ( 20 <= day && day <= 22 ) ) {  cusp(); libra(); }       

        else if (month == 9 && ( 23 <= day && day <= 25 ) ) {  cusp(); virgo(); }    
        else if (month == 10 && (20 <= day && day <= 22 ) ) { cusp(); scorpio();  }      

        else if (month == 10 && ( 23 <= day && day <= 25 ) ) {  cusp(); libra();  }     
        else if (month == 11 && ( 19 <= day && day <= 21 ) ) {  cusp(); sagittarius(); }        

        else if (month == 11 && ( 22 <= day && day <= 24 ) ) {  cusp(); scorpio(); }       
        else if (month == 12 && ( 19 <= day && day <= 21 ) ) {  cusp();  capricorn(); }      

        else if (month == 12 && ( 22 <= day && day <= 24 ) ) {  cusp(); sagittarius(); }        
        else if (month == 1 && ( 17 <= day && day <= 19 ) ) {  cusp();  aquarius();  }      

        else if (month == 1 && ( 20 <= day && day <= 22 ) ) {  cusp(); capricorn();  }      
        else if (month == 2 && ( 16 <= day && day <= 18 ) ) {  cusp(); pisces();  }     

        else if (month == 2 && ( 19 <= day && day <= 21 ) ) {  cusp(); aquarius(); }       
        else if (month == 3 && ( 18 <= day && day <= 20 ) ) {  cusp(); aries(); }        

        
        REPEAT = input_char_switch_y_n();   // USER determines if program repeats
    } while (REPEAT == 'Y');    //condition to repeat the program
    program_end();
    
    return 0; 
} // end main

// function: take y/ n char input: easily modified for other char input
char input_char_switch_y_n()
{
    char char_input = ' ';
    do
    {
	    cout << endl << "\t\tRepeat program?  Y (Yes) /  N (No) " ;
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

void cusp()
{
        cout <<  endl << "You are on the cusp of " ;
}

void aries()
{
        valid_input = true;
        cout <<  "Aries" << endl;
        cout <<  "HOROSCOPE: OK " << endl << endl;
}
void taurus()
{
        valid_input = true;
        cout <<  "Taurus" << endl;
        cout << "HOROSCOPE: mad" << endl;
}
void gemini()
{
        valid_input = true;
        cout <<  "Gemini" << endl;
        cout << "HOROSCOPE: funny" << endl;
}
void cancer()
{
        valid_input = true;
        cout <<  "Cancer" << endl;
        cout << "HOROSCOPE: elated" << endl;
}
void leo()
{
        valid_input = true;
        cout <<  "Leo" << endl;
        cout << "HOROSCOPE: relentless" << endl;
}
void virgo()
{
        valid_input = true;
        cout <<  "Virgo" << endl;
        cout << "HOROSCOPE: superb" << endl;
}
void libra()
{
        valid_input = true;
        cout <<  "Libra" << endl;
        cout << "HOROSCOPE: funny but true" << endl;
}
void scorpio()
{
        valid_input = true;
        cout <<  "Scorpio" << endl;
        cout << "HOROSCOPE: achieve the goal" << endl;
}
void sagittarius()
{
        valid_input = true;
        cout <<  "Sagittarius" << endl;
        cout << "HOROSCOPE: Successful" << endl;
}
void capricorn()
{
        valid_input = true;
        cout <<  "Capricorn" << endl;
        cout << "HOROSCOPE: biting" << endl;
}
void aquarius()
{
        valid_input = true;
        cout << "Aquarius" << endl;
        cout << "HOROSCOPE: good find" << endl; 
}
void pisces()
{
        valid_input = true;
        cout <<  "Pisces" << endl;
        cout << "HOROSCOPE: well done" << endl;
}
