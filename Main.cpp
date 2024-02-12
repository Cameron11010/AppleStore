#include <iostream> // Include the iostream library to enable input/output operations
#include "Product.h"  // Include the Product class header file
#include "Airpods.h"  // Include the Airpods class header file
#include "iPhone.h"    // Include the iPhone class header file
#include "Mac.h"      // Include the Mac class header file
#include "Watch.h"    // Include the Watch class header file
#include "Accessories.h"    // Include the Accessories class header file

int main() {
    // Create an array of Product pointers with a size of 100
    Product *products[100];
    // Initialize the num_products variable to 0
    int num_products = 0;

    // Display the Apple Inventory Menu
    std::cout << "\t\t\t\t_____________________________________________\n";
    std::cout << "\t\t\t\t                                             \n";
    std::cout << "\t\t\t\t             Apple Inventory Menu            \n";
    std::cout << "\t\t\t\t_____________________________________________\n";
    std::cout << "\t\t\t\t                                             \n";

    // Start an infinite loop to display the menu and get user input
    while (true) {
        std::cout << "\t\t\t\tSelect an option:\n";
        std::cout << "\t\t\t\t1. Add a product\n";
        std::cout << "\t\t\t\t2. View products\n";
        std::cout << "\t\t\t\t3. Exit\n";

        int choice;
        std::cin >> choice; // Read user input

        switch (choice) {
            case 1: { // Add a product
                std::cout << "\t\t\t\tSelect a product type:\n";
                std::cout << "\t\t\t\t1. Airpods\n";
                std::cout << "\t\t\t\t2. iPhone\n";
                std::cout << "\t\t\t\t3. Mac\n";
                std::cout << "\t\t\t\t4. Watch\n";
                std::cout << "\t\t\t\t5. Accessories\n";

                int product_type;
                std::cin >> product_type; // Read user input

                std::string name, productId, colour, chargingType;
                int ram, storage, size, screenSize, quantity;
                float price;
                char ultra_ans;
                bool isUltra;
                std::string brand;

                switch (product_type) {
                    case 1: { // Add Airpods
                        std::cout << "\t\t\t\tEnter Airpods name: \n";
                        std::cin >> name; // Read user input
                        std::cout << "\t\t\t\tEnter product ID: \n";
                        std::cin >> productId; // Read user input
                        std::cout << "\t\t\t\tEnter colour: \n";
                        std::cin >> colour; // Read user input
                        std::cout << "\t\t\t\tEnter charging type: \n";
                        std::cin >> chargingType; // Read user input
                        std::cout << "\t\t\t\tEnter price: \n";
                        std::cin >> price; // Read user input
                        std::cout << "\t\t\t\tEnter quantity: \n";
                        std::cin >> quantity; // Read user input
                        products[num_products++] = new Airpods(name, productId, colour, chargingType, price, quantity);
                        break;
                    }
                    case 2: {
                        // Prompt the user to enter the iPhone details
                        std::cout << "\t\t\t\tEnter iPhone name: \n";
                        std::cin >> name;
                        std::cout << "\t\t\t\tEnter product ID: \n";
                        std::cin >> productId;
                        std::cout << "\t\t\t\tEnter colour: \n";
                        std::cin >> colour;
                        std::cout << "\t\t\t\tEnter charging type: \n";
                        std::cin >> chargingType;
                        std::cout << "\t\t\t\tEnter price: \n";
                        std::cin >> price;
                        std::cout << "\t\t\t\tEnter quantity: \n";
                        std::cin >> quantity;

                        // Create a new iPhone object with the entered details and add it to the products array
                        products[num_products++] = new iPhone(name, productId, colour, chargingType, price, quantity);
                        break;
                    }
                    case 3: {
                        // Prompt the user to enter the Mac details
                        std::cout << "\t\t\t\tEnter Mac name: \n";
                        std::cin >> name;
                        std::cout << "\t\t\t\tEnter product ID: \n";
                        std::cin >> productId;
                        std::cout << "\t\t\t\tEnter RAM: \n";
                        std::cin >> ram;
                        std::cout << "\t\t\t\tEnter screen size: \n";
                        std::cin >> screenSize;
                        std::cout << "\t\t\t\tEnter price: \n";
                        std::cin >> price;
                        std::cout << "\t\t\t\tEnter quantity: \n";
                        std::cin >> quantity;

                        // Create a new Mac object with the entered details and add it to the products array
                        products[num_products++] = new Mac(name, productId, ram, screenSize, price, quantity);
                        break;
                    }
                    case 4: {
                        // Prompt the user to enter the Watch details
                        std::cout << "\t\t\t\tEnter Watch name: \n";
                        std::cin >> name;
                        std::cout << "\t\t\t\tEnter product ID: \n";
                        std::cin >> productId;
                        std::cout << "\t\t\t\tEnter colour: \n";
                        std::cin >> colour;
                        std::cout << "\t\t\t\tEnter size: \n";
                        std::cin >> size;
                        std::cout << "\t\t\t\tIs Ultra: \n";
                        std::cin >> ultra_ans;
                        if (ultra_ans == 'y') {
                            isUltra = true;
                        } else if (ultra_ans == 'n') {
                        } else {
                            std::cout << "\t\t\t\tInvalid input. Assuming false.\n";
                            isUltra = false;
                        }
                        std::cout << "\t\t\t\tEnter price: \n";
                        std::cin >> price;
                        std::cout << "\t\t\t\tEnter quantity: \n";
                        std::cin >> quantity;

                        // Create a new Watch object with the entered details and add it to the products array
                        products[num_products++] = new Watch(name, productId, colour, size, isUltra, price, quantity);
                        break;
                    }
                    case 5:{
                        // Prompt the user to enter the Accessories details
                        std::cout << "\t\t\t\tEnter Accessories name: \n";
                        std::cin >> name;
                        std::cout << "\t\t\t\tEnter product ID: \n";
                        std::cin >> productId;
                        std::cout << "\t\t\t\tEnter colour: \n";
                        std::cin >> colour;
                        std::cout << "\t\t\t\tEnter brand: \n";
                        std::cin >> brand;
                        std::cout << "\t\t\t\tEnter price: \n";
                        std::cin >> price;
                        std::cout << "\t\t\t\tEnter quantity: \n";
                        std::cin >> quantity;

                        // Create a new Accessories object with the entered details and add it to the products array
                        products[num_products++] = new Accessories(name, productId, colour, brand, price, quantity);
                        break;
                    }

                    default:
                        // Display an error message for an invalid product type
                        std::cout << "\t\t\t\tInvalid product type\n";
                        break;
                }
                break;
            }
            case 2:
                // Display all the products in the inventory
                std::cout << "_________________________________Products_________________________________________________\n";
                for(int i = 0; i < num_products; i++){
                    products[i]->display();
                    std::cout << "\n";
                    std::cout << "__________________________________________________________________________________________\n";
                }
                break;
            case 3:
                // Delete all the dynamically allocated objects and exit the program
                for(int i = 0; i < num_products; i++){
                    delete products[i];
                }
                return 0;
            default:
                // Display an error message for an invalid option
                std::cout << "_________________________________________Products_________________________________________\n";
                break;
        }
    }
    return 0;
}

