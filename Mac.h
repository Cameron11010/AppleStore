#ifndef Mac_h
#define Mac_h

#include "Product.h"

class Mac: public Product {
private:
    std::string model;

public:
    // Constructors
    Mac();
    Mac(std::string, std::string, std::string, float, int);

    // Destructor
    ~Mac();

    // Setters
    void setModel(std::string);

    // Getters
    std::string getModel();

    // Implement the pure virtual function
    void display();
};

#endif /* Mac_h */
