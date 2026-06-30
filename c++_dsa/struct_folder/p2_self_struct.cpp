// //-->(1.)Traversal of a Node Chain
// #include <iostream>

// struct Node {
//     int val;
//     Node* next;
// };

// int main() {
//     // Create 3 nodes
//     Node* head = new Node{100, nullptr};
//     Node* second = new Node{200, nullptr};
//     Node* third = new Node{300, nullptr};

//     // Link them: head -> second -> third -> nullptr
//     head->next = second;
//     second->next = third;

//     // TRAVEL THROUGH THE CHAIN
//     Node* current = head; // Start at the beginning
    
//     while (current != nullptr) {
//         std::cout << "Node Data: " << current->val << std::endl;
//         current = current->next; // Move the pointer to the next connected address
//     }

//     // Clean up
//     delete head;
//     delete second;
//     delete third;
//     return 0;
// }

// //-->(2.)Counting the Length of a Chain
// #include<iostream>

// struct Node{
//     int val;
//     Node* next;
// };

// int countNodes(Node* head){
//     int count = 0;
//     Node* temp = head;
    
//     while(temp!=nullptr){
//     count++;
//     temp = temp->next;
//     }
//     return count;
// }

// int main(){
//     Node* n1 = new Node{10,nullptr};
//     Node* n2 = new Node{20,nullptr};
//     Node* n3 = new Node{30,nullptr};
//     Node* n4 = new Node{40,nullptr};

//     n1->next=n2;
//     n2->next=n3;
//     n3->next=n4;

//     std::cout << "Total nodes in chain: " << countNodes(n1) << std::endl;   
    
//     delete n1; delete n2; delete n3; delete n4;
//     return 0;
// }

//-->(3.)Inserting a Node at the Beginning
#include <iostream>

struct Node {
    int val;
    Node* next;
};

// Function returns the new head pointer after insertion
Node* insertAtFront(Node* currentHead, int newValue) {
    // 1. Create a new node on the heap
    Node* newNode = new Node{newValue, nullptr};

    // 2. Point the new node's 'next' to the old head
    newNode->next = currentHead;

    // 3. The new node is now the official start of the line!
    return newNode; 
}

int main() {
    // Existing chain: 20 -> 30 -> nullptr
    Node* head = new Node{20, nullptr};
    head->next = new Node{30, nullptr};

    // Insert 10 at the front
    head = insertAtFront(head, 10);

    // Print to verify: Should output 10, 20, 30
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->val << " -> ";
        temp = temp->next;
    }
    std::cout << "nullptr" << std::endl;

    // Clean up allocated nodes
    while (head != nullptr) {
        Node* nextNode = head->next;
        delete head;
        head = nextNode;
    }
    return 0;
}