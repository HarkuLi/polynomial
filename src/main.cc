#include <iostream>
#include "Polynomial.h"

int main() {
  int degree = 0;
  std::cout << "Degree: ";
  std::cin >> degree;
  std::cout << "Coefficients:" << std::endl;

  Polynomial poly;
  for (int i = 0; i <= degree; ++i) {
    std::cin >> poly;
  }
  std::cout << poly << std::endl;

  return 0;
}
