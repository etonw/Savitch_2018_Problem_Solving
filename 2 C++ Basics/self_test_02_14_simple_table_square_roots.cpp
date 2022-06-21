/*
self_test_14_simple_table_square_roots.cpp

Savitch_2018_Problem Soving with C++
2 C++ Basics
Programming Projects
p91

Write a short program that declares and initializes double variables one,
two, three, four, and five to the values 1.000, 1.414, 1.732, 2.000, and
2.236, respectively. Then write output statements to generate the following
legend and table. Use the tab escape sequence \t to line up the columns.
If you are unfamiliar with the tab character, you should experiment with
it while doing this exercise. A tab works like a mechanical stop on a
typewriter. A tab causes output to begin in a next column, usually a
multiple of eight spaces away. Many editors and most word processors will
have adjustable tab stops. Our output does not.
*/

#include <iostream>
using namespace std;

int main() 
{
    // format number after decimal point
    cout.setf(ios::fixed);		
    cout.setf(ios::showpoint);
    cout.precision(3);  			//number of decimal places in bracket

   // declaration
    double one(1.000),  two(1.414), 
           three(1.732), four(2.000), five(2.236);
   
    // space before program starts  
    cout << "\n";  

    // header of table
    cout << "\tN\t\tSquare Root\n\n";
  
    // print out table   
    cout << "\t1\t\t" << one << endl
         << "\t2\t\t" << two << endl
         << "\t3\t\t" << three << endl
         << "\t4\t\t" << four << endl
         << "\t5\t\t" << five << endl;

    //end program with a space
    cout << endl;  
    return 0;
  
}
