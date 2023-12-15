#include <stdio.h>

// This is a single-line comment

int main() {
    // This is another single-line comment

    int x = 10; // This is an integer constant
    float y = 3.14; // This is a floating-point constant
    char ch = 'A'; // This is a character constant
    char* a = "Harsh Hello :)";
    char str[] = "Hello, World!"; // This is a string constant

    // More literals
    int largeInt = 1234567890L; //  integer constant
    double pi = 3.14159265359; // Double constant
    unsigned int positiveInt = 42U; // Unsigned integer constant
    double bigPi = 3.1415926; //  double constant

    // This is a multi-line comment
    /*
    It can span multiple lines
    */

    // Keywords
    if (x > 5) {
        printf("x is greater than 5.\n");
    } else {
        printf("x is not greater than 5.\n");
    }

    return 0;
}
