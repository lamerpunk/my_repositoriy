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
  if (x < y)
  {
    return line1(x, y, f_x);
  }
  return line2(x, y, f_x);
}

double line0(double x, double y, auto f_x)
{
  return pow(sqrt(fabs((f_x2 - y))), 1/3.0) + tg * f_x2; //пример
}
