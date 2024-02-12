#include "Accessories.h"

Accessories::Accessories() : Product(), colour(""), brand("") {}

Accessories::Accessories(std::string name, std::string productId, std::string colour, std::string brand, float price, int quantity)
        : Product(name, productId, price, quantity), colour(colour), brand(brand) {}

Accessories::~Accessories() {}

void Accessories::setBrand(std::string brand) {
    this->brand = brand;
}

void Accessories::setColour(std::string colour) {
    this->colour = colour;
}

std::string Accessories::getBrand() const {
    return brand;
}

std::string Accessories::getColour() const {
    return colour;
}

void Accessories::display() const {
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "Product ID: " << getProductId() << std::endl;
    std::cout << "Colour: " << colour << std::endl;
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Price: $" << getPrice() << std::endl;
    std::cout << "Quantity: " << getQuantity() << std::endl;
}
