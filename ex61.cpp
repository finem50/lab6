// P61a.cpp - This program creates uses a structure for loan, initialize it from the keyboard, then
// displays the struct

#include<iostream>
#include<cmath>
using namespace std;

typedef struct{
  int ID;
  float amount;
  float rate;
  int term;
} Loan;


float payment(Loan l);

int main( )
{
      Loan loan1;
      Loan loan2;

      float monthly_payment;

      cout << "Please enter information for two different loans. \n";
      cout << "We will start with loan #1 and end with loan #2:\n\n";

      // Initialize the loan1 structure
      cout << "Enter the ID of the first loan \n";
      cin >> loan1.ID;

      cout << "Enter the amount of loan " << loan1.ID << "\n";
      cin >> loan1.amount;

      cout << "Enter the annual interest rate of loan " << loan1.ID << "(in %) \n";
      cin >> loan1.rate;

      cout << "Enter the term (number of months, length of loan " << loan1.ID << ") \n";
      cin >> loan1.term;

      monthly_payment  = payment(loan1);

      cout << "The monthly payment for loan " << loan1.ID << " is: " << monthly_payment << endl;

      cout << "\nNow enter information for the second loan:\n";

      // Initialize the loan2 structure
      cout << "Enter the ID of the second loan \n";
      cin >> loan2.ID;

      cout << "Enter the amount of loan " << loan2.ID << "\n";
      cin >> loan2.amount;

      cout << "Enter the annual interest rate of loan " << loan2.ID << "(in %) \n";
      cin >> loan2.rate;

      cout << "Enter the term (number of months, length of loan " << loan2.ID << ") \n";
      cin >> loan2.term;

      monthly_payment  = payment(loan2);

      cout << "The monthly payment for loan " << loan2.ID << " is: " << monthly_payment << endl;


      return 0;
}

float payment(Loan l)
{
      l.rate = l.rate/1200;  // To convert % yearly rate to monthly fraction
      return l.amount*l.rate*(  pow( (l.rate+1), l.term)/ (pow( (l.rate+1), l.term) - 1) );
}

Loan initialize_struct(int ID, float amount, float rate, int term){
  Loan loan;
  loan.ID = ID;
  loan.amount = amount;
  loan.rate = rate;
  loan.term = term;
  return loan;
}
