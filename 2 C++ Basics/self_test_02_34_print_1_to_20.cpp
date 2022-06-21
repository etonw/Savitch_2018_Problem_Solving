/*
self_test_2_34_print_1_to_20.cpp

Savitch_2018_Problem Soving with C++
2 C++ Basics
p 124, Q34. 

2_self_print_1_to_20.cpp

Write a complete C++ program that 
outputs the numbers 1 to 20, one per line.

The program does nothing else.

*/

#include <iostream>
using namespace std;

//prototype functions

int main() 
{
	cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;

	// initialize variables
    int count(1);

    // prompt

    // Echo inputs
    
    // calculation
    while(count <= 20)
    {
        cout << count << endl;
        count++;        
    }
	
	// output

    
	cout << "\n\n\t\t\t\t\t\t\t~ End of Program ~\n" << endl;
	return 0; 
}
