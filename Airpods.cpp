#include "Airpods.h"

Airpods::Airpods() : Product(), color(""), chargingType("") {}

Airpods::Airpods(std::string name, std::string productId, std::string color, std::string chargingType, float price, int quantity)
        : Product(name, productId, price, quantity), color(color), chargingType(chargingType) {}

Airpods::~Airpods() {}

void Airpods::setColor(std::string color) {
    this->color = color;
}

void Airpods::setChargingType(std::string chargingType) {
    this->chargingType = chargingType;
}

std::string Airpods::getColor() const {
    return color;
}

std::string Airpods::getChargingType() const {
    return chargingType;
}

void Airpods::display() const {
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "Product ID: " << getProductId() << std::endl;
    std::cout << "Color: " << color << std::endl;
    std::cout << "Charging Type: " << chargingType << std::endl;
    std::cout << "Price: $" << getPrice() << std::endl;
    std::cout << "Quantity: " << getQuantity() << std::endl;
}
