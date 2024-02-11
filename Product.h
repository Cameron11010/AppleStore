#ifndef Product_h
#define Product_h

#include <iostream>
#include <string>

class Product {
public:
    Product();
    Product(std::string name, std::string productId, float price, int quantity);
    virtual ~Product();
    std::string getName() const;
    std::string getProductId() const;
    float getPrice() const;
    int getQuantity() const;
    virtual void setColor(std::string color) = 0; // Pure virtual method
    virtual void display() const = 0; // Pure virtual method
protected:
    std::string name;
    std::string productId;
    float price;
    int quantity;
};

#endif /* Product_h */
