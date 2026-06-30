#include <iostream>
#include <string>
#include <cctype>     // Required for character checks (isalnum, tolower, etc.)
#include <algorithm>  // Required for std::reverse and std::sort

void demonstrateStringBasics() {
    std::cout << "--- 1. Capacity & Access ---\n";
    
    std::string s = "Hello, LeetCode 2026!";
    
    // Size and Capacity checks
    std::cout << "String: " << s << "\n";
    std::cout << "Length/Size: " << s.length() << " (or " << s.size() << ")\n";
    std::cout << "Is empty? " << (s.empty() ? "Yes" : "No") << "\n";
    
    // Element Access
    std::cout << "Character at index 7 (s[7]): " << s[7] << "\n";
    std::cout << "Character at index 7 safely (s.at(7)): " << s.at(7) << "\n";
    std::cout << "First character (front()): " << s.front() << "\n";
    std::cout << "Last character (back()): " << s.back() << "\n\n";
}

void demonstrateModifiers() {
    std::cout << "--- 2. Modifiers & Substrings ---\n";
    
    std::string s = "Data";
    
    // Appending characters and strings
    s.push_back('S');     // Adds a character
    s += "truct";          // Adds a string literal
    std::cout << "After push_back and +=: " << s << "\n";
    
    // Removing last character
    s.pop_back();
    std::cout << "After pop_back(): " << s << "\n";
    
    // Extracting a Substring: substr(starting_index, length)
    // Extracts "Struct" from "DataStruct"
    std::string sub = s.substr(4, 6); 
    std::cout << "Extracted Substring (index 4, len 6): " << sub << "\n\n";
}

void demonstrateSearching() {
    std::cout << "--- 3. Searching & Character Checking ---\n";
    
    std::string text = "DSA is awesome! 123";
    std::cout << "Text: \"" << text << "\"\n";
    
    // Searching for substrings/characters
    size_t foundIndex = text.find("awesome");
    if (foundIndex != std::string::npos) {
        std::cout << "'awesome' found at index: " << foundIndex << "\n";
    }
    
    size_t missingIndex = text.find("Python");
    if (missingIndex == std::string::npos) {
        std::cout << "'Python' was not found (returned std::string::npos).\n";
    }
    
    // Linear loop demonstrating cctype character classifications
    int alphanumericCount = 0;
    int digitCount = 0;
    
    for (char ch : text) {
        if (std::isalnum(ch)) alphanumericCount++;
        if (std::isdigit(ch)) digitCount++;
    }
    
    std::cout << "Alphanumeric character count: " << alphanumericCount << "\n";
    std::cout << "Digit character count: " << digitCount << "\n\n";
}

void demonstrateAlgorithmsAndConversions() {
    std::cout << "--- 4. STL Algorithms & Conversions ---\n";
    
    std::string s = "interview";
    std::cout << "Original string: " << s << "\n";
    
    // In-place Reverse
    std::reverse(s.begin(), s.end());
    std::cout << "Reversed string: " << s << "\n";
    
    // In-place Sort (ASCII order)
    std::sort(s.begin(), s.end());
    std::cout << "Sorted string:   " << s << "\n";
    
    // Type Conversions
    int number = 42;
    std::string numStr = std::to_string(number);
    std::cout << "Converted integer to string: " << numStr << "\n";
    
    std::string textNum = "2026";
    int parsedInt = std::stoi(textNum);
    std::cout << "Parsed string back to integer: " << parsedInt << "\n";
}

int main() {
    std::cout << "================================================\n";
    std::cout << "     LINEAR STRING PROCESSING DEMONSTRATION     \n";
    std::cout << "================================================\n\n";
    
    demonstrateStringBasics();
    demonstrateModifiers();
    demonstrateSearching();
    demonstrateAlgorithmsAndConversions();
    
    return 0;
}