#include <iostream>

int main() {
    int score = 100;       // A normal variable
    int* ptr = &score;     // 1. 'ptr' stores the memory address of 'score' (&)

    // Printing the address and the value
    std::cout << "Address: " << ptr << std::endl;      // Prints something like 0x7ff...
    std::cout << "Value:   " << *ptr << std::endl;     // 2. Dereferencing (*) prints 100

    // Modifying the value using the pointer
    *ptr = 200;            // Go to the address and change the value to 200
    std::cout << "New Score: " << score << std::endl;  // 'score' is now 200!

    return 0;
}