#ifndef iPhone_h
#define iPhone_h

#include "Product.h"

class iPhone : public Product {
public:
    iPhone();
    iPhone(std::string name, std::string productId, std::string colour, std::string chargingType, float price, int quantity);
    ~iPhone();
    void setColour(std::string colour) override;
    void setChargingType(std::string chargingType);
    std::string getColour() const;
    std::string getChargingType() const;
    void display() const override;
private:
    std::string colour;
    std::string chargingType;
};

#endif /* iPhone_h */
