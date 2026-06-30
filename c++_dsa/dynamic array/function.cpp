#include <iostream>
#include <vector>
#include <algorithm> // Required for std::sort, std::reverse, and std::fill

void demonstrateVectorBasics() {
    std::cout << "--- 1. Initialization & Element Access ---\n";
    
    // Create a vector of size 5, filled completely with the number 10
    std::vector<int> vec(5, 10);
    
    // Modify values using indexing
    vec[0] = 50;
    vec[4] = 99;
    
    // Element Access
    std::cout << "First element (front()):       " << vec.front() << "\n";
    std::cout << "Last element (back()):         " << vec.back() << "\n";
    std::cout << "Element at index 2 (vec[2]):   " << vec[2] << "\n";
    std::cout << "Element at index 2 (vec.at(2)):" << vec.at(2) << "\n";
    
    // Direct pointer to contiguous memory
    int* rawPointer = vec.data();
    std::cout << "Value via raw memory pointer:  " << *rawPointer << "\n\n";
}

void demonstrateMemoryManagement() {
    std::cout << "--- 2. Size, Capacity, & Reallocation ---\n";
    
    std::vector<int> dynamicVec;
    
    // Checking internal footprint tracking
    std::cout << "Initial - Size: " << dynamicVec.size() << ", Capacity: " << dynamicVec.capacity() << "\n";
    
    // Pre-allocating continuous memory blocks to prevent continuous re-allocations
    dynamicVec.reserve(10);
    std::cout << "After reserve(10) - Size: " << dynamicVec.size() << ", Capacity: " << dynamicVec.capacity() << "\n";
    
    // Appending items dynamically
    dynamicVec.push_back(1);
    dynamicVec.push_back(2);
    dynamicVec.push_back(3);
    std::cout << "After 3 push_back calls - Size: " << dynamicVec.size() << ", Capacity: " << dynamicVec.capacity() << "\n";
    
    // Dropping the trailing element
    dynamicVec.pop_back();
    std::cout << "After pop_back - Size: " << dynamicVec.size() << ", Capacity: " << dynamicVec.capacity() << "\n\n";
}

void demonstrateModifiersAndAlgorithms() {
    std::cout << "--- 3. Element Manipulation & Algorithms ---\n";
    
    std::vector<int> nums = {30, 10, 50, 20, 40};
    
    // 1. Inserting elements (Requires iterator position)
    // Inserts the value 99 at the very beginning (index 0)
    nums.insert(nums.begin(), 99); 
    
    // 2. Erasing elements (Requires iterator position)
    // Erases the element at index 3
    nums.erase(nums.begin() + 3);
    
    std::cout << "Vector after custom insert & erase operations:\n";
    for (int num : nums) std::cout << num << " ";
    std::cout << "\n\n";
    
    // 3. Sorting (Ascending)
    std::sort(nums.begin(), nums.end());
    std::cout << "Sorted sequence:   ";
    for (int num : nums) std::cout << num << " ";
    std::cout << "\n";
    
    // 4. Reversing
    std::reverse(nums.begin(), nums.end());
    std::cout << "Reversed sequence: ";
    for (int num : nums) std::cout << num << " ";
    std::cout << "\n";
    
    // 5. Bulk Overwriting
    std::fill(nums.begin(), nums.end(), -1);
    std::cout << "After std::fill:   ";
    for (int num : nums) std::cout << num << " ";
    std::cout << "\n\n";
    
    // 6. Complete Clearing
    nums.clear();
    std::cout << "After clear() - Size: " << nums.size() << ", Is empty: " << (nums.empty() ? "Yes" : "No") << "\n";
}

int main() {
    std::cout << "================================================\n";
    std::cout << "     DYNAMIC CONTIGUOUS ARRAY (std::vector)     \n";
    std::cout << "================================================\n\n";
    
    demonstrateVectorBasics();
    demonstrateMemoryManagement();
    demonstrateModifiersAndAlgorithms();
    
    return 0;
}