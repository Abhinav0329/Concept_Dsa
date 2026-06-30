// #include <iostream>

// void calculateSum() {
//     // Both 'a' and 'b' are placed on the STACK.
//     int a = 10;
//     int b = 20;
    
//     int total = a + b; // 'total' is also on the STACK.
    
//     std::cout << "Total is: " << total << std::endl;
    
// } // <-- The exact moment this closing bracket is reached, 
//   // 'a', 'b', and 'total' are instantly and automatically deleted from the Stack.

// int main() {
//     calculateSum();
//     return 0;
// }

#include <iostream>

// This function calls itself endlessly
void crashTheStack() {
    // We create a small variable on the stack each time
    int dummyVariable = 5; 
    
    // The function calls itself!
    // This forces the computer to open a NEW stack frame 
    // before the current one can finish and close.
    crashTheStack(); 
}

int main() {
    std::cout << "Starting the program..." << std::endl;
    
    // Trigger the crash
    crashTheStack(); 
    
    // This line will NEVER run because the program will crash before reaching it.
    std::cout << "Program finished successfully!" << std::endl; 
    return 0;
}