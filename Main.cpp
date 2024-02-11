#include <iostream>
#include "Product.h"
#include "Airpods.h"
#include "iPhone.h"
#include "Mac.h"
#include "Watch.h"

int main() {
    Product* products[100];
    int num_products = 0;

    while (true) {
        std::cout << "Select an option:\n";
        std::cout << "1. Add a product\n";
        std::cout << "2. View products\n";
        std::cout << "3. Exit\n";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::cout << "Select a product type:\n";
                std::cout << "1. Airpods\n";
                std::cout << "2. iPhone\n";
                std::cout << "3. Mac\n";
                std::cout << "4. Watch\n";

                int product_type;
                std::cin >> product_type;

                std::string name, productId, color, chargingType;
                int ram, storage, screenSize, quantity;
                float price;

                switch (product_type) {
                    case 1:
                        std::cout << "Enter product name: ";
                        std::cin.ignore();
                        std::getline(std::cin, name);
                        std::cout << "Enter product ID: ";
                        std::cin >> productId;
                        std::cout << "Enter color: ";
                        std::cin >> color;
                        std::cout << "Enter charging type: ";
                        std::cin >> chargingType;
                        std::cout << "Enter price: ";
                        std::cin >> price;
                        std::cout << "Enter quantity: ";
                        std::cin >> quantity;
                        products[num_products++] = new Airpods(name, productId, color, chargingType, price, quantity);
                        break;
                    case 2:
                        std::cout << "Enter product name: ";
                        std::cin.ignore();
                        std::getline(std::cin, name);
                        std::cout << "Enter product ID: ";
                        std::cin >> productId;
                        std::cout << "Enter color: ";
                        std::cin >> color;
                        std::cout << "Enter RAM: ";
                        std::cin >> ram;
                        std::cout << "Enter storage: ";
                        std::cin >> storage;
                        std::cout << "Enter price: ";
                        std::cin >> price;
                        std::cout << "Enter quantity: ";
                        std::cin >> quantity;
                        products[num_products++] = new iPhone(name, productId, color, ram, storage, price, quantity);
                        break;
                    case 3:
                        std::cout << "Enter product name: ";
                        std::cin.ignore();
                        std::getline(std::cin, name);
                        std::cout << "Enter product ID: ";
                        std::cin >> productId;
                        std::cout << "Enter color: ";
                        std::cin >> color;
                        std::cout << "Enter RAM: ";
                        std::cin >> ram;
                        std::cout << "Enter screen size: ";
                        std::cin >> screenSize;
                        std::cout << "Enter price: ";
                        std::cin >> price;
                        std::cout << "Enter quantity: ";
                        std::cin >> quantity;
                        products[num_products++] = new Mac(name, productId, color, screenSize, price, quantity);
                        break;
                    case 4:
                        std::cout << "Enter product name: ";
                        std::cin.ignore();
                        std::getline(std::cin, name);
                        std::cout << "Enter product ID: ";
                        std::cin >> productId;
                        std::cout << "Enter color: ";
                        std::cin >> color;
                        std::cout << "Enter price: ";
                        std::cin >> price;
                        std::cout << "Enter quantity: ";
                        std::cin >> quantity;
                        products[num_products++] = new Watch(name, productId, color, price, quantity);
                        break;
                    default:
                        std::cout << "Invalid product type\n";
                        break;
                }
                break;
            }
            case 2:
                std::cout << "Products:\n";
                for (int i = 0; i < num_products; i++) {
                    products[i]->display();
                    std::cout << "\n";
                }
                break;
            case 3:
                for (int i = 0; i < num_products; i++) {
                    delete products[i];
                }
                return 0;
            default:
                std::cout << "Invalid option\n";
                break;
        }
    }

    return 0;
}
