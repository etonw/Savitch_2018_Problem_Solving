/*
add_char_values.cpp

Prinz_2002_ A Complete Guide to Programming in C++
2 Fundamental Types, Constants and Variables

*/

#include <iostream>
using namespace std;

int main() {

    char char1 = 'a';
    char char2 = 'b';
    
    //get corresponding integer values of the char values
    int int1 = char1;
    int int2 = char2;
    
    cout << "char1 =  " << char1 << endl;
    cout << "char2 =  " << char2 << endl;
    cout << "Integer value of char1 = " << int1 << endl;
    cout << "Integer value of char2 = " << int2 << endl;
    
    char char3 = 'o';
    //char3 = char1 + char2;
    cout << "char3 = char1 + char2 = " << char3 << endl;
    
    return 0;
}
