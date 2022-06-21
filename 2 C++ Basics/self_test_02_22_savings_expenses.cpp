/*

self_test_2_22_savings_expenses.cpp

Savitch_2018_Problem Soving with C++
2 C++ Basics
Programming Projects
p115

Suppose savings and expenses are variables of type double that have been given values. 

Write an if-else statement that outputs the word Solvent, decreases the value of savings by the value of expenses, and sets the value of expenses to 0, provided that savings is at least as large as expenses. 

If, however, savings is less than expenses, the if-else  statement simply outputs the word Bankrupt and does not change the value of any variables.
*/


; 

#include <iostream>
using namespace std;

int main() 
{
  cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;
  
  // format number after decimal point
  cout.setf(ios::fixed);		
  cout.setf(ios::showpoint);
  cout.precision(2);			//2 decimal places in bracket
    
  // initialize variables
  double savings, expenses;

  // prompt
  cout << "\nEnter savings : ";
  cin >> savings;
  cout << "\nEnter expenses : ";
  cin >> expenses;

  // calculation
  if (savings >= expenses)
  {    
    cout << "\nSolvent" << endl;
    savings -= expenses;
    expenses = 0;
  }else
  {              
    cout << "\nBankrupt"  << endl;  
    // change no values
  }

  // Out put Program Result
  cout << "\nHere is your Balance SHeet" 
      << "\nSavings: " << savings  
      << "\nExpenses: " << expenses;


  
  cout << "\n\n\t\t\t\t\t\t\t~ End of Program ~\n" << endl;
	return 0; 

}
