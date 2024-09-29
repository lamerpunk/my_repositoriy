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

void if16(int a, int b, int c)
{
    if ((a <= b && a <= c && b <= c))
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

void if17(int a, int b, int c)
{
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

int if18(int a, int b, int c)
{
    if (a == b)
        return 3;
    if (a == c)
        return 2;
    return 1;
}

int if19(int a, int b, int c, int d){
    if (a == b)
    {
        if (c == d)
            return 1;
        if (a == c)
        {
            if (b == d)
                return 1;
            else
                return 2;
        }
        if (a == d)
        {
            if (b == c)
                return 1;
            else
                return 2;
        }
        return 4;
    }
}

    void if20(int a, int b, int c)
    {
        int distAB = std::abs(a - b);
        int distAC = std::abs(a - c);

        if (distAB < distAC)
        {
            std::cout << "Точка B расположена ближе к A. Расстояние: " << distAB << std::endl;
        }
        else
        {
            std::cout << "Точка C расположена ближе к A. Расстояние: " << distAC << std::endl;
        }
    }

    int if21(int x, int y)
    {
        if (x == 0 && y == 0)
        {
            std::cout << "Точка совпадает с началом координат" << std::endl;
        }
        else if (x == 0)
        {
            return 1;
        }
        else if (y == 0)
        {
            return 2;
        }
        else
        {
            return 3;
        }
    }

    int if22(int x, int y)
    {
        if (x > 0 && y > 0)
        {
            return 1;
        }
        else if (x < 0 && y > 0)
        {
            return 2;
        }
        else if (x < 0 && y < 0)
        {
            return 3;
        }
        else
        {
            return 4;
        }
    }

    void if23(int x1, int y1, int x2, int y2, int x3, int y3)
    {
        int x4, y4;
        x4 = x1 + x2 - x3;
        y4 = y1 + y2 - y3;
        std::cout << "Координаты четвертой вершины: (" << x4 << ", " << y4 << ")" << std::endl;
    }

    double if24(double x)
    {
        if (x > 0)
        {
            return 2 * sin(x);
        }
        else
        {
            return 6 - x;
        }
    }

    int if25(int x)
    {
        if (x <= -2 || x > 2)
        {
            return 2 * x;
        }
        else
        {
            -3 * x;
        }
    }

    double if26(double x){
        if (x <= 0)
        {
            return -x;
        }
        else if (x < 0 && x < 2)
        {
            return pow(x, 2);
        }
        else if (x >= 2)
        {
            return 4;
        }
    }

    int if27(double x)
    {
        if (x < 0)
            return 0;
        int n = static_cast<int>(x); // уточнить
        return (n % 2 == 0) ? 1 : -1;
    }

    void ifs28(int x)
    {
        int a = 365;
        int b = 366;
        if (x % 4 == 0)
        {
            if (x % 100 == 0)
            {
                if (x % 400 == 0)
                {
                    std::cout << a << std::endl;
                }
                else
                {
                    std::cout << b << std::endl;
                }
            }
            else
            {
                std::cout << a << std::endl;
            }
        }
        std::cout << 0 << std::endl;
    }

    std::string if29(int n) {
    if (n == 0) {
        return "нулевое число";
    } else if (n > 0) {
        if (n % 2 == 0) {
            return "положительное четное число";
        } else {
            return "положительное нечетное число";
        }
    } else {
        if (n % 2 == 0) {
            return "отрицательное четное число";
        } else {
            return "отрицательное нечетное число";
        }
    }
    }

    std::string if30(int n) {
        std::string parity;
        if (n % 2 == 0) {
            parity = "четное";
        } else {
            parity = "нечетное";
        }

        std::string digits;
        if (n < 10) {
            digits = "однозначное";
        } else if (n < 100) {
            digits = "двузначное";
        } else {
            digits = "трехзначное";
        }

        return parity + " " + digits + " число";
    }