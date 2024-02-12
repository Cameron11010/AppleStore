#include "Product.h"

Product::Product() : name(""), productId(""), price(0.0), quantity(0) {}

Product::Product(std::string name, std::string productId, float price, int quantity)
        : name(name), productId(productId), price(price), quantity(quantity) {}

Product::~Product() {}

std::string Product::getName() const {
    return name;
}

std::string Product::getProductId() const {
    return productId;
}

float Product::getPrice() const {
    return price;
}

int Product::getQuantity() const {
    return quantity;
}
