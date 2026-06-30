#include <iostream>

void safetyCheck(int* ptr) {
    // Check if the pointer is safe to use
    if (ptr != nullptr) {
        std::cout << "Safe to read value: " << *ptr << std::endl;
    } else {
        std::cout << "Warning: Pointer is empty! Do not touch it." << std::endl;
    }
}

int main() {
    int* myPtr = nullptr; // Explicitly set it to empty for safety
    
    safetyCheck(myPtr);   // Tells us it's unsafe
    
    int number = 42;
    myPtr = &number;      // Now give it a real address
    
    safetyCheck(myPtr);   // Tells us it's safe and prints 42
    
    return 0;
}