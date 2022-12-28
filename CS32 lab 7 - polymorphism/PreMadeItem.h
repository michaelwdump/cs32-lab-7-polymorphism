#ifndef PREMADEITEM_H
#define PREMADEITEM_H
#include <string>
#include "IceCreamItem.h"

class PreMadeItem : public IceCreamItem {
    public:
        virtual double getPrice();
        virtual std::string composeItem();
        PreMadeItem(std::string name, std::string size);
        virtual ~PreMadeItem();
            // A virtual destructor in case you have to deallocate any memory on the heap.
    private:
        std::string name;
};


#endif