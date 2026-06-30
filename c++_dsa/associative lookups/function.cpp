#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

void demonstrateUnorderedMap() {
    std::cout << "--- 1. std::unordered_map (Key-Value Pairs) ---\n";
    
    // Create a map tracking fruit names (string) and their quantities (int)
    std::unordered_map<std::string, int> inventory;
    
    // 1. Insertion and Assignment
    inventory["apple"] = 10;
    inventory["banana"] = 5;
    inventory["orange"] = 8;
    
    // 2. Modifying values
    inventory["apple"] += 5; // Increases apple count to 15
    
    // 3. Size and Empty check
    std::cout << "Total unique items in inventory: " << inventory.size() << "\n";
    
    // 4. Checking existence using .count() (Returns 1 if exists, 0 if not)
    if (inventory.count("banana")) {
        std::cout << "Bananas are in stock. Quantity: " << inventory["banana"] << "\n";
    }
    
    // 5. Searching safely using .find()
    // .find() returns an iterator. If it matches .end(), the key wasn't found.
    std::string searchKey = "mango";
    auto it = inventory.find(searchKey);
    if (it != inventory.end()) {
        // it->first is the Key, it->second is the Value
        std::cout << "Found " << it->first << " with quantity " << it->second << "\n";
    } else {
        std::cout << "'" << searchKey << "' not found in inventory.\n";
    }
    
    // 6. DANGER ZONE: Accessing a non-existent key via [] creates it!
    std::cout << "Accessing 'grapes' via []: " << inventory["grapes"] << " (auto-created with default value 0)\n";
    std::cout << "New total unique items: " << inventory.size() << "\n";
    
    // 7. Safe access via .at() (Throws an exception if the key is missing)
    try {
        int count = inventory.at("mango");
    } catch (const std::out_of_range& e) {
        std::cout << "Caught exception: .at() safely blocked access to missing key 'mango'\n";
    }
    
    // 8. Erasing an element
    inventory.erase("grapes");
    
    // 9. Traversing an unordered_map
    std::cout << "\n--- Current Inventory List ---\n";
    for (const auto& pair : inventory) {
        std::cout << "Item: " << pair.first << " | Quantity: " << pair.second << "\n";
    }
    std::cout << "\n";