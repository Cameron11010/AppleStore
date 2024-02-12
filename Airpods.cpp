#include "Airpods.h"

Airpods::Airpods() : Product(), colour(""), chargingType("") {}

Airpods::Airpods(std::string name, std::string productId, std::string colour, std::string chargingType, float price, int quantity)
        : Product(name, productId, price, quantity), colour(colour), chargingType(chargingType) {}

Airpods::~Airpods() {}

void Airpods::setColour(std::string colour) {
    this->colour = colour;
}

void Airpods::setChargingType(std::string chargingType) {
    this->chargingType = chargingType;
}

std::string Airpods::getColour() const {
    return colour;
}

std::string Airpods::getChargingType() const {
    return chargingType;
}

void Airpods::display() const {
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "Product ID: " << getProductId() << std::endl;
    std::cout << "Colour: " << colour << std::endl;
    std::cout << "Charging Type: " << chargingType << std::endl;
    std::cout << "Price: $" << getPrice() << std::endl;
    std::cout << "Quantity: " << getQuantity() << std::endl;
}
