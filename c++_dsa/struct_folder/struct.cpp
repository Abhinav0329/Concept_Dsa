// // (1).Multi-Data Type Struct
// #include <iostream>
// #include <string>
// #include <vector>

// // Define a structural blueprint with diverse data types
// struct VideoGame {
//     std::string title;            // Text string
//     char ageRating;               // Single character ('M', 'E', 'T')
//     int playerCapacity;           // Whole number
//     double reviewScore;           // High-precision decimal
//     bool isOnlineRequired;        // Boolean flags (true/false)
//     std::vector<std::string> dlc; // Dynamic list of multiple strings inside a struct!
// };

// int main() {
//     // 1. Initializing a struct object using an initialization list
//     VideoGame game1 = {
//         "Space Odyssey", 
//         'T', 
//         4, 
//         9.45, 
//         true, 
//         {"Mars Map Pack", "Alien Weapons Pack"}
//     };

//     // 2. Reading values using the Dot (.) Operator
//     std::cout << "Game Title: " << game1.title << std::endl;
//     std::cout << "Rating:     " << game1.ageRating << std::endl;
//     std::cout << "Score:      " << game1.reviewScore << "/10" << std::endl;
    
//     // Printing the internal vector list
//     std::cout << "Available Expansions:" << std::endl;
//     for (std::string pack : game1.dlc) {
//         std::cout << " - " << pack << std::endl;
//     }

//     // 3. Modifying data inside a struct
//     game1.reviewScore = 9.80; // The game got a review updates!
//     std::cout << "Updated Score: " << game1.reviewScore << std::endl;

//     return 0;
// }

// // (2).Structs + Pointers
// #include <iostream>
// #include <string>

// struct Student {
//     std::string name;
//     int grade;
// };

// int main() {
//     // Allocate a struct object directly on the HEAP
//     Student* studentPtr = new Student{"Alex", 92};

//     // WRONG WAY: studentPtr.name = "Bob"; (Will not compile!)
    
//     // CORRECT WAY: Use the Arrow Operator (->)
//     std::cout << "Student Name:  " << studentPtr->name << std::endl;
//     std::cout << "Student Grade: " << studentPtr->grade << std::endl;

//     // Modify via pointer
//     studentPtr->grade = 97;
//     std::cout << "New Grade:     " << studentPtr->grade << std::endl;

//     // Clean up heap memory!
//     delete studentPtr;
//     return 0;
// }