/*
practice_03_01_paper_rock_sissors.cpp

     AUTHOR :  Eton C. Williams
       DATE :  25 June 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 3: More Flow of Control
               p 204           

REQUIREMENTS:
1. Write a program to score the paper-rock-scissor game. Each of two users
types in either P, R, or S. The program then announces the winner as
well as the basis for determining the winner: Paper covers rock, Rock
breaks scissors, Scissors cut paper, or Nobody wins. Be sure to
allow the users to use lowercase as well as uppercase letters. Your program
should include a loop that lets the user play again until the user says she
or he is done.

*/

#include <iostream>
#include <cmath>   
using namespace std;

//PROTOTYPE FUNCTIONS
double input_double();
char input_char_y_or_n();
void set_decimal_places();
char input_char_switch();

//initialize global variables and CONSTANTS
char REPEAT;  //User input to determine if program runs more than once

int main() 
{
	// VARIABLES
        char player1 = ' ', player2 = ' ';
    

    // program description
	cout << endl << endl
         << "\t\t\t\t\t=  PROGRAM DESCRIPTION =\n" << endl;
    cout << "This program will :"
         << endl 
         << "  (i) Play the Paper-Rock-Sissors game"
         << endl 
         << " (ii) For each round: Ask each user to input P, R or S"
         << endl
         << "(iii) Compute and declare the result of each round "
         << endl << endl;
    
    // program runs at least once, good for testing
    do{        
        // INPUT
        cout << endl << endl
             << "\t\t\t\t\t= INPUT PROMPT =";
        
        cout << endl << endl
             << "Player1's turn :  ";
        player1 = input_char_switch();


        cout << endl << endl
             << "Player2's turn :  ";
        player2 = input_char_switch();
       
        // Echo input
        cout << endl << endl
             << "YOU ENTERED: " 
             << endl << endl;
        
        cout << "player1 : " 
             << player1 
             << endl << endl;
        
        cout << "player2 : " 
             << player2 
             << endl << endl; 
        
        // COMPUTATION AND OUTPUT
        // if-else mutlistatement for comparing participant input
        // 3 options per player, 2 options.
        // 3^2 = 9 possible combinations
        
        if (player1 == 'P' && player2 == 'P')
        {
            cout <<  "Paper selected by both Players. Nobody wins." << endl;
        }
        else if (player1 == 'P' && player2 == 'R')
        {	
            cout << "Paper covers Rock. Player1 wins" << endl; 
        }
        else if (player1 == 'P' && player2 == 'S')
        {	
            cout << "Sissors cuts Paper. Player2 wins" << endl; 
        }	
        
        
        else if (player1 == 'R' && player2 == 'P')
        {	
            cout << "Paper covers Rock. Player2 wins" << endl; 
        }
        else if (player1 == 'R' && player2 == 'R')
        {	
            cout <<  "Rock selected by both Players. Nobody wins." << endl;
        }
        else if (player1 == 'R' && player2 == 'S') 
        {	
            cout << "Rock breaks Sissors. Player1 wins" << endl; 
        }
        
        
        else if (player1 == 'S' && player2 == 'P')
        {	
            cout << "Sissors cuts Paper. Player1 wins" << endl; 
        }
        else if (player1 == 'S' && player2 == 'R')
        {	
            cout << "Rock breaks Sissors. Player2 wins" << endl; 
        }
        else if (player1 == 'S' && player2 == 'S')
        {   
            cout <<  "Sissors selected by both Players. Nobody wins." << endl;
        }
        
        else
        {    
            cout << "there is a problem with the entered inputs for the players";
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

// function for entering various inputs
char input_char_switch()
{
	cout << "Please enter P (Paper), R (Rock) or S (Sissors) :  " ;
	
    char char_input = ' ';

    do
    {
       	
	    cin >> char_input;
        
        switch(char_input)
	    {
    		case 'P':
    		case 'p':
    			char_input = 'P';
    			break;
    		
    		case 'R':
    		case 'r':
    			char_input = 'R';
    			break;
    		
      		case 'S':
    		case 's':
    			char_input = 'S';
    			break;
          
            default:   //  no legal option was entered		
                cout << " Not a valid choice. " << endl
    			         << " Choose again." << endl;
		} 
    } while(char_input != 'P' && char_input != 'R' && char_input != 'S');  // loop until correct input entered
	
	return char_input;
}

