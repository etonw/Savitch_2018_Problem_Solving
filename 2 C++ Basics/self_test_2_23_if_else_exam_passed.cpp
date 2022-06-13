/*
self_test_2_23_if_else_exam_passed.cpp

Savitch_2018_Problem Soving with C++
2 C++ Basics
Programming Projects
p115

Write an if-else statement that 
outputs the word Passed provided the value of the variable exam is greater than or equal to 60 and the value of the variable programs_done is greater than or equal to 10. 

Otherwise, the if-else statement outputs the word Failed. 

The variables exam and programs_done are both of type int.
*/

#include <iostream>
using namespace std;

int main() 
{
	cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;

	// initialize variables
    int exam, programs_done;

    // prompt
    cout << "\nEnter exam score : ";
    cin >> exam;
    cout << "\nEnter number of programs done : ";
    cin >> programs_done;

    // Echo inputs
    cout << "\n\nExam score entered: " << exam  
      << "\nPrograms done entered: " << programs_done;
    
    // calculation
    if( (exam>=60) && (programs_done >= 10) )
    {
        cout << "\n\nPassed";
    }else
    {
        cout << "\n\nFailed";        
    }
    
	cout << "\n\n\t\t\t\t\t\t\t~ End of Program ~\n" << endl;
	return 0; 
}
