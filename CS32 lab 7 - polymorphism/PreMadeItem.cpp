#include "PreMadeItem.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

double PreMadeItem::getPrice() {
    return price;
}

std::string PreMadeItem::composeItem() {
    std::stringstream price2d;
    price2d << std::fixed << std::setprecision(2) << getPrice();
    return 
    "Pre-made Size: " + size + "\nPre-made Item: " + name + 
    "\nPrice: $" + price2d.str() + "\n";
}

PreMadeItem::PreMadeItem(std::string name, std::string size) : IceCreamItem(size) {
    //this->size = size;
    this->name = name;
    //std::cout << size << std::endl;
    // if (size == "small") {
    //     price = 4.00;
    // }
    // if (size == "medium") {
    //     price = 6.00;
    // }
    // else {
    //     price = 7.50;
    // }

    if (this->size == "large") {
        price = 7.50;
    }
    else if (this->size == "medium") {
        price = 6.00;
    }
    else if (this->size == "small") {
        price = 4.00;
    }
    else {
        std::cout << "ELSE BRANCH for " << name << ": " << this->size << std::endl;
        price = 0.00;
    }
}
    

PreMadeItem::~PreMadeItem() {}