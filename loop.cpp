#include <iostream>

int main() {
    int count = 0;
    // loop:
    while(count < 5) {
        std::cout << count << std::endl;
        ++count;
        // goto loop;
    }
    return 0;
}
