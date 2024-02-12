#ifndef Accessories_h
#define Accessories_h

#include "Product.h"

class Accessories : public Product {
public:
    Accessories();
    Accessories(std::string name, std::string productId, std::string colour, std::string brand, float price, int quantity);
    ~Accessories();
    void setBrand(std::string brand);
    void setColour(std::string colour) override;
    std::string getBrand() const;
    std::string getColour() const;
    void display() const override;
private:
    std::string colour;
    std::string brand;
};

#endif /* Accessories_h */
