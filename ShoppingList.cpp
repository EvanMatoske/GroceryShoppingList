//
//  ShoppingList.cpp
//  Assignment2
//
//  Created by Evan Matoske on 10/23/15.
//  Copyright © 2015 Evan Matoske. All rights reserved.
//

#include "ShoppingList.hpp"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

/******************************************************************
 * Author: Evan Matoske                                           *
 * Date: 10/25/15                                                 *
 * Description: Creates a shopping list that stores item objects. *
 * Has the ability to add items, remove items,                    *
 * display all items on list, gets size of list,                  *
 * compares items, adds the total price of items on list,         *
 * gets the quantity of a duplicate item, overloads == operator.  *
 *****************************************************************/


//Adds item to shopping list
void ShoppingList::addItem(Item* pitem)
{
    List.push_back(pitem);
}

//Returns the total price of list
double ShoppingList::totalPrice()
{
    int ttlprc = 0, listTotalprice = 0;
    
    for(int i = 0; i < List.size(); i++)
    {
        ttlprc = (List[i]->getPrice() * List[i]->getQuantity());
        listTotalprice +=ttlprc;
    }
    return listTotalprice;
}

//Removes item from list
void ShoppingList::removeItem(std::string itemName)
{
    int k =0;
    for (int i = 0; i < List.size(); i++)
    {
       if (List[i]->getName() == itemName)
            List.erase(List.begin() +k );
    }
    
}
//Displays the items on the list
void ShoppingList::displayList()
{
    for (int i = 0; i < List.size(); i++)
    {
        std::cout << "Name: " << List[i]->getName() << std::endl;
        std::cout << "Units: " << List[i]->getUnit() << std::endl;
        std::cout << "Quantity: " << List[i]->getQuantity() << std::endl;
        std::cout << "Price: " << List[i]->getPrice() << std::endl;
        std::cout << "Extended price: " << List[i]->getPrice() * List[i]->getQuantity() << std::endl;
        std::cout << std::endl;
    }
    std::cout << "Total Price of List: " << totalPrice() << std::endl;
}
//Returns the size of the list
long ShoppingList::getSize()
{
    return List.size();
}

//Overloads the == operator. Returns the count of duplicate items. If count > 0 there are duplicate items
int ShoppingList::operator==(Item a)
{
    int count = 0;
    for (int i =0; i < List.size(); i++)
    {
        if (List[i]->getName() == a.getName())
            count++;
    }
    return count;
}

//Returns the original quantity of the duplicate item and returns it
int ShoppingList::getDuplicateQuantity(Item x)
{
    int quantity = 0;
    for (int i =0; i < List.size(); i++)
    {
        if (List[i]->getName() == x.getName())
            quantity = List[i]->getQuantity();
    }
    return quantity;
}
   
