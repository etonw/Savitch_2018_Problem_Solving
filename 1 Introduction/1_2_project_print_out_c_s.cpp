/*
1_2_project_print_out_c_s.cpp

Savitch_2018_Problem Solving with C++
Chapter 1 Introduction to Computers and C++ Programming  


Write a program that prints out “C S !” in large block letters 
inside a border of *s 
followed by two blank lines then the message Computer Science is Cool Stuff.

The output should look as follows:

OUTPUT:

****************************************************

       C C C 					S S S S      !! 
     C       C                S         S	 !! 
    C					     S			     !! 
   C					     S 		         !! 
   C					       S S S S S  	 !! 
   C					     	        S	 !! 
    C						        	 S	 !! 
     C	      C				  S	        S	    
    	C C C					S S S S  	 00 

****************************************************

Computer Science is Cool Stuff !!

*/

#include <iostream>
using namespace std;

    void stars();  //prototype
    
int main()
{

    cout <<  endl;
    stars();
    cout <<  endl;
    
    cout << "       C C C 					S S S S      !! \n"
         <<	"     C       C                S         S	 !! \n"
         <<	"    C					     S			     !! \n"
         <<	"   C					     S 		         !! \n" 
         <<	"   C					       S S S S S  	 !! \n"	
         <<	"   C					     	        S	 !! \n"	
         <<	"    C						        	 S	 !! \n"
         <<	"     C	      C				  S	        S	    \n" 	
         <<	"    	C C C					S S S S  	 00 \n"
         << endl; 		

    stars();
    cout << endl;
    cout << "Computer Science is Cool Stuff !!" << endl;    
    
    return 0;
}

void stars()        //draw a line of stars
{
   cout << "****************************************************" << endl;
}



