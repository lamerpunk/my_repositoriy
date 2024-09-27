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

int max(int a, int b, int c){
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

// int if13(int a, int b, int c) {
    
// }