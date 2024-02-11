#include "Mac.h"

Mac::Mac() : Product() {
    model = "";
}

Mac::Mac(std::string n, std::string pid, std::string m, float p, int q) : Product(n, pid, p, q) {
    model = m;
}

Mac::~Mac() {
    // Destructor body
}

void Mac::setModel(std::string m) {
    model = m;
}

std::string Mac::getModel() {
    return model;
}

void Mac::display() {
    std::cout << "Product: " << getName() << std::endl;
    std::cout << "Product ID: " << getProductId() << std::endl;
    std::cout << "Model: " << getModel() << std::endl;
    std::cout << "Price: $" << getPrice() << std::endl;
    std::cout << "Quantity: " << getQuantity() << std::endl;
}
