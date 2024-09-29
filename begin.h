#include <cmath>

int begin20(double x1, double y1, double x2, double y2)
{
    double s = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return s;
}
void begin21(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    double b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    double c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    double P = a + b + c;
    double p = P / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    std::cout << P << " " << s << std::endl;
}
void begin22(double a, double b)
{
    std::swap(a, b);
    std::cout << a << " " << b << std::endl;
}
void begin23(double a, double b, double c)
{
    std::swap(a, b);
    std::swap(b, c);
    std::swap(c, a);
    std::cout << a << " " << b << " " << c << std::endl;
}
void begin24(double a, double b, double c)
{
    std::swap(a, c);
    std::swap(b, a);
    std::swap(c, b);
    std::cout << a << " " << b << " " << c << std::endl;
}
int begin25(double x)
{
    double y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
    return y;
}
int begin26(double x)
{
    double y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
    return y;
}
void begin27(double a)
{
    double a2 = a * a;
    double a4 = a2 * a2;
    double a8 = a4 * a2;
    std::cout << a << " " << a2 << " " << a4 << " " << a8 << std::endl;
}
void begin28(double a)
{
    double a2 = a * a;
    double a3 = a2 * a;
    double a5 = a3 * a2;
    double a10 = a5 * a5;
    double a15 = a10 * a5;
    std::cout << a << " " << a2 << " " << a3 << " " << a5 << " " << a10 << " " << a15 << std::endl;
}
void bogin29(double a_grad)
{
    const double pi = 3.14;
    double a_rad = a_grad * pi / 180;
    std::cout << a_rad << std::endl;
}
void begin30(double a_rad)
{
    const double pi = 3.14;
    double a_grad = a_rad * 180 / pi;
    std::cout << a_grad << std::endl;
}
int begin31(double tf)
{
    double tc = (tf - 32) * 5 / 9;
    return tc;
}
int begin32(double tc)
{
    double tf = tc * 9 / 5 + 32;
    return tf;
}
void begin33(double x, double a, double y)
{
    double kg1 = a / x;
    double kgy = kg1 * y;
    std::cout << kgy << " " << kg1 << std::endl;
}
void begin34(double x, double y, double a, double b)
{
    double kg1choc = a / x;
    double kg1iris = b / y;
    double diff = kg1choc / kg1iris;
    std::cout << kg1choc << " " << kg1iris << " " << diff << std::endl;
}
int begin35(double v, double u, double t1, double t2)
{
    double s1 = v * t1;
    double s2 = (v - u) * t2;
    double s = s1 + s2;
    return s;
}
int begin36(double v1, double v2, double s, double t)
{
    double s1 = s + (v2 + v1) * t;
    return s1;
}

int begin37(double v1, double v2, double s, double t)
{
    double s1 = std::abs(s - (v2 - v1) * t);
    return s1;
}
int begin38(double a, double b)
{
    if (a != 0)
    {
        double x = -b / a;
        std::cout << x << std::endl;
    }
    else
    {
        std::cout << "Нет решения" << std::endl;
    }
    return 0;
}
int begin39(double a, double b, double c, double d, double x1, double x2)
{
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        std::cout << x1 << " " << x2 << std::endl;
    }
    else
    {
        std::cout << "Нет решения" << std::endl;
    }
    return 0;
}
int begin40(double a1, double b1, double c1, double a2, double b2, double c2)
{
    double d = a1 * b2 - a2 * b1;
    if (d != 0)
    {
        double x = (c1 * b2 - c2 * b1) / d;
        double y = (a1 * c2 - a2 * c1) / d;
        std::cout << x << " " << y << std::endl;
    }
    else
    {
        std::cout << "Нет решения" << std::endl;
    }
    return 0;
}