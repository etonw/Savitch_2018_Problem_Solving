/*
project_03_06_fibonacci_growth.cpp

     AUTHOR :  Eton C. Williams
       DATE :  06 July 2022
       BOOK :  Savitch_2018_Problem Soving with C++
               Chapter 3: More Flow of Control
               p 208           

REQUIREMENTS:
6. The Fibonacci numbers Fn are defined as follows. F0 is 1, F1 is 1, and
Fi+2 = Fi + Fi+1 i = 0, 1, 2, … . In other words, each number is the sum of the previous
two numbers. The first few Fibonacci numbers are 1, 1, 2, 3, 5, and 8. 

One place that these numbers occur is as certain population growth
rates. If a population has no deaths, then the series shows the size of the
population after each time period. 

It takes an organism two time periods to mature to reproducing age, and 
then the organism reproduces once  every time period. 

The formula applies most straightforwardly to asexual
reproduction at a rate of one offspring per time period.

Assume that the green crud population grows at this rate and 
has a time period of 5 days. Hence, if a green crud population starts out as 10 pounds
of crud, then in 5 days there is still 10 pounds of crud; in 10 days there
is 20 pounds of crud, in 15 days 30 pounds, in 20 days 50 pounds, and
so forth. Write a program that takes both the 

initial size of a green crud population (in pounds) and a number of days as input, and that outputs

the number of pounds of green crud after that many days. 

Assume that the population size is the same for 4 days and then increases every fifth day. 

Your program should allow the user to repeat this calculation as often as desired.

*/

#include <iostream>
#include <cmath>   
using namespace std;

//PROTOTYPE FUNCTIONS
double input_double();
char input_char_switch_y_n();
void set_decimal_places();
void program_end();

// recursive function
int fibonacci (int n)    
{
    if (  (n==0) || (n==1)  )  {
        return 1;
    } else {
        return fibonacci (n-1) + fibonacci (n-2);    
    }
}


//initialize global variables and CONSTANTS
char REPEAT;  //User input to determine if program runs more than once
double size(0);
int days(0), period(0);

int main() 
{
    // program description
	cout << endl << endl;
    cout << "\t\t\t\t\t=  PROGRAM DESCRIPTION =" << endl 
         << endl;
    cout << "This program will :" << endl 
         << "  (i) Input the initial size of crud populatiion and the number of days"  << endl 
         << " (ii) Compute and output the size of the crud population after that many days" << endl 
         << endl;
    
    // program runs at least once, good for testing
    do{        
        // INPUT
        cout << endl << endl
             << endl;
        cout << "\t\t\t\t\t\t= INPUT PROMPT =" << endl << endl;
                
        cout << " Initial size of crud population? : ";
        size = input_double();
        
        cout << endl << endl;
        cout << " Number of days since start of growth? : ";
        days = input_double();
       
        // Echo input
        cout << endl << endl;
        cout << "\t\t\t\t\tYOU ENTERED: " << endl << endl;
        
        cout << "\t\t\t\t\tsize : " << size  << endl << endl;
        
        cout << "\t\t\t\t\tdays : " << days  << endl << endl; 
        
        // CALCULATION and OUTPUT
        // double original_amount = size;
        // int period = days / 5;
        // double amount = original_amount * fibonacci();

        cout << endl << endl;
        cout << "\t\t\t\t\t\t= COMPUTATION RESULTS =  " << endl 
             << endl 
             << endl;

        period = days /5;
        
        cout << "After " 
             << days 
             << " days, the size of the crud is " 
             << size * fibonacci(period)
             << " pounds." << endl << endl;

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

/*
// recursive function
int fibonacci(int number)
{
    int n = 1, 
    m = 0,
    o; 
    while(number > 0)
    {
        o = n;
        n = n + m; 
        m = o;
        number--;
    }
    return m;   
}

*/

