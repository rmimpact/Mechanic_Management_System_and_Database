#include <iostream>

void showMenu() {
    std::cout << "1. Manage Customers\n";
    std::cout << "2. Manage Jobs\n";
    std::cout << "3. Manage Inventory\n";
    std::cout << "4. Exit\n";
}

int main() {
    while(true) {
        showMenu();
        int choice;
        std::cout << "Selection> ";
        std::cin >> choice;
        switch(choice) {
            case 1:
                std::cout << "Manage Customers Menu\n";
                break;
            case 2:
                std::cout << "Manage Jobs Meneu\n";
                break;
            case 3:
                std::cout << "Manage Inventory Menu\n";
                break;
            case 4:
                std::cout << "Program Closed\n";
                return 0;
                break;
            default:
                std::cout << "That is not an option, please try again\n";
        }
    }
    return 0;
}