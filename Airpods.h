#ifndef Airpods_h
#define Airpods_h

#include "Product.h"

class Airpods : public Product {
public:
    Airpods();
    Airpods(std::string name, std::string productId, std::string color, std::string chargingType, float price, int quantity);
    ~Airpods();
    void setColor(std::string color) override;
    void setChargingType(std::string chargingType);
    std::string getColor() const;
    std::string getChargingType() const;
    void display() const override;
private:
    std::string color;
    std::string chargingType;
};

#endif /* Airpods_h */
