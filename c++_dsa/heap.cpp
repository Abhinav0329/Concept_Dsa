// #include <iostream>

// int main() {
//     // 1. Allocate space for one integer on the HEAP.
//     // 'heapPtr' lives on the Stack, but it points to the space on the Heap.
//     int* heapPtr = new int; 
    
//     // 2. Put a value into that Heap memory slot
//     *heapPtr = 42; 
    
//     std::cout << "The value on the heap is: " << *heapPtr << std::endl;
    
//     // 3. Clean up! Give the memory back to the Heap.
//     delete heapPtr; 
    
//     // 4. Good practice: Set pointer to null so we don't accidentally use it again
//     heapPtr = nullptr; 
    
//     return 0;
// }

#include <iostream>

void leakMemory() {
    // We allocate an integer on the Heap and store its address in 'tempPtr'.
    int* tempPtr = new int(100);
    
    std::cout << "Allocated memory on the heap." << std::endl;

    // CRITICAL MISTAKE: The function ends here!
    // 'tempPtr' lives on the Stack, so it is automatically destroyed.
    // But we never called 'delete tempPtr'.
    // The number 100 is now stuck on the Heap forever.
} 

int main() {
    // If we call this function in an endless loop, the program will 
    // keep locking up pieces of RAM until the computer runs out of memory.
    while (true) {
        leakMemory(); 
    }
    
    return 0;
}