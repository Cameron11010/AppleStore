#ifndef Watch_h
#define Watch_h

#include "Product.h"

class Watch : public Product {
public:
    Watch();
    Watch(std::string name, std::string productId, std::string color, int size, bool isUltra, float price, int quantity);
    ~Watch();
    void setColor(std::string color) override;
    void setSize(int size);
    void setIsUltra(bool isUltra);
    std::string getColor() const;
    int getSize() const;
    bool getIsUltra() const;
    void display() const override;
private:
    std::string color;
    int size;
    bool isUltra;
};

#endif /* Watch_h */
