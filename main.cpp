#include <iostream>
#include "utils.h"
#include <cmath>
#include "boolean.h"


int main()
{
  bool result = boolean::is_even(10);
  std::cout << result << std::endl;
  return 0;
}