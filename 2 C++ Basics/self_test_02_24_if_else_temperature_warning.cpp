/*
self_test_24_if_else_temperature_warning.cpp

Savitch_2018_Problem Soving with C++
2 C++ Basics
Programming Projects
p 115

Write an if-else statement that 

outputs the word Warning provided that either the value of the variable temperature is greater than or equal to 100, or the value of the variable pressure is greater than or equal to 200, or both.

Otherwise, the if-else statement outputs the word OK. The variables temperature and pressure are both of type int.
*/

#include <iostream>
using namespace std;

int main() 
{
	cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;

	// initialize variables
    int temperature, pressure;

    // prompt
    cout << "\nEnter temperature : ";
    cin >> temperature;
    cout << "\nEnter pressure : ";
    cin >> pressure;

    // Echo inputs
    cout << "\n\nTemperature entered: " << temperature
      << "\nPressure entered: " << pressure;
    
    // calculation
    if( (temperature >= 100) || (pressure >= 200) )
    {
        cout << "\n\nWARNING";
    }else
    {
        cout << "\n\nOK";        
    }
    
	cout << "\n\n\t\t\t\t\t\t\t~ End of Program ~\n" << endl;
	return 0; 
}
