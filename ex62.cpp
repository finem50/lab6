//This program is a driver written to demonstrate how the set function works.

#include <iostream>
#include <cmath>

using namespace std;

class Loan{ //Loan is called structure tag

public:
  void set();
  float payment();
  void display();

private:
  int ID; //Assume a unique integer between 1111-9999
  float amount; //$ amount of the loan
  float rate; //annual interest rate
  int term; //number of months, length of the loan

};

int main(){

  Loan loan1;

  loan1.set();

  loan1.display();

  float p;
  p = loan1.payment(); //Will return the monthly payment of loan1
  cout << "The monthly payment will be: " << p << endl;

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
  return amount * rate *(pow( (rate+1), term)/ (pow( (rate+1), term) - 1) );

}

void Loan::display(){

  cout << "Your loan ID is: " << ID << endl;
  cout << "The amount of loan " << ID << " is: " << amount << endl;
  cout << "The annual interest of loan " << ID << " is: " << rate << endl;
  cout << "The term (number of months, length of the loan) of " << ID << " is: "
          << term << endl;
}
