/*
oop_exam_2014_fibonacci.cpp

C++ Exam 
Spring 2010

The Fibonacci numbers are defined:
fibonacci (0) = 1
fibonacci (1) = 1
fibonacci (n) = fibonacci (n–1) + fibonacci (n–2);

Write a recursive C++ function to compute the Fibonacci numbers:
*/

#include <iostream>
using namespace std;

//PROTOTYPE FUNCTIONS
double input_double();
char input_char_y_or_n();
void set_decimal_places();

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


int main() 
{
	cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;

       // program runs at least once, good for testing
    do{ 
	// initialize variables
    int n(0); 

    // prompt
    cout << "\nProgram calculates fibonacci number, given n : ";
    cout << "\nEnter number, n : ";
    cin >> n;

    // Echo input
    cout << "\n\t\t n = " << n;
    
    // calculation
    cout << "\nfibonacci(n) = "<< fibonacci(n) << endl;
    
	cout << "\n\n\t\t\t\t\t\t\t~ End of Program ~\n" << endl;

                // USER determines if program repeats
        cout << endl << endl
             << "Repeat Program ? ";
        REPEAT = input_char_y_or_n();   
    } while (REPEAT == 'y' || REPEAT == 'Y');    //condition to repeat the program

	return 0; 
}

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
