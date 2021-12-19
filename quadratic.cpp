/*
A quadratic equation is an equation having the form:

ax^2 + bx + c = 0

This is a C++ program that solves the quadratic equation.
*/

#include <iostream>
#include <cmath>

int main() {
  // First declare 3 variables
  double a;
  double b;
  double c;
  
  std::cout << "Enter a: ";
  std::cin >> a;
  
  std::cout << "Enter b: ";
  std::cin >> b;
 
  std::cout << "Enter c: ";
  std::cin >> c;    

  // Declare two variables to store the roots
  double root1;
  double root2;

  // Solve for the positive root - root1
  root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);

  // Solve for the negative root - root2
  root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);

  // Outputting the roots
  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";
  
}
