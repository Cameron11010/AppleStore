#include "Accessories.h"

Accessories::Accessories() : Product() {
    brand = "";
}

Accessories::Accessories(std::string n, std::string pid, std::string b, float p, int q) : Product(n, pid, p, q) {
    brand = b;
}

Accessories::~Accessories() {
    // Destructor body
}

void Accessories::setBrand(std::string b) {
    brand = b;
}

std::string Accessories::getBrand() {
    return brand;
}

void Accessories::display() {
    std::cout << "Product: " << getName() << std::endl;
    std::cout << "Product ID: " << getProductId() << std::endl;
    std::cout << "Brand: " << getBrand() << std::endl;
    std::cout << "Price: $" << getPrice() << std::endl;
    std::cout << "Quantity: " << getQuantity() << std::endl;
}
