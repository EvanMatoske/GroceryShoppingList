//
//  Item.cpp
//  Assignment2
//
//  Created by Evan Matoske on 10/23/15.
//  Copyright © 2015 Evan Matoske. All rights reserved.
//

#include "Item.hpp"
#include <string>
#include <iostream>

/*******************************************************************
 * Author: Evan Matoske                                            *
 * Date: 10/25/15                                                  *
 * Description: Item class. Creates Items to be added to           *
 * the shopping list. Has getters and setters for item info,       *
 * has a cunstructor to create Item, function to output item info  *
 ******************************************************************/

//Constructor creates Item
Item::Item(std::string name, std::string unit, double price, int quantity)
{
    setName(name);
    setUnit(unit);
    setPrice(price);
    setQuantity(quantity);
}

// Outputs the Item info
void Item::itemInfo()
{
    std::cout << "Item : " << getName() << std::endl;
    std::cout << "Unit : " << getUnit() << std::endl;
    std::cout << "Price : $" << getPrice() << std::endl;
    std::cout << "Quantity : " << getQuantity() << std::endl;
    std::cout << std::endl;
}
/*************Setters***************/
void Item::setName(std::string nm)
{
    name = nm;
}
void Item::setUnit(std::string unt)
{
    unit = unt;
}
void Item::setPrice(double prc)
{
    price = prc;
}
void Item::setQuantity(int qnty)
{
    quantity = qnty;
}

/*************Getters*****************/
std::string Item::getName()
{
    return name;
}
std::string Item::getUnit()
{
    return unit;
}
double Item::getPrice()
{
    return price;
}
int Item::getQuantity()
{
    return quantity;
}











