namespace boolean {
/**
 * Checks whether a given integer is even.
 * begin2
 * @param x The number to be checked.
 * @return true if the number is even, false otherwise.
 */
bool begin1(int x) {
    return x % 2 == 0;
}

/**
 * Checks whether a given integer is not even.
 * begin..
 * @param x The number to be checked.
 * @return true if the number is not even, false otherwise.
 */
bool begin2(int x) {
    return !begin2(x);
}

/**
 * Checks whether a given integer is positive.
 * begin 1
 * @param x The number to be checked.
 * @return true if the number is positive, false otherwise.
 */
bool begin3(int x) {
    return x > 0;
}

bool begin4(int a, int b) {
    return (a > 2) && (b <= 3);
}

bool begin5(int a, int b) {
    return (a >= 0) || (b < -2);
}

bool begin6(int a, int b, int c) {
    return (a < b) && (b < c);
}

bool begin7(int a, int b, int c) {
    return (b < a) && (b < c);
}

bool begin8(int a, int b, int c) {
    //return is_not_even(a) && is_not_even(b) && is_not_even(c);
    return (a % 2 != 0) && (b % 2 != 0) && (c % 2 != 0);
}

bool begin9(int a, int b) {
    return (a % 2 != 0) || (b % 2 != 0);
}

bool begin10(int a, int b) {
    return (a % 2 != 0 || b % 2 == 0) && (a % 2 == 0 || b % 2 != 0);
}

bool begin11(int a, int b) {
    return (a % 2 == 0 && b % 2 == 0) || (a % 2 !=0 && b % 2 != 0);
}

bool begin12(int a, int b, int c) {
    return (a > 0 && b > 0 && c > 0);
}

bool begin13(int a, int b, int c) {
    return (a > 0 || b > 0 || c > 0);
}



bool begin14 (int a, int b, int c) {
    return (a > 0 and b <= 0 and c <= 0) || (a <= 0 and b > 0 and c <= 0) || (a <= 0 and b <= 0 and c > 0);
}




bool begin20 (int a, int b, int c) {
    return (a != b) && (a != c) && (b != c);
}




}