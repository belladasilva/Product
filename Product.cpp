#include "product.h"

// Isabella Da Silva
// COMP333 - Assignment #2 Inheritance
// Implementation file


// Product 
Product::Product()
{
    std::cout << "What is the bar code? ";
    std::cin >> barCode;
    barCode = barCode > 0 ? barCode : 0;

    std::cout << "What is the name of the product? ";
    std::cin.ignore();
    productName = new std::string();
    std::getline(std::cin, *productName);
    *productName = productName->empty() ? "NO NAME" : *productName;
    assert(productName);
}

Product::Product(int initialBarCode, std::string initialProductName)
{
    barCode = initialBarCode > 0 ? initialBarCode : 0;
    productName = new std::string(initialProductName.empty() ? "NO NAME" : initialProductName);
    assert(productName);
}

Product::~Product() 
{
    delete productName;
}

void Product::show(std::ostream& out) const
{
    out << "bar code: " << barCode << "product name: " << *productName << std::endl;
}

void Product::scanner() const
{
    if (barCode % 2 == 0) 
    {
        std::cout << "Discounted!" << std::endl;
    }
}


// PrePackedFood 
PrePackedFood::PrePackedFood()
{
    std::cout << "What is the bar code? ";
    std::cin >> barCode;
    barCode = barCode > 0 ? barCode : 0;

    std::cout << "What is the name of the product? ";
    std::cin.ignore(); 
    productName = new std::string();
    std::getline(std::cin, *productName);
    *productName = productName->empty() ? "NO NAME" : *productName;
    assert(productName);

    std::cout << "What is the price of the unit? ";
    std::cin >> unitPrice;
    unitPrice = unitPrice >= 0 ? unitPrice : 0.0;
}

PrePackedFood::PrePackedFood(int newBarCode, std::string newProductName, double newUnitPrice)
    : Product(newBarCode, newProductName), unitPrice(unitPrice)
{
    unitPrice = newUnitPrice >= 0 ? newUnitPrice : 0.0;
}

void PrePackedFood::show(std::ostream& out) const
{
    Product::show(out);
    out << "unit price: " << unitPrice << std::endl;
}

void PrePackedFood::scanner() const
{
    double newPrice = unitPrice * 100;
    int numb = static_cast<int>(newPrice) % 100;
    if (barCode % 2 == 0 || numb == 99)
        std::cout << "Discounted!" << std::endl;
}


// FreshFood
FreshFood::FreshFood()
{
    std::cout << "What is the bar code? ";
    std::cin >> barCode;
    barCode = barCode > 0 ? barCode : 0;

    std::cout << "What is the name of the product? ";
    std::cin.ignore();
    productName = new std::string();
    std::getline(std::cin, *productName);
    *productName = productName->empty() ? "NO NAME" : *productName;
    assert(productName);

    std::cout << "What is the price of the unit? ";
    std::cin >> unitPrice;
    unitPrice = unitPrice >= 0 ? unitPrice : 0.0;

    std::cout << "What is the weight? ";
    std::cin >> weight;
    weight = weight >= 0 ? weight : 0.0;
}

FreshFood::FreshFood(int newBarCode, std::string newProductName, double newUnitPrice, double newWeight)
    : Product(newBarCode, newProductName)
{
    unitPrice = newUnitPrice >= 0 ? newUnitPrice : 0.0;
    weight = newWeight >= 0 ? newWeight : 0.0;
}

void FreshFood::show(std::ostream& out) const
{
    Product::show(out);
    out << "unit price: " << unitPrice << "weight: " << weight << std::endl;
}

void FreshFood::scanner() const
{
    double newPrice = unitPrice * 100;
    int numb = static_cast<int>(newPrice) % 100;
    if (barCode % 2 == 0 || numb == 99)
        std::cout << "Discounted!" << std::endl;
}
