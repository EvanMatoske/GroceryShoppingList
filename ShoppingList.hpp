//
//  ShoppingList.hpp
//  Assignment2
//
//  Created by Evan Matoske on 10/23/15.
//  Copyright © 2015 Evan Matoske. All rights reserved.
//

#ifndef ShoppingList_hpp
#define ShoppingList_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include "Item.hpp"

/******************************************************************
 * Author: Evan Matoske                                           *
 * Date: 10/25/15                                                 *
 * Description: Creates a shopping list that stores item objects. *
 * Has the ability to add items, remove items,                    *
 * display all items on list, gets size of list,                  *
 * compares items, adds the total price of items on list,         *
 * gets the quantity of a duplicate item, overloads == operator.  *
 *****************************************************************/



class ShoppingList
{
private:
    std::vector<Item*> List;
    
public:
  
    void addItem(Item* pitem);
    void removeItem(std::string itemName);
    void displayList();
    double totalPrice();
    long getSize();
    int operator== (Item a);
    int getDuplicateQuantity(Item);
};
#endif /* ShoppingList_hpp */
