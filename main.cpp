#include <iostream>
#include <string>
#include <vector>

struct Product {
    int id;
    std::string name;
    int quantity;
    double price;
};

int main() {
    std::string studentName = "Ammar";
    int age = 20;
    std::cout << "--- Basic Student Info ---" << std::endl;
    std::cout << "Name: " << studentName << ", Age: " << age << "\n\n";

    int semesterGrades[4] = {85, 90, 78, 92}; 
    std::cout << "--- Fixed Data (Array Elements) ---" << std::endl;
    std::cout << "First Semester Grade: " << semesterGrades[0] << "\n\n";

    std::vector<int> studentIds;
    studentIds.push_back(101);
    studentIds.push_back(102);
    
    std::cout << "--- Dynamic Data (Vector Elements) ---" << std::endl;
    std::cout << "Total IDs registered: " << studentIds.size() << "\n\n";

    Product item1;
    item1.id = 2468;
    item1.name = "Microcontroller Kit";
    item1.quantity = 50;
    item1.price = 15.50;

    std::cout << "--- Structured Data (Custom Object) ---" << std::endl;
    std::cout << "Product Added: " << item1.name << " | Stock: " << item1.quantity << " units" << "\n\n";

    return 0;
}
