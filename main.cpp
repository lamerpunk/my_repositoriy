#include <iostream>
#include "utils.h"
#include <cmath>
#include "boolean.h"
#include "if.h"
#include "for.h"

int main()
{ 

  for2(5,10);

  int x = 0;
 // x == 0 ? (std::cout <<"ноль\n") : ("не ноль\n");
  std::cout << (x == 0 ? "Ноль" : "Не ноль") <<std::endl;
  return 0;
}