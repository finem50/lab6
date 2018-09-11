//Rules for calculation will be:
// a/b + c/d = (a*d + b*c) / (b*d)
// a/b - c/d = (a*d - b*c) / (b*d)
// (a/b) * (c/d) = (a*c) / (b*d)
// (a/b) / (c/d) = (a*d) * (c*b)

#include <iostream>
#include <cmath>

using namespace std;

class Rational{

public:
  Rational();
  Rational(int a, int b, int c, int d); //Four variables, for each quarter of the equation
  void set();
  int add(int var);
  int subtract(int var);
  int multiply(int var);
  int divide(int var);

private:
  int a, b, c, d; //These will be used to construct the fractions

};

int main(){

  int a, b, c, d;

  Rational rational;
  cout << "Please enter stuff: ";
  rational.set();
  int frac1, frac2;

  frac1 = a / b;
  frac2 = c / d;

  cout << frac1 << " + " << frac2 << " = " << frac1.add(frac2);
  cout << frac1 << " - " << frac2 << " = " << frac1.subtract(frac2);
  cout << frac1 << " * " << frac2 << " = " << frac1.multiply(frac2);
  cout << frac1 << " / " << frac2 << " = " << frac1.divide(frac2);

}

Rational::Rational(){

  //Default constructor
}

Rational::Rational(int numA, int denA, int numB, int denB){

  a = numA;
  b = denA;

  c = numB;
  d = denB;
}

void Rational::set(){

  cout << "Please enter the first numerator: ";
  cin >> a;

  cout << "Please enter the first denominator: ";
  cin >> b;

  cout << "Please enter the second numerator: ";
  cin >> c;

  cout << "Please enter the second denominator: ";
  cin >> d;
}

int Rational::add(int frac2){

  int a, b, c, d;

  int result;
  result = (a * d + b * c) / (b * d);
  return result;
}

int Rational::subtract(int frac2){

  int a, b, c, d;

  int result;
  result = (a * d - b * c) / (b * d);
  return result;
}

int Rational::multiply(int frac2){

  int a, b, c, d;

  int result;
  result = (a * c) / (b * d);
  return result;
}

int Rational::divide(int frac2){

  int a, b, c, d;

  int result;
  result = (a * c) * (b * d);
  return result;
}
