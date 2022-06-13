/*
display_2_3_type_examination_with_decltype.cpp

Savitch_2018_Problem Soving with C++
2 C++ Basics
p96

decltype (expr) 
Inspects the declared type of an entity or the type and value category of an expression.


*/

#include <iostream>
using namespace std;

int main() 
{

	cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;

  // declaring the type of a new variable
  int x = 10;
  decltype(x) y ;
      
  cout << "y = " << y     << endl;      // output is nan - "not a number"
  cout << "x*3.5 = " << x*3.5 << endl;

  
  cout << endl; 
  
  int y2;
  y2 = 87.9;         // output is 87
  cout << y2 << endl;

  
  cout << endl; 

  //Type compatibilities
  int intVariable;
  double doubleVariable;
  doubleVariable = 2;
  intVariable = doubleVariable;

  cout << "intVariable = " << intVariable << endl;
  cout << "doubleVariable = " << doubleVariable << endl;

  // testing calculations
  cout << endl; 
  double a(1), b(1), c(2), d(1); 
  cout << "(a + b) / (c- d) = " << (a + b) / (c - d) << endl; 
  
  
  cout << "\n\n\t\t\t\t\t\t\t~ End of Program ~\n" << endl; 
	return 0; 
}
