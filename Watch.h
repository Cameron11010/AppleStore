#ifndef Watch_h
#define Watch_h

#include "Product.h"

class Watch : public Product {
public:
    Watch();
    Watch(std::string name, std::string productId, std::string colour, int size, bool isUltra, float price, int quantity);
    ~Watch();
    void setColour(std::string colour) override;
    void setSize(int size);
    void setIsUltra(bool isUltra);
    int getSize() const;
    bool getIsUltra() const;
    void display() const override;
private:
    std::string colour;
    int size;
    bool isUltra;
};

#endif /* Watch_h */
