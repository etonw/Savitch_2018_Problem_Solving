/*
display_2_12_while_loop.cpp

Savitch_2018_Problem Soving with C++
2 C++ Basics
p 117

*/

#include <iostream>
using namespace std;

//prototype functions

int main() 
{
	cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;

	// initialize variables
    int countDown;

    // prompt
    cout << "How many greetings do you want? ";
    cin >> countDown;

    // Echo inputs
    cout << "You entered: " << countDown << endl << endl; 
    
    // calculation
    while(countDown > 0)
        {
            cout << "Hello ";
            countDown--;
        }
	
	// output
    cout << "\n\nThat's all\n";
    
	cout << "\n\n\t\t\t\t\t\t\t~ End of Program ~\n" << endl;
	return 0; 
}
