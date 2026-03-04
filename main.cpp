#include <iostream>

void showMenu() {
    std::cout << "1. Manage Customers\n";
    std::cout << "2. Manage Jobs\n";
    std::cout << "3. Manage Inventory\n";
    std::cout << "4. Exit\n";
}

int main() {
    showMenu();
    return 0;
}