#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <functional> // Required for std::greater (Min-Heap syntax)

void demonstrateStack() {
    std::cout << "--- 1. std::stack (Last-In, First-Out / LIFO) ---\n";
    
    std::stack<int> st;
    
    // 1. Pushing elements onto the stack
    st.push(10);
    st.push(20);
    st.push(30);
    
    std::cout << "Stack size after 3 pushes: " << st.size() << "\n";
    
    // 2. Inspecting and removing elements
    // CRITICAL: Always check !st.empty() before calling .top() or .pop()
    while (!st.empty()) {
        std::cout << "Top element: " << st.top() << "\n"; // Peek at the top element
        st.pop();                                         // Remove the top element (returns void)
    }
    
    std::cout << "Stack empty after processing loop? " << (st.empty() ? "Yes" : "No") << "\n\n";
}

void demonstrateQueue() {
    std::cout << "--- 2. std::queue (First-In, First-Out / FIFO) ---\n";
    
    std::queue<std::string> q;
    
    // 1. Pushing elements into the queue (Enqueuing)
    q.push("Customer A");
    q.push("Customer B");
    q.push("Customer C");
    
    // 2. Inspecting the boundary values
    std::cout << "Oldest element in line (front()): " << q.front() << "\n";
    std::cout << "Newest element in line (back()):  " << q.back() << "\n";
    
    // 3. Emptying the queue sequentially (Dequeuing)
    while (!q.empty()) {
        std::cout << "Processing: " << q.front() << "\n";
        q.pop(); // Removes the element at the front (returns void)
    }
    std::cout << "\n";
}

void demonstratePriorityQueue() {
    std::cout << "--- 3. std::priority_queue (Heap Structures) ---\n";
    
    // DEFAULT: Max-Heap (Highest value stays at the top)
    std::priority_queue<int> maxHeap;
    
    maxHeap.push(5);
    maxHeap.push(30);
    maxHeap.push(12);
    
    std::cout << "Processing Max-Heap (Decreasing Order):\n";
    while (!maxHeap.empty()) {
        std::cout << "Top: " << maxHeap.top() << " ";
        maxHeap.pop();
    }
    std::cout << "\n\n";
    
    // MIN-HEAP: Lowest value stays at the top
    // Syntax requires template parameters: <Type, Underlying_Container, Comparator>
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    
    minHeap.push(5);
    minHeap.push(30);
    minHeap.push(12);
    
    std::cout << "Processing Min-Heap (Increasing Order):\n";
    while (!minHeap.empty()) {
        std::cout << "Top: " << minHeap.top() << " ";
        minHeap.pop();
    }
    std::cout << "\n\n";
}

int main() {
    std::cout << "================================================\n";
    std::cout << "    RESTRICTED PROCESSING PIPES DEMONSTRATION   \n";
    std::cout << "================================================\n\n";
    
    demonstrateStack();
    demonstrateQueue();
    demonstratePriorityQueue();
    
    return 0;
}