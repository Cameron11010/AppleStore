#include "iPhone.h"

iPhone::iPhone() : Product(), color(""), chargingType("") {}

iPhone::iPhone(std::string name, std::string productId, std::string color, std::string chargingType, float price, int quantity)
        : Product(name, productId, price, quantity), color(color), chargingType(chargingType) {}

iPhone::~iPhone() {}

void iPhone::setColor(std::string color) {
    this->color = color;
}

void iPhone::setChargingType(std::string chargingType) {
    this->chargingType = chargingType;
}

std::string iPhone::getColor() const {
    return color;
}

std::string iPhone::getChargingType() const {
    return chargingType;
}

void iPhone::display() const {
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "Product ID: " << getProductId() << std::endl;
    std::cout << "Color: " << color << std::endl;
    std::cout << "Charging Type: " << chargingType << std::endl;
    std::cout << "Price: $" << getPrice() << std::endl;
    std::cout << "Quantity: " << getQuantity() << std::endl;
}
