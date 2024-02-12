#ifndef Mac_h
#define Mac_h

#include "Product.h"

class Mac : public Product {
public:
    Mac();
    Mac(std::string, std::string, int, float, int, int);
    ~Mac();
    void setRam(int);
    void setScreenSize(int);
    int getRam();
    int getScreenSize();
    void setColour(std::string); // Add this function
    std::string getColour(); // Add this function
    void display() const override;

private:
    int ram;
    int screenSize;
    std::string colour; // Add this data member
};

#endif /* Mac_h */
