/*
1_practice_program_a_sample_c++_program.cpp

Savitch_2018_Problem Solving with C++
Chapter 1 Introduction to Computers and C++ Programming  

Using your text editor, enter (that is, type in) the C++ program shown in
Display 1.8. Be certain to type the first line exactly as shown in Display 1.8.
In particular, be sure that the first line begins at the left-hand end of the
line with no space before or after the # symbol. Compile and run the
program. If the compiler gives you an error message, correct the program
and recompile the program. Do this until the compiler gives no error
messages. Then run your program.

*/


#include <iostream >
using namespace std;
int main()
{
    int numberOfPods =0, peasPerPod, totalPeas;
    cout << "Please return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin  >> numberOfPods;
    
    cout << "Enter the nnumber of peas in a pod:\n";
    cin  >> peasPerPod;
    
    totalPeas = peasPerPod * numberOfPods;  
    
    cout << " If you have ";
    cout << numberOfPods;
    cout << " pea pods\n";
    cout << " and ";
    cout << peasPerPod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << totalPeas;
    cout << " peas in all the pods.\n";
    return 0;
}
