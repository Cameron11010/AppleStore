#ifndef Airpods_h
#define Airpods_h

#include "Product.h"

class Airpods : public Product {
public:
    Airpods();
    Airpods(std::string name, std::string productId, std::string colour, std::string chargingType, float price, int quantity);
    ~Airpods();
    void setColour(std::string colour) override;
    void setChargingType(std::string chargingType);
    std::string getColour() const;
    std::string getChargingType() const;
    void display() const override;
private:
    std::string colour;
    std::string chargingType;
};

#endif /* Airpods_h */
