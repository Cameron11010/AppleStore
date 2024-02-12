#include "Mac.h"

Mac::Mac() : Product(), ram(0), screenSize(0), colour("") {}

Mac::Mac(std::string name, std::string productId, int r, float p, int q, int s) : Product(name, productId, p, q), ram(r), screenSize(s), colour("") {}

Mac::~Mac() {}

void Mac::setRam(int r) {
    ram = r;
}

void Mac::setScreenSize(int s) {
    screenSize = s;
}

void Mac::setColour(std::string c) {
    colour = c;
}

std::string Mac::getColour() {
    return colour;
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
    std::cout << "Colour: " << colour << std::endl;
    std::cout << "Price: $" << getPrice() << std::endl;
    std::cout << "Quantity: " << getQuantity() << std::endl;
}
