#ifndef Accessories_h
#define Accessories_h

#include "Product.h"

class Accessories: public Product {
private:
    std::string brand;

public:
    // Constructors
    Accessories();
    Accessories(std::string, std::string, std::string, float, int);

    // Destructor
    ~Accessories();

    // Setters
    void setBrand(std::string);

    // Getters
    std::string getBrand();

    // Implement the pure virtual function
    void display();
};

#endif /* Accessories_h */
