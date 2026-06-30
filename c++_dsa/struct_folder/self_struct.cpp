//-->(1.)Setting Up a Chain in Memory
#include<iostream>
#include<string>

struct Node{
    int val;
    Node* next;
};

int main(){
    // 1. Create two independent nodes on the Heap
    Node* box1 = new Node{10, nullptr}; 
    Node* box2 = new Node{20, nullptr};

    // 2. Link them together using the arrow operator!
    // We tell box1's 'next' pointer to store the address of box2.
    box1->next = box2;

    // 3. Accessing data through the chain
    std::cout << "Box 1 Value: " << box1->val << std::endl;       // Prints 10
    
    // Chain access: Go to box1 -> follow 'next' to box2 -> get val
    std::cout << "Box 2 Value: " << box1->next->val << std::endl; // Prints 20

    // Clean up heap memory
    delete box1;
    delete box2;
    return 0;
}