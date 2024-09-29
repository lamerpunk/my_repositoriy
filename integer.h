int integer1(int y)
{
    return y / 100;
}

int integer2(int y)
{
    return y / 1000;
}

int integer3(int y)
{
    return y / 1024;
}

int integer4(int a, int b)
{
    return a / b;
}

int integer5(int a, int b)
{
    return a % b;
}

int integer6(int a)
{ // по мимо ответа выводит какое то большое число
    int x1 = a / 10;
    int x2 = a % 10;
    std::cout << x1 << " " << x2 << std::endl;
    return 0;
}

int integer7(int a)
{
    int x1 = a / 10;
    int x2 = a % 10;
    std::cout << x1 + x2 << " " << x1 * x2 << std::endl;
    return 0;
}

int integer8(int a)
{ // как будто можно написать правильнее
    int tmp1 = a / 10;
    int tmp2 = a % 10;
    std::cout << tmp2 << tmp1 << std::endl;
    return 0;
}

int integer9(int a)
{
    int x1 = a / 100;
    return x1;
}

int integer10(int a)
{
    int x1 = (a / 10) % 10;
    int x2 = a % 10;
    std::cout << x2 << " " << x1 << std::endl;
    return 0;
}

int integer11(int a){
    int x1 = a % 10;
    int x2 = (a / 10) % 10;
    int x3 = (a / 100) % 10;
    std::cout << x1+x2+x3 << " " << x1*x2*x3 << std::endl;
    return 0;
}

int integer12(int a)
{
    int x1 = a % 10;
    int x2 = (a/10) % 10;
    int x3 = (a/100);
    std::cout << x1 << x2 << x3 << std::endl;
    return 0;
}

int integer13(int a)
{
    int x1 = a % 10;
    int x2 = (a/10) % 10;
    int x3 = (a/100) % 10;
    std::cout << x2 << x3 << x1 << std::endl;
    return 0;
}

