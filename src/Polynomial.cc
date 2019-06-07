#include <iostream>
#include <vector>
#include "Polynomial.h"

Polynomial::Polynomial()
{
  coefficients_ = new std::vector<int>;
}

Polynomial::~Polynomial()
{
  delete coefficients_;
}

bool Polynomial::Empty() const
{
  return coefficients_->empty();
}

std::string Polynomial::ToString() const
{
  if (Empty()) {
    return "0";
  }

  std::size_t highest_degree = coefficients_->size()-1;
  if (highest_degree == 0) {
    return std::to_string((*coefficients_)[0]);
  }

  std::string rst = "";

  for (int degree = highest_degree; degree >= 0; --degree) {
    int coefficient = (*coefficients_)[degree];

    if (coefficient == 0) {
      continue;
    }

    if (coefficient > 0 && !rst.empty()) {
      rst += '+';
    }

    if (coefficient != 1 && coefficient != -1 || degree == 0) {
      rst += std::to_string(coefficient);
    } else if (coefficient == -1) {
      rst += '-';
    }

    if (degree == 0) {
      continue;
    }

    rst += "x";

    if (degree > 1) {
      rst += "^" + std::to_string(degree);
    }
  }

  return rst;
}

std::istream &operator>>(std::istream &input, Polynomial &poly) {
  int coefficient;
  input >> coefficient;
  poly.coefficients_->push_back(coefficient);
  return input;
}

std::ostream &operator<<(std::ostream &output, const Polynomial &poly) {
  output << poly.ToString();
  return output;
}
