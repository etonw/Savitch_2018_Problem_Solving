/*
practice_2_5_correct_program_style.cpp

Book:
    Savitch_2018_Problem Soving with C++
    2 C++ Basics
    p 136

Date:   13 June 2022

Author:    Eton Williams

Required:
5. The following is a short program that computes the volume of a sphere
given the radius. It will compile and run, but it does not adhere to the
program style recommended in Section 2.5. Rewrite the program using
the style described in the chapter for indentation, adding comments, and
appropriately named constants.

#include <iostream>
using namespace std;
int main()
{
double radius, vm;
cout << "Enter radius of a sphere." << endl; cin >> radius;
vm = (4.0 / 3.0) * 3.1415 * radius * radius * radius;
cout << " The volume is " << vm << endl;
return 0;
}

*/

#include <iostream>
using namespace std;
int main()
{
    //initialize variables
    double radius_of_sphere(0), volume_of_sphere(0);

    //Prompt
    cout << "Enter radius of a sphere." << endl;
    cin >> radius_of_sphere;

    //calculation
    volume_of_sphere = (4.0 / 3.0) * 3.1415 * radius_of_sphere * radius_of_sphere * radius_of_sphere;

    //output
    cout << " The volume is " << volume_of_sphere << endl;
    return 0;
}
