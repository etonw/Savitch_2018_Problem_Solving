/*
project_1_5_large_block_c.cpp

Savitch_2018_Problem Soving with C++
1 Introduction to Computers and C++ Programming

5. 
Write a program that
inputs a character from the keyboard and then outputs a large block letter “C”
composed of that character.

For example,  if the user inputs the character “X,” then the output should look as follows:

*/
#include <iostream>
using namespace std;

void print(char x); // prototype. function to print the big 'C'

int main() 
{
  char input;
  
  cout << "Program makes a big 'C' with your input character \n\n";
  cout << "Please input your character: ";
  cin >> input;
  cout << endl;
  //  cout << "(From main function): You entered charcter " << user_input << "\n\n";
  // cout << "Printout: \n\n";
  
  print(input);
} 

void print(char x)
{
  cout << "     " << x << " " << x << " " << x << " " <<  "\n";
  cout << "    " << x <<  "    " << x << "\n";
  cout << "   " << x <<                  "\n";  
  cout << "   " << x <<                  "\n";  
  cout << "   " << x <<                  "\n";  
  cout << "   " << x <<                  "\n";  
  cout << "   " << x <<                  "\n";  
  cout << "    " << x <<  "    " << x << "\n";
  cout << "     " << x << " " << x << " " << x << " " <<  "\n";  
}
