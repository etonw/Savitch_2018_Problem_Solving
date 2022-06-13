/*
self_test_18_output_output_whole_number_and_remainder.cpp

Savitch_2018_Problem Soving with C++
2 C++ Basics
Programming Projects
p105

Write a complete C++ program that 
reads two whole numbers into two variables of type int and then 
outputs both the whole-number part and the remainder when the first number is divided by the second. 
This can be done using the operators / and %.
*/

#include <iostream>
using namespace std;

int main() 
{
	cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;

  // reads two whole numbers into two variables of type int

  // initialize variables
  int num1(0), num2(0), whole_num(0);
  double  remainder_num(0);
  
  //prompt
  cout << "Enter two whole numbers: " ;
  cin >> num1 >> num2;

  //echo input
  cout << "\nnum1 = " << num1 << endl; 
  cout << "\nnum2 = " << num2 << endl; 
  
 
  // outputs both the whole-number part and the remainder when the first number is divided by the second.

  // calculation
  whole_num = num1 / num2;
  remainder_num = num1 % num2;
  
  cout << "\nwhole_num  =  num1 / num2 = " << whole_num << endl;      
  cout << "\nremainder_num  =  num1 % num2= " << remainder_num  << endl;     
  
  cout << "\n\n\t\t\t\t\t\t\t~ End of Program ~\n" << endl;
	return 0; 
}
