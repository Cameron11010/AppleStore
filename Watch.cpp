#include "Watch.h"

Watch::Watch() : Product(), color(""), size(0), isUltra(false) {}

Watch::Watch(std::string name, std::string productId, std::string color, int size, bool isUltra, float price, int quantity)
        : Product(name, productId, price, quantity), color(color), size(size), isUltra(isUltra) {}

Watch::~Watch() {}

void Watch::setColor(std::string color) {
    this->color = color;
}

void Watch::setSize(int s) {
    size = s;
}

void Watch::setIsUltra(bool i) {
    isUltra = i;
}

std::string Watch::getColor() const {
    return color;
}

int Watch::getSize() const {
    return size;
}

bool Watch::getIsUltra() const {
    return isUltra;
}

void Watch::display() const {
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "Product ID: " << getProductId() << std::endl;
    std::cout << "Color: " << color << std::endl;
    std::cout << "Size: " << size << std::endl;
    std::cout << "Is Ultra: " << (isUltra ? "Yes" : "No") << std::endl;
    std::cout << "Price: $" << getPrice() << std::endl;
    std::cout << "Quantity: " << getQuantity() << std::endl;
}
