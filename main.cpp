#include <iostream>
#include "utils.h"
#include <cmath>
#include "boolean.h"
#include "if.h"

int main()
{ 
  //std::cout << "rezult: " << if10(5, 5) << std::endl;
  double a = 6;
  double b = 5;
  if10(a,b);
  std::cout << a << " " << b << std::endl;
  // bool result = boolean::begin20(5, 5, 5);
  // std::cout << result << std::endl;
  return 0;
}