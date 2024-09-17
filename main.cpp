#include <iostream>
#include "utils.h"
#include <cmath>
void f(auto f_x)
{
  std::cout << f_x(10);
}

double d(double x, double y, auto f_x)
{
  if (x > y)
  {
    return line0(x, y, f_x);
  }
  else if (x < y)
  {
    return line1(x, y, f_x);
  }
  else
  {
    return line2(x, y, f_x);
  }
}

double line0(double x, double y, auto f_x)
{
  return f_x(x) - f_x(y); //пример
}


int main()
{
  auto f_x = [](double x)
  {
    return x * x;
  };

  auto f_x2 = [](double x)
  {
    return (std::exp(x) - std::exp(-x)) / 2;
  };

  int choise;
  std::cin >> choise;
  if (choise == 0)
  {
    f(f_x);
  }
  else
  {
    f(f_x2);
  }

  return 0;
}