
int for1(int k, int n) {
    int i;
    for (i=0; i<n; i++) {
        std::cout << k << std::endl;
    }
    return  k;
}

int for2(int a, int b) {
    int n = b-a;
    for (int i = a; i <= b; i++) {
        std::cout << "\nчисло: " << i << std::endl;
    }
    std::cout <<"\nколичество целых: " << n << std::endl;
}

