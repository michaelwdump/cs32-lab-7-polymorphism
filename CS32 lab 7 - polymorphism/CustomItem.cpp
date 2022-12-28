#include "CustomItem.h"
#include <map>
#include <string>
#include <sstream>
#include <iomanip>

double CustomItem::getPrice() {
    int weight = 0;
    for (auto &x : container) {
        weight +=x.second;
    }
    return price + weight*0.4;
}

std::string CustomItem::composeItem() {
    std::string toppinglist;
    for (auto &x : container) {
        toppinglist +=x.first + ": " + std::to_string(x.second) + " oz\n";
    }
    std::stringstream price2d;
    price2d << std::fixed << std::setprecision(2) << getPrice();
    return 
    "Custom Size: " + size + 
    "\nToppings:\n" + 
    toppinglist
        + "Price: $" + price2d.str() + "\n";
}

CustomItem::CustomItem(std::string size) : IceCreamItem(size) {
    this->size = size;
    if (size == "small") {
        price = 3.00;
    }
    else if (size == "medium") {
        price = 5.00;
    }
    else {
        price = 6.50;
    }
}

CustomItem::~CustomItem() {}

void CustomItem::addTopping(std::string topping) {
    int count = container.count(topping);
    if (count == 0) {
        container.insert(make_pair(topping, 1));
    }
    else {
        container[topping]++;
    }
}


