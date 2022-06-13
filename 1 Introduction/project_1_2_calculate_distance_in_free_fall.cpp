/*
project_1_2_calculate_distance_in_free_fall.cpp

Savitch_2018_Problem Solving with C++
Chapter 1 Introduction to Computers and C++ Programming  


Write a program that allows the user to 

enter a time in seconds and then
outputs how far an object would drop if it is in freefall for that length of time.

Assume that the object starts at rest, there is no friction or resistance from air, and there is a constant acceleration of 32 feet per second due to
gravity. 

Use the equation:

distance = (acceleration × time*time)/2

You should first compute the product and then divide the result by 2.

(The reason for this will be discussed later in the book.)


INPUT:
 4

OUTPUT:

Enter time in seconds: 

Distance an object will drop in freefall =  256 feet.
 

*/

#include <iostream>
using namespace std;
int main()
{

 double seconds, distance, numerator; 
 double acceleration = 32;  //acceleration in feet per second per second

 cout << endl; 
 cout << "Enter time in seconds: " << endl;
 cin >> seconds;

//calculation
 numerator = (acceleration*seconds*seconds);
 distance = numerator/2;
 
 cout << endl; 
 cout << "Distance an object will drop in freefall =  ";
 cout << distance;
 cout << " feet.";
 
    return 0;
}
