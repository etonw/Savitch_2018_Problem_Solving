/*
Savitch_2018_Problem Soving with C++
2 C++ Basics
p 120


*/

#include <iostream>
using namespace std;

//prototype functions

int main() 
{
	cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;

	// initialize variables
    char ans;

    // prompt


    // Echo inputs

    
    // calculation
    do{
        cout << "\nHello\n\n";
        cout << "Do you want another greeting?\n"
             << "Press y for yes, n for no, \n"
             << "and then press return: ";
        cin >> ans;
        
    } while(ans == 'y' || ans == 'Y');
	
	// output
    cout << "\nGood-bye\n";
    
	cout << "\n\n\t\t\t\t\t\t\t~ End of Program ~\n" << endl;
	return 0; 
}
