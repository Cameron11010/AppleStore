#include "Mac.h"

Mac::Mac() : Product(), ram(0), screenSize(0), color("") {}

Mac::Mac(std::string name, std::string productId, int r, float p, int q, int s) : Product(name, productId, p, q), ram(r), screenSize(s), color("") {}

Mac::~Mac() {}

void Mac::setRam(int r) {
    ram = r;
}

void Mac::setScreenSize(int s) {
    screenSize = s;
}

void Mac::setColor(std::string c) {
    color = c;
}

std::string Mac::getColor() {
    return color;
}

int Mac::getRam() {
    return ram;
}

int Mac::getScreenSize() {
    return screenSize;
}

void Mac::display() const {
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "Product ID: " << getProductId() << std::endl;
    std::cout << "RAM: " << ram << " GB" << std::endl;
    std::cout << "Screen Size: " << screenSize << " inches" << std::endl;
    std::cout << "Color: " << color << std::endl;
    std::cout << "Price: $" << getPrice() << std::endl;
    std::cout << "Quantity: " << getQuantity() << std::endl;
}
