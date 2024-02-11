#ifndef iPhone_h
#define iPhone_h

#include "Product.h"

class iPhone : public Product {
public:
    iPhone();
    iPhone(std::string name, std::string productId, std::string color, std::string chargingType, float price, int quantity);
    ~iPhone();
    void setColor(std::string color) override;
    void setChargingType(std::string chargingType);
    std::string getColor() const;
    std::string getChargingType() const;
    void display() const override;
private:
    std::string color;
    std::string chargingType;
};

#endif /* iPhone_h */
