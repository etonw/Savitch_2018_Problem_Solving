/*
project_2_16_determine_haircut.cpp

Book:
    Savitch_2018_Problem Soving with C++
    2 C++ Basics
    p 142

Date:   20 June 2022

Author:    Eton Williams

Required:
16. The following flowchart contains a series of questions to determine what
kind of haircut to get. Write a program that asks the questions to the user
and outputs the recommended haircut.

*/

#include <iostream>
#include <cmath>   
using namespace std;

//prototype functions
char input_char_a_or_b();
char input_char_y_or_n();

//initialize global variables and CONSTANTS
char REPEAT;  //User inputs this to determine a repeat of the program

int main() 
{
	// initialize variables
    char ans = ' ';
    

    // Start and Program description
	cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;
    cout << "This program will: \n\n"
         << "(i) This program helps the User to determine what kind of haircut to get \n"
         << "(ii) after answering a series of questions.\n"
         << endl << endl;
    
    do{ //runs repeatedly
        // prompt for input
        cout << "\n\n\t\t\t\t\t\t\t\t= NEW INPUT =\n" << endl << endl;
        cout << "\n\nAre you (a) male or (b) female? ";
        ans = input_char_a_or_b();
        if (ans == 'a')
        {
            cout << "\n\nAre you (a) Superhero or (b) Supervillain? ";
            ans = input_char_a_or_b();
                if (ans == 'a')   // man
                {
                    cout << "\n\n(a) Steak or (b) Sushi? ";  
                    ans = input_char_a_or_b();
                        if (ans == 'a')
                                {
                                cout << "\n\nYou should get a flat top ";     //male superhero  steak   
                                } 
                                else if (ans == 'b')
                                {
                                cout << "\n\nYou should get a pompadour ";      //male superhero  sushi                                  
                                }
                } 
                else if (ans == 'b')
                {
                    cout << "\n\nYou should get a mohawk ";                 //male supervillain    
                }
        } 
        else if (ans == 'b')  // woman
        {
        cout << "\n\nAre you (a) Superhero or (b) Supervillain? ";
        ans = input_char_a_or_b();
 
                if (ans == 'a')
                    {
                    cout << "\n\n(a) Anime or (b) Sitcom? ";   
                    ans = input_char_a_or_b();
                        if (ans == 'a')
                            {
                            cout << "\n\nYou should go with bangs ";           //female superhero anime 
                            } 
                            else if (ans == 'b')
                            {
                            cout << "\n\nYou should get a bob ";                  //female superhero sitcom                   
                            }

                } 
                else if (ans == 'b')
                {
                    cout << "\n\nYou should get a mohawk ";                  //female supervillain   
                }

        }

       
        // function to query if user wishes to continue 
        REPEAT = input_char_y_or_n();   
    } while (REPEAT == 'y' || REPEAT == 'Y');    //condition to repeat the program

    //echo input
    cout << "\n\nYou entered: " << REPEAT << endl << endl;

    // end program
	cout << "\n\t\t\t\t\t\t\t~ End of Program ~\n";
    cout << endl;
	return 0; 
}


// function to take a/b char input
char input_char_a_or_b ()
{
    char entered_letter = 'x'; 
    do
        {
            std::cout << "\t (enter a/b): ";
            std::cin >> entered_letter; 
        
        } while ( entered_letter != 'a' && entered_letter != 'A' &&  entered_letter != 'b' && entered_letter != 'B'  );
    return entered_letter; 
}

// function to take y/ n char input
char input_char_y_or_n()
{
    char entered_letter = 'x'; 
    do
        {
            std::cout << "\tRepeat Program ? (enter y/n):  ";
            std::cin >> entered_letter; 
        } while ( entered_letter != 'y' && entered_letter != 'Y' &&  entered_letter != 'n' && entered_letter != 'N'  );

    return entered_letter; 
}

