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

      float monthly_payment;

      cout << "Please enter information for two different loans: \n\n";

      // Initialize the loan1 structure
      cout << "Enter the ID of this loan \n";
      cin >> loan1.ID;

      cout << "Enter the amount of this loan \n";
      cin >> loan1.amount;

      cout << "Enter the annual interest rate of this loan (in %) \n";
      cin >> loan1.rate;

      cout << "Enter the term (number of months, length of the loan) \n";
      cin >> loan1.term;

      monthly_payment  = payment(loan1);

      cout << "The monthly payment for loan " << loan1.ID << " is: " << monthly_payment << endl;

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
