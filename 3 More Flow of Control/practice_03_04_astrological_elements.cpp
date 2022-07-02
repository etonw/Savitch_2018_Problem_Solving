/*
practice_02_04_astrological_elements.cpp

     AUTHOR :  Eton C. Williams
       DATE :  28 June 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 3: More Flow of Control
               p 205           

REQUIREMENTS:
4. Horoscope Signs of the same Element are most compatible. There are 4 Elements in astrology, and 3 Signs in each:

FIRE (Aries, Leo, Sagittarius), 
EARTH (Taurus, Virgo, Capricorn), 
AIR (Gemini, Libra, Aquarius), 
WATER (Cancer, Scorpio, Pisces).

According to some astrologers, you are most comfortable with your own sign and the other two signs in your Element. For example, Aries would be most comfortable with other Aries and the two other FIRE signs, Leo and Sagittarius.

Modify your program from Practice Program 3 to  also display the name of the signs that will be compatible for the birthd.

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
    int m(0), d(0) ; // entered month and day values

    // INTRODUCTION
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i) Take as input from the user their birthd. "
         << endl 
         << " (ii) Respond with the sign and horoscope for that birthd."
         << endl
         << "(iii) Respond with the sign and horoscope if date is within 2 ds  of that sign. "
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        valid_input = false; 
        
        cout << endl << endl
                 << "\t\t\t\t\t= INPUT PROMPT =";

        do // first check for valid input then assign sign and horoscope 
        {
            
            //prompt
            cout << endl << endl << "Please enter your birthdate [month] :? ";
            cin  >> m;
    
            cout << endl << endl << "Please enter the birthdate [day] : ";
            cin  >> d;
           
            // Echo input
            cout << endl << endl << "YOU ENTERED: "  << endl 
                 << endl;
            
            cout << "month : "   << m  << endl 
                 << endl;
            
            cout << "day : "     << d  << endl 
                 << endl; 
            
            // COMPUTATION        
            if     ((m == 3 && ( 21 <= d && d <= 31)) || (m == 4 && ( 1 <= d && d <= 19)))
            {
                aries();
                cout << endl << "You share the Fire sign with Leo and Saggitarius" << endl;
            }    
                        
            else if ((m == 4 && (20 <= d && d <= 30)) || (m == 5 && (1 <= d && d <= 20)))
            {
                taurus();
                cout << endl << "You share the Earth sign with Virgo and Capricorn" << endl;
            }  
                
            else if ( (m == 5 && (21 <= d && d <= 31)) || (m == 6 && (1 <= d && d <= 21)))
            {
                gemini();
                cout << endl << "You share the Air sign with Libra and Aquarius" << endl;
            }    
                
            else if ((m == 6 && (22 <= d && d <= 30)) || (m == 7 && (1 <= d && d <= 22)))
            {
                cancer();
                cout << endl << "You share the Water sign with Scorpio and Pisces" << endl;
            }    
                
            else if ((m == 7 && (23 <= d && d <= 31)) || (m == 8 && (1 <= d && d <= 22)))
            {
                leo();
                cout << endl << "You share the Fire sign with Aries and Saggitarius" << endl;
            }    
                
            else if ((m == 8 && (23 <= d && d <= 31)) || (m == 9 && (1 <= d && d <= 22)))
            {
                virgo();
                cout << endl << "You share the Earth sign with Taurus and Capricorn" << endl;
            }    
                
            else if ((m == 9 && (23 <= d && d <= 30)) || (m == 10 && (1 <= d && d <= 22)))
            {
                libra();
                cout << endl << "You share the Air sign with Gemini and Aquarius" << endl;
            }    
                
            else if ((m == 10 && (23 <= d && d <= 31)) || (m == 11 && (1 <= d && d <= 21)))
            {
                scorpio();
                cout << endl << "You share the Water sign with Cancer and Pisces" << endl;
            }    
                
            else if ((m == 11 && (23 <= d && d <= 30)) || (m == 12 && (1 <= d && d <= 21)))
            {
                sagittarius();
                cout << endl << "You share the Fire sign with Leo and Aries" << endl;
            } 
                
            else if ((m == 12 && (22 <= d && d <= 31)) || (m == 1 && (1 <= d && d <= 19)) )
            {
                capricorn();
                cout << endl << "You share the Earth sign with Virgo and Taurus" << endl;
            }  
                
            else if ((m == 1 && (20 <= d && d <= 31)) ||  (m == 2 && (1 <= d && d <= 18)) )
            {
                aquarius();
                cout << endl << "You share the Air sign with Libra and Gemini" << endl; 
            } 
                
            else if ((m == 2 && (19 <= d && d <= 28)) || (m == 3 && (1 <= d && d <= 20)) )
            {
                pisces(); 
                cout << endl << "You share the Water sign with Cancer and Pisces" << endl;  
            } 
            
            else // Error statement
            {
                valid_input = false; 
                cout << "You have not entered a valid birthd" << endl
                     << " Please enter another set of numbers" << endl
                     << endl;
            }    
    
        } while(valid_input == false);    // repeats until input valid

        // assign cusps if within 2 ds of another horoscope
        if      (m == 3 && ( 21 <= d && d <= 23 ))  { cusp(); pisces(); }
        else if (m == 4 && ( 17 <= d && d <= 19 )) {  cusp(); taurus();  }       

        else if (m == 4 && ( 20 <= d && d <= 22 )) {  cusp(); aries(); }       
        else if (m == 5 && ( 18 <= d && d <= 20 )) {  cusp(); gemini();  }       

        else if (m == 5 && ( 21 <= d && d <= 23 )) {  cusp(); taurus(); }        
        else if (m == 6 && ( 19 <= d && d <= 21 )) {  cusp(); cancer(); }       

        else if (m == 6 && ( 22 <= d && d <= 24 ) ) {  cusp(); gemini(); }     
        else if (m == 7 && ( 20 <= d && d <= 22 ) ) {  cusp(); leo(); }       

        else if (m == 7 && ( 23 <= d && d <= 25 ) ) {  cusp(); cancer(); }        
        else if (m == 8 && ( 20 <= d && d <= 22 ) ) {  cusp(); virgo(); }       

        else if (m == 8 && ( 23 <= d && d <= 25 ) ) {  cusp(); leo();  }      
        else if (m == 9 && ( 20 <= d && d <= 22 ) ) {  cusp(); libra(); }       

        else if (m == 9 && ( 23 <= d && d <= 25 ) ) {  cusp(); virgo(); }    
        else if (m == 10 && (20 <= d && d <= 22 ) ) { cusp(); scorpio();  }      

        else if (m == 10 && ( 23 <= d && d <= 25 ) ) {  cusp(); libra();  }     
        else if (m == 11 && ( 19 <= d && d <= 21 ) ) {  cusp(); sagittarius(); }        

        else if (m == 11 && ( 22 <= d && d <= 24 ) ) {  cusp(); scorpio(); }       
        else if (m == 12 && ( 19 <= d && d <= 21 ) ) {  cusp();  capricorn(); }      

        else if (m == 12 && ( 22 <= d && d <= 24 ) ) {  cusp(); sagittarius(); }        
        else if (m == 1 && ( 17 <= d && d <= 19 ) ) {  cusp();  aquarius();  }      

        else if (m == 1 && ( 20 <= d && d <= 22 ) ) {  cusp(); capricorn();  }      
        else if (m == 2 && ( 16 <= d && d <= 18 ) ) {  cusp(); pisces();  }     

        else if (m == 2 && ( 19 <= d && d <= 21 ) ) {  cusp(); aquarius(); }       
        else if (m == 3 && ( 18 <= d && d <= 20 ) ) {  cusp(); aries(); }        

        
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
