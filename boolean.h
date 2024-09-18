/**
 * Checks whether a given integer is even.
 * begin2
 * @param x The number to be checked.
 * @return true if the number is even, false otherwise.
 */
bool is_even(int x) {
    return x % 2 == 0;
}

/**
 * Checks whether a given integer is not even.
 * begin..
 * @param x The number to be checked.
 * @return true if the number is not even, false otherwise.
 */
bool is_not_even(int x) {
    return !is_even(x);
}

/**
 * Checks whether a given integer is positive.
 * begin 1
 * @param x The number to be checked.
 * @return true if the number is positive, false otherwise.
 */
bool is_positive(int x) {
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