#ifndef POLYNOMIAL_INCLUDE_POLYNOMIAL_H_
#define POLYNOMIAL_INCLUDE_POLYNOMIAL_H_

#include <iostream>
#include <vector>

class Polynomial
{
  private:
    std::vector<int>* coefficients_;

  public:
    Polynomial();
    ~Polynomial();
    bool Empty() const;
    std::string ToString() const;
    friend std::istream &operator>>(std::istream &input, Polynomial &poly);
    friend std::ostream &operator<<(std::ostream &output, const Polynomial &poly);
};

#endif
