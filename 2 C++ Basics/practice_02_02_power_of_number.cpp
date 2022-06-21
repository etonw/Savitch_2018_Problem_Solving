/*
practice_2_2_power_of_number.cpp

Savitch_2018_Problem Soving with C++
Chp 2 C++ Basics 
p 136

Powers of numbers can be calculated by multiplying the number by itself
for as many times as the value of the exponent. For example, 2 raised to
the power 4 can be calculated by multiplying 2 by itself 4 times to get 16.
Write a program that:

1. inputs a double as the base number and an int as the exponent;

2. multiplies the base number by itself using a loop that repeats for the
number of times in the int;

3. outputs the exponential value calculated.

Use an if statement for the special case where the output is 1 if the int
value is 0. 

//later
For a more challenging version, deal with the case where the
exponent is negative.

*/
#include <iostream>
#include <cmath>   
using namespace std;

//prototype functions
double input_double();
char repeat_query();
void setDecimalPlaces();
double power (double base_number,  int exponent);

//initialize global variables and CONSTANTS
char REPEAT;  //User inputs this to determine a repeat of the program    
    


int main() 
{
// initialize variables
double base_number(1), answer(1);
int exponent(1), count(1);

    // Start and Program description
	cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;
    cout << "This program will: \n\n"
         << "Calculate the power of a number\n"
         << "Given the base and the exponent.\n"
         << "\n";
    
    do{ //runs repeatedly
        // prompt or input
        cout << "\n\n\t\t\t\t\t\t\t= NEW INPUT =\n" << endl;
        cout << "\nWhat is the base of the number? ";
        base_number = input_double();
        cout << "\nWhat is the exponent of the number? ";
        exponent = input_double();
       
        // Echo input
        cout << "\n\nYou entered: \nBase number = " 
             << base_number 
             << "\nExponent = " 
             << exponent;
        
        // Output answer
        cout << "\n\nThe power of the number is = "
             << power(base_number, exponent)
             << endl << endl; 
        
         // Calculation
        
        REPEAT = repeat_query();   // function to query if user wishes to continue 
    } while (REPEAT == 'y' || REPEAT == 'Y');    //condition to repeat the program

    //echo input
    cout << "`\nYou entered: " << REPEAT << endl;

    // end program
	cout << "\n\n\t\t\t\t\t\t\t~ End of Program ~\n";
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
    cout.precision(8);			// set number of decimal places in bracket
}

// function to query if user wishes to continue 
char repeat_query()
{
   char ans;
   std::cout << "\nRepeat Program ? (enter y/n): ";
   std::cin >> ans; 
   return ans;
}


// function to calculate exponent > 0
 double power (double base_number,  int exponent)
{
    double answer(1);
    int count;
    
    if ( exponent == 0 )    // exponent is zero
    {
        answer = 0;
    }
    else if (exponent > 0 )  // exponent is positve
    {
        count = exponent;
        while ( count > 0 )
            {
                answer = answer * base_number;  
                count--;
            }
    }
    else if (exponent < 0)  // exponent is negative
    {
       if(exponent == -1) 
           answer = 1/base_number;
       else {    
           count = exponent; 
           while( count < 0)
                {
                    answer = answer / base_number;
                    count++;
                }
           }
    }
return answer;
}
