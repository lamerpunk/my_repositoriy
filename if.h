int if1(int a)
{
    if (a >= 0)
    {
        a += 1;
    }
    return a;
}

int if2(int a)
{
    if (a >= 0)
    {
        return a + 1;
    }
    return a - 2;
}

int if3(int a)
{
    if (a > 0)
    {
        a += 1;
    }
    if (a < 0)
    {
        return a - 2;
    }

    return a + 10;
}

int if4(int a, int b, int c)
{
    return (a > 0) + (b > 0) + (c > 0);
    // int count = 0;
    // if (a > 0)
    // {
    //     count += 1;
    // }
    // if (b > 0)
    // {
    //     count += 1;
    // }
    // if (c > 0)
    // {
    //     count += 1;
    // }
    // return count;
}

int if5(int a, int b, int c)
{
    return (a > 0 ? 1 : -1) + (b > 0 ? 1 : -1) + (c > 0 ? 1 : -1);
    //     int count = 0;
    //     if (a > 0)
    //     {
    //         ++count;
    //     }
    //     else
    //     {
    //         --count;
    //     }
    //     if (b > 0)
    //     {
    //         ++count;
    //     }
    //     else
    //     {
    //         --count;
    //     }
    //     if (c > 0)
    //     {
    //         ++count;
    //     }
    //     else
    //     {
    //         --count;
    //     }
    //     return count;
}

int max(int a, int b)
{ // тут по заданию b не должно выводится в случае иначе, но после будет иначе - ошибка.
    if (a > b)
    {
        return a;
    }
    return b;
}

int max(int a, int b, int c)
{
    return max(max(a, b), c);
}

int if7(int a, int b)
{ // не уверен насчет tolower
    if (a < b)
    {
        return std::tolower(a);
    }
    return std::tolower(b);
}

void if8(int a, int b)
{
    if (a > b)
    {
        std::cout << a << std::endl;
        std::cout << b << std::endl;
    }
    else if (a < b)
    {
        std::cout << b << std::endl;
        std::cout << a << std::endl;
    }
    else
    {
        std::cout << "a == b" << std::endl;
    }
}

void if9(double &a, double &b)
{
    if (a > b)
    {
        std::swap(a, b);
        return;
    }
    return;
}

void if10(double &a, double &b)
{ // условие задания выполняется верно, но переменные должны быть int, а double
    if (a > b || a < b)
    {
        a = a + b;
        b = a;
        return;
    }
    else if (a == b)
    {
        a = 0;
        b = 0;
        return;
    }
    std::cout << a << " " << b << std::endl;
}

void if11(double a, double b)
{
    if (a == b)
    {
        a = 0;
        b = 0;
    }
    else if (a > b)
    {
        b = a;
    }
    else
    {
        a = b;
    }
    // }
    //     if (a != b)
    //     {
    //         if (a > b)
    //         {
    //             b = a;
    //         }
    //         else
    //         {
    //             a = b;
    //         }
    //     }
    //     else
    //     {
    //         a = 0;
    //         b = 0;
    //     }
    std::cout << a << " " << b << std::endl;
}

int if12(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int if13(int a, int b, int c)
{
    int max = std::max(a, std::max(b, c));
    if (max == a)
    {
        return std::max(b, c);
    }
    if (max == b)
    {
        return std::max(a, c);
    }
    return std::max(a, b);
}

int if14(int a, int b, int c)
{
    int min = std::min(a, std::min(b, c));
    int max = std::max(a, std::max(b, c));
    std::cout << min << " " << max << std::endl;
    return 0;
}

int if15(int a, int b, int c)
{
    int max1 = a;
    int max2 = b;

    if (b > max1)
    {
        max1 = b;
        max2 = a;
    }
    if (c > max1)
    {
        max2 = max1;
        max1 = c;
    }
    else if (c > max2)
    {
        max2 = c;
    }
    return max1 + max2;
}

void if16(int a, int b, int c) { 
    if ((a <= b && a <= c && b <=c)) 
    {
        a *= 2;
        b *= 2;
        c *= 2;
    }
    else {
        a = -a;
        b = -b;
        c = -c;
    }
    std::cout << a << " " << b << " " << c << std::endl;
}

void if17(int a, int b, int c){
    if ((a >= b && a >= c && b >= c) || (a <= b && a <= c && b <= c))
    {
        a *= 2;
        b *= 2;
        c *= 2;
    }
    else 
    {
        a = -a;
        b = -b;
        c = -c;
    }
    std::cout << a << " " << b << " " << c << std::endl;
}

int if18(int a, int b, int c) {
    if (a == b) return 3; 
    if (a == c) return 2; 
    return 1; 
}


int if27(double x) {
    if (x < 0) return 0;
    int n = static_cast<int>(x);  //уточнить
    return (n % 2 == 0) ? 1 : -1;
}

