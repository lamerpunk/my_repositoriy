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