/*
self_test_21_if_else_high_low.cpp

Savitch_2018_Problem Soving with C++
2 C++ Basics
Programming Projects
p115

Write an if-else statement that 
outputs the word High if the value of the variable score is greater than 100 and
Low if the value of score is at most 100.
The variable score is of type int.

*/

#include <iostream>
using namespace std;

int main() 
{
  cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;

	// initialize variables
	int score(0);

  //prompt
  cout << "Enter score as an integer value: ";
  cin >> score;
  
  if (score>100){    // score greater than 100
    cout << "\nHigh" << endl;
  }else{             // score is at most 100
    cout << "\nLow"  << endl;  
  }

  
	cout << "\n\t\t\t\t\t\t\t~ End of Program ~\n" << endl;
	return 0; 
}
