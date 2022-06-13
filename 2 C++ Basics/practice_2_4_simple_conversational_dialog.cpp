/*
practice_2_4_simple_conversational_dialog.cpp

Book:
    Savitch_2018_Problem Soving with C++
    2 C++ Basics
    p 136

Date:   13 June 2022

Author:    Eton Williams

Required:
4. Write a very simple conversational dialog program. Your program should
do the following:

- Say “Hello” to the user.
- Ask them if they are having a good day, and record their input.
- If their response is anything other than a ‘y’ for yes or an ‘n’ for no, repeat the question.
- If they respond with a ‘y’, output “I’m glad to hear that”, and if they answer with an ‘n’, then output “I hope your day gets better soon.”

You may need to use a do-while loop to repeat the questions to the user

*/

#include <iostream>
#include <cmath>   
using namespace std;

//prototype functions
char input_char();
char repeat_query();

//initialize global variables and CONSTANTS
char REPEAT;  //User inputs this to determine a repeat of the program

int main() 
{
	// initialize variables
    //const double OUNCES_IN_TON = 35273.92;
    char state = 'a'; 
   // int xx ; 
    

    // Start and Program description
	cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;
    cout << "This program is: \n\n"
         << "a simple conversational program.\n"
         << "It will ask how you are doing.\n";
    
    do{ //runs repeatedly
        // prompt for input
        cout << "\n\n\t\t\t\t\t\t\t\t= NEW INPUT =\n" << endl;
        cout << "\n Hello! \nHow are you doing? \nAre you having a good day? ";
        state = input_char();
     
        // Echo input
        cout << "\n\n\t\tYou entered: " 
             << state << endl << endl;

        // Calculation and Output
        if ( state == 'y' || state == 'Y') cout << "\nI'm glad to hear that\n";
        else if (  state == 'n' || state == 'N' ) cout <<  "\nI hope your day gets better soon.\n"; 
        
        // function to query if user wishes to continue 
        REPEAT = repeat_query();   
    } while (REPEAT == 'y' || REPEAT == 'Y');    //condition to repeat the program

    //echo input
    cout << "`\nYou entered: " << REPEAT << endl;

    // end program
	cout << "\n\n\t\t\t\t\t\t\t~ End of Program ~\n";
    cout << endl;
	return 0; 
}

// function for taking y/ n char input
char input_char ()
{
    char entered_letter ; 
    do
        {
            std::cout << " (enter y/n): ";
            std::cin >> entered_letter; 
        
        } while ( entered_letter != 'y' &&  entered_letter != 'Y' &&  entered_letter != 'n'  && entered_letter != 'N'  );
    return entered_letter; 
}

// function to query if user wishes to continue 
char repeat_query()
{
   char ans;
   std::cout << "\nRepeat Program ? (enter y/n): ";
   std::cin >> ans; 
   return ans;
}




