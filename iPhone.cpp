#include "iPhone.h"

iPhone::iPhone() : Product(), colour(""), chargingType("") {}

iPhone::iPhone(std::string name, std::string productId, std::string colour, std::string chargingType, float price, int quantity)
        : Product(name, productId, price, quantity), colour(colour), chargingType(chargingType) {}

iPhone::~iPhone() {}

void iPhone::setColour(std::string colour) {
    this->colour = colour;
}

void iPhone::setChargingType(std::string chargingType) {
    this->chargingType = chargingType;
}

std::string iPhone::getColour() const {
    return colour;
}

std::string iPhone::getChargingType() const {
    return chargingType;
}

void iPhone::display() const {
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "Product ID: " << getProductId() << std::endl;
    std::cout << "Colour: " << colour << std::endl;
    std::cout << "Charging Type: " << chargingType << std::endl;
    std::cout << "Price: $" << getPrice() << std::endl;
    std::cout << "Quantity: " << getQuantity() << std::endl;
}
