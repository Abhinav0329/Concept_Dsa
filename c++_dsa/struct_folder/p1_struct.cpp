// //-->(1.)Passing Structs by Value vs. Reference
// #include<iostream>
// #include<string>

// struct BankAccount{
//     double balance;
// };

// // FAILS: Passes by value (creates a duplicate copy on the Stack)
// void baddeposit(BankAccount account){
//     account.balance += 500.0;
// }

// // SUCCEEDS: Passes by reference using '&' (grabs the real original object)
// void gooddeposit(BankAccount& account){
//     account.balance += 500.0;
// }

// int main(){
//     BankAccount Acc={1000.0};

//     baddeposit(Acc);
//     std::cout << "After badDeposit:  $" << Acc.balance << std::endl;

//     gooddeposit(Acc);
//     std::cout << "After gooddeposit: $" << Acc.balance << std::endl;
    
//     return 0;  
// }

// //-->(2.)Arrays of Structures
// #include<iostream>
// #include<string>

// struct Item{
//     std::string name;
//     double price;
// };

// int main(){
//     Item shoppingCart[3] = {
//         {"Laptop", 999.99},
//         {"Mouse", 25.50},
//         {"Keyboard", 45.00}
//     };
//     double totalCost = 0.0;

//     std::cout << "--- RECEIPT ---" << std::endl;
//     for (int i = 0; i < 3; i++) {
//         std::cout << shoppingCart[i].name << ": $" << shoppingCart[i].price << std::endl;
//         totalCost += shoppingCart[i].price; // Accumulate prices
// }
//     std::cout << "----------------" << std::endl;
//     std::cout << "Total Bill: $" << totalCost << std::endl;

//     return 0;
// }

// //-->(3.)Nested Structures
// #include<iostream>
// #include<string>

// struct Point{
//     int x;
//     int y;
// };

// struct Rectangle {
//     Point topLeft;     
//     Point bottomRight; 
// };

// int main(){
//     // Initialize a nested struct layout
//     Rectangle rect = { {2, 10}, {8, 4} };

//     // Calculate dimensions
//     // Width = right X minus left X
//     int width = rect.bottomRight.x - rect.topLeft.x; 
    
//     // Height = top Y minus bottom Y
//     int height = rect.topLeft.y - rect.bottomRight.y;

//     int area = width * height;

//     std::cout << "Rectangle Width:  " << width << std::endl;
//     std::cout << "Rectangle Height: " << height << std::endl;
//     std::cout << "Calculated Area:  " << area << std::endl; // 6 * 6 = 36

//     return 0;
// }

// //-->(4.)Converting Dot to Arrow Syntax
// #include <iostream>
// #include <string>

// struct Weapon {
//     std::string type;
//     int damage;
// };

// void printWeaponInfo(Weapon* wPtr) {
//     // Method A: Explicitly dereference first, then use dot
//     std::cout << "Method A: " << (*wPtr).type << " deals " << (*wPtr).damage << " dmg." << std::endl;

//     // Method B: Clean shorthand using arrow (Preferred)
//     std::cout << "Method B: " << wPtr->type << " deals " << wPtr->damage << " dmg." << std::endl;
// }

// int main() {
//     Weapon sword = {"Iron Sword", 25};
    
//     // Pass the address of the sword using the & operator
//     printWeaponInfo(&sword); 
    
//     return 0;
// }

// //-->(5.)Swapping Data via Struct Pointers
// #include <iostream>
// #include <string>

// struct Student {
//     std::string name;
//     int grade;
// };

// // Function accepts two memory addresses (pointers)
// void swapGrades(Student* s1, Student* s2) {
//     // Use arrow to read and swap values
//     int tempGrade = s1->grade;
//     s1->grade = s2->grade;
//     s2->grade = tempGrade;
// }

// int main() {
//     Student alice = {"Alice", 95};
//     Student bob = {"Bob", 78};

//     std::cout << "Before Swap -> Alice: " << alice.grade << ", Bob: " << bob.grade << std::endl;

//     // Pass the addresses of alice and bob
//     swapGrades(&alice, &bob);

//     std::cout << "After Swap  -> Alice: " << alice.grade << ", Bob: " << bob.grade << std::endl;

//     return 0;
// }