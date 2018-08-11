//
//  Item.hpp
//  Assignment2
//
//  Created by Evan Matoske on 10/23/15.
//  Copyright © 2015 Evan Matoske. All rights reserved.
//

#ifndef Item_hpp
#define Item_hpp

#include <stdio.h>
#include <string>

/*******************************************************************
 * Author: Evan Matoske                                            *
 * Date: 10/25/15                                                  *
 * Description: Item class. Creates Items to be added to           *
 * the shopping list. Has getters and setters for item info,       *
 * has a cunstructor to create Item, function to output item info  *
 ******************************************************************/



class Item
{
private:
    std::string name;
    std::string unit;
    double price;
    int quantity;
    
    
public:
    //Default costructor
    Item()
    {
        name = " ";
        unit = " ";
        price = 0.0;
        quantity = 0;
    }
   
    
    
    //Constructor
    Item(std::string, std::string, double, int);
    
    //Getters
    std::string getName();
    std::string getUnit();
    double getPrice();
    int getQuantity();
    
    //Setters
    void setName(std::string);
    void setUnit(std::string);
    void setPrice(double);
    void setQuantity(int);
    
    void itemInfo();
};

#endif /* Item_hpp */
