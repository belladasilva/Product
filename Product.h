#include <iostream>
#include <string>
#include <cassert>

// Isabella Da Silva
// COMP333 - Assignment #2 Inheritance

class Product
{
public:
    Product();
    Product(int /*barCode*/, std::string/*productName*/);
    virtual ~Product(); // destructor 
    virtual void show(std::ostream& /*file*/) const;
    virtual void scanner() const;
    int getBarCode() const { return barCode; }
    std::string getProductName() const { return *productName; }
protected:
    int barCode;
    std::string* productName;
};

class PrePackedFood : public Product
{
public:
    PrePackedFood();
    PrePackedFood(int /*barCode*/, std::string /*productName*/, double /*unitPrice*/);
    void show(std::ostream& /*file*/) const;
    void scanner() const override;
    double getUnitPrice() const { return unitPrice; }
private:
    double unitPrice;
};

class FreshFood : public Product
{
public:
    FreshFood();
    FreshFood(int /*barCode*/, std::string /*productName*/, double /*unitPrice*/, double /*weight*/);
    void show(std::ostream& /*file*/) const;
    void scanner() const override;
    double getUnitPrice() const { return unitPrice; }
    double getWeight() const { return weight; }
private:
    double unitPrice;
    double weight;
};
