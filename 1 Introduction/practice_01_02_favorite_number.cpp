/*
practice_01_02_favorite_number.cpp

Savitch_2018_Problem Solving with C++
Chapter 1 Introduction to Computers and C++ Programming  


Modify the C++ program you entered in Practice Program 1. Change the
program so that it asks a user for their favourite number, writes it to the
screen and then goes on to do the same things that the program in Display
1.8 does. Create an int variable to store the number and read a value
from the user using cin. Print out the text “Your favourite number is:” and
the number that the user has entered. Be certain to add the symbols \n to
your output statement. If the user entered 42, you should print out “Your
favourite number is 42”. Recompile the changed program and run it.

*/


#include <iostream>
using namespace std;
int main()
{
    int favoriteNumber;
    int numberOfPods , peasPerPod, totalPeas;
    

    cout << "Please return after entering a number.\n";
    
    cout << "Enter your favorite number:\n";
    cin  >> favoriteNumber;
    
    cout << "Your favorite number is: ";
    cout << favoriteNumber
         << " \n\n";
         
    // Then do the same things that program 1.8 does
    
    cout << "Enter the number of pods:\n";
    cin  >> numberOfPods;
    
    cout << "Enter the number of peas in a pod:\n";
    cin  >> peasPerPod;
    
    totalPeas = peasPerPod * numberOfPods;  
    
    cout << "\nIf you have ";
    cout << numberOfPods;
    cout << " pea pods\n";
    cout << " and ";
    cout << peasPerPod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << totalPeas;
    cout << " peas in all the pods.\n";
    
    if (favoriteNumber == 42){
            cout << "\nAgain! \nYour favorite number is 42\n";     
    }
    
    return 0;
}
