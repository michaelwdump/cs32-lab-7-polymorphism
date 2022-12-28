#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H
#include "IceCreamItem.h"
#include <map>

class CustomItem : public IceCreamItem {
	public:
		virtual double getPrice();
		virtual std::string composeItem();
		CustomItem(std::string size);
		virtual ~CustomItem();
		void addTopping(std::string topping);

	private:
		std::map<std::string, int> container;
};

#endif
