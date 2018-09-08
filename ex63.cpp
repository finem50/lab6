//This program is a driver written to demonstrate how the set function works.

#include <iostream>
#include <cmath>

using namespace std;

class Loan{ //Loan is called structure tag

public:
  void set();
  float payment();
  void display();
  float add_loans(Loan loan1, Loan loan2);

private:
  int ID; //Assume a unique integer between 1111-9999
  float amount; //$ amount of the loan
  float rate; //annual interest rate
  int term; //number of months, length of the loan
  float monthly_payment;

};

int main(){

  Loan loan;
  Loan loan1;
  Loan loan2;

  cout << "Please enter information for two different loans: \n\n";
  loan1.set();
  cout << "\n";
  loan1.display();
  cout << "The monthly payment of your loan is: " << loan1.payment() << endl;

  cout << "\nPlease enter information for the second loan: \n";
  loan2.set();
  cout << "\n";
  loan2.display();
  cout << "The monthly payment of your loan is: " << loan2.payment() << "\n\n";

  cout << "The sum of the two loan payments is: \n" << loan.add_loans(loan1, loan2) << endl;

  return 0;
}

void Loan::set(){

  //Initialize the loan1 object
  cout << "Enter the ID of this loan \n";
  cin >> ID;

  cout << "Enter the amount of this loan \n";
  cin >> amount;

  cout << "Enter the annual interest rate of this loan (in %) \n";
  cin >> rate;

  cout << "Enter the term (number of months, length of the loan) \n";
  cin >> term;
}

float Loan::payment(){
  rate = rate/1200;  // To convert % yearly rate to monthly fraction
  monthly_payment = amount * rate *(pow( (rate+1), term)/ (pow( (rate+1), term) - 1) );
  return monthly_payment;
}

void Loan::display(){

  cout << "Your loan ID is: " << ID << endl;
  cout << "The amount of loan " << ID << " is: " << amount << endl;
  cout << "The annual interest of loan " << ID << " is: " << rate << endl;
  cout << "The term (number of months, length of the loan) of " << ID << " is: "
          << term << endl;
}

float Loan::add_loans(Loan loanA, Loan loanB){
  float sum = loanA.payment() + loanB.payment();
  return sum;
}
