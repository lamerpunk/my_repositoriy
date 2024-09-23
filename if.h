int if1(int a) {
    if(a >= 0)
    {
        a += 1;
    }
    return a;
}

int if2(int a){ 
    if(a >= 0)
    {
        a += 1;
    }
    else
    {
        a -= 2;
    }
    return a;
}

int if3(int a) {
    if(a > 0)
    {
        a += 1;
    }
    if (a < 0)
    {
        a -= 2;
    }
    if (a == 0)
    {
        a += 10;
    }
    return a;
}

int if4(int a, int b, int c) {
    int count = 0;
    if(a > 0)
    {
        count += 1;
    }
    if(b > 0)
    {
        count += 1;
    }
    if(c > 0)
    {
        count += 1;
    }
    return count;
}

int if5(int a, int b, int c) {
    int count = 0;
    if(a > 0)
    {
        ++count;
    }
    else
    {
        --count;
    }
    if(b > 0)
    {
        ++count;
    }
    else
    {
        --count;
    }
    if(c > 0)
    {
        ++count;
    }
    else
    {
        --count;
    }
    return count;
}

int if6(int a, int b) {     //тут по заданию b не должно выводится в случае иначе, но после будет иначе - ошибка.
    if (a > b)
    {
        return a;
    }
    return b;
}

int if7(int a, int b) {     // не уверен насчет tolower
    if (a < b)
    {
        return std::tolower(a);
    }
    return std::tolower(b);

}


void if8(int a, int b) {
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

void if9(double& a, double& b) {
    if (a > b)
    {
        std::swap(a, b);
        return;
    }
    return;
}

void if10(double& a, double& b) {
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