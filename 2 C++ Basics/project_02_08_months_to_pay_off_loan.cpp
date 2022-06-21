/*
project_2_8_months_to_pay_off_loan.cpp

Book:
    Savitch_2018_Problem Soving with C++
    2 C++ Basics
    p 139

Date:   14 June 2022

Author:    Eton Williams

Required:
8. You have just purchased a stereo system that cost $1,000 on the following
credit plan: no down payment, an interest rate of 18% per year (and hence
1.5% per month), and monthly payments of $50. The monthly payment
of $50 is used to pay the interest and whatever is left is used to pay part
of the remaining debt. Hence, the first month you pay 1.5% of $1,000 in
interest. That is $15 in interest. So, the remaining $35 is deducted from
your debt, which leaves you with a debt of $965.00. The next month
you pay interest of 1.5% of $965.00, which is $14.48. Hence, you can
deduct $35.52 (which is $50 – $14.48) from the amount you owe. Write
a program that will tell you how many months it will take you to pay off
the loan, as well as the total amount of interest paid over the life of the
loan. Use a loop to calculate the amount of interest and the size of the
debt after each month. (Your final program need not output the monthly
amount of interest paid and remaining debt, but you may want to write
a preliminary version of the program that does output these values.) Use
a variable to count the number of loop iterations and hence the number
of months until the debt is zero. You may want to use other variables as
well. The last payment may be less than $50. Do not forget the interest on
the last payment. If you owe $50, then your monthly payment of $50 will 
not pay off your debt, although it will come close. One month’s interest
on $50 is only 75 cents.

                            = BEGIN PROGRAM =

This program will: 

Calculate how many months it takes to pay off a loan 
.
Month   Interest Paid       Loan
1       15.00                965.00
2       14.47                929.48
3       13.94                893.42
4       13.40                856.82
5       12.85                819.67
6       12.30                781.97
7       11.73                743.70
8       11.16                704.85
9       10.57                665.42
10      9.98                 625.40
11      9.38                 584.79
12      8.77                 543.56
13      8.15                 501.71
14      7.53                 459.24
15      6.89                 416.13
16      6.24                 372.37
17      5.59                 327.95
18      4.92                 282.87
19      4.24                 237.11
20      3.56                 190.67
21      2.86                 143.53
22      2.15                 95.68
23      1.44                 47.12
24      0.71                 -2.17


 Number of months to pay off loan : 24.00

*/

#include <iostream>
#include <cmath>   
using namespace std;

//prototype functions
double input_double();
char repeat_query();
void setDecimalPlaces();

//initialize global variables and CONSTANTS
char REPEAT;  //User inputs this to determine a repeat of the program

int main() 
{
	// initialize variables
double loan = 1000,
	month_interest_rate_decimal = 0.015,
	monthly_payment = 50,
	interest_paid,
    loan_amount_paid,
    months = 0;

    

    // Start and Program description
	cout << "\n\t\t\t\t\t\t\t= BEGIN PROGRAM =\n" << endl;
    cout << "This program will: \n\n"
         << "Calculate how many months it takes to pay off a loan \n"
         << ".\n";
    
    do{ 
        cout << "Month\tInterest Paid\t\tLoan" << endl;        
        setDecimalPlaces();
        
        //Calculation
        while (loan >0) {
            interest_paid =  loan * month_interest_rate_decimal;
            loan_amount_paid = 50 - interest_paid;
            loan = loan - loan_amount_paid;
            months++;
            cout << (int)months << "\t\t" << interest_paid << "\t\t\t\t " << loan << endl;
            }

        cout << "\n\n Number of months to pay off loan : " << (int)months << endl << endl;
        // function to query if user wishes to continue 
        REPEAT = repeat_query();   
    } while (REPEAT == 'y' || REPEAT == 'Y');    //condition to repeat the program

    //echo input
    cout << "\n\nYou entered: " << REPEAT << endl;

    // end program
	cout << "\n\n\t\t\t\t\t\t\t~ End of Program ~\n";
    cout << endl;
	return 0; 
}

// function for taking numerical input ( double) from the user
double input_double ()
{
    double entered_number; 
    std::cout << " (enter number): ";
    std::cin >> entered_number;
    return entered_number; 
}

// function to format number of decimal places
void setDecimalPlaces()
{
    cout.setf(ios::fixed);		
    cout.setf(ios::showpoint);
    cout.precision(2);			// set number of decimal places in bracket
}

// function to query if user wishes to repeat program 
char repeat_query()
{
   char ans;
   std::cout << "\nRepeat Program ? (enter y/n): ";
   std::cin >> ans; 
   return ans;
}

// function to take y/ n char input
char input_char ()
{
    char entered_letter = 'a'; 
    do
        {
            std::cout << " (enter y/n): ";
            std::cin >> entered_letter; 
        
        } while ( entered_letter != 'y' || entered_letter != 'Y' || entered_letter != 'n'|| entered_letter != 'N'  );
    return entered_letter; 
}


