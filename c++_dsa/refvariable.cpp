#include <iostream>

// This function takes a REFERENCE. It doesn't copy the number.
// It directly interacts with the original variable in main().
void makeDouble(int& ref) {
    ref = ref * 2; // Changes the original variable directly
}

int main() {
    int normalNum = 25;
    
    // We pass 'normalNum' into the function. No copy is made!
    makeDouble(normalNum);
    
    // The original number has been changed!
    std::cout << "Value after function: " << normalNum << std::endl; // Prints 50
    
    return 0;
}