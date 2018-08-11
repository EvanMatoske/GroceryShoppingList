//
//  main.cpp
//  Assignment2
//
//  Created by Evan Matoske on 10/23/15.
//  Copyright © 2015 Evan Matoske. All rights reserved.
//

#include <iostream>
#include <string>
#include "ShoppingList.hpp"

int main()
{
    //Initiates a List
    ShoppingList list;
    
    int choice;
    

    do
    {
    
    std::cout << "Enter 1 to add an item to your list" << std::endl;
    std::cout << "Enter 2 to remove an item to your list" << std::endl;
    std::cout << "Enter 3 to display the items on your list" << std::endl;
    std::cout << "Enter 4 to checkout" << std::endl;
    std::cin >> choice; std::cout << std::endl;
        
    //Input Validation
    while ((choice < 1) || (choice > 5))
    {
        std::cout << "Invalid choice, please enter 1, 2, 3, 4, or 5" << std::endl;
        std::cin >> choice;
    }
    
    //Adds item to list
    if (choice == 1)
    {
        
        std::string name;
        std::string unit;
        double price;
        int quantity;
        
        std::cout << "What is the name of the item? " << std::endl;
        std::cin >> name;
        std::cout << std::endl;
        
        std::cout << "What is the unit of the item? " << std::endl;
        std::cin >> unit;
        std::cout << std::endl;
        
        std::cout << "What is the price of the item? " << std::endl;
        std::cin >> price;
        std::cout << std::endl;
        
        std::cout << "How much of the item are you buying? " << std::endl;
        std::cin >> quantity;
        std::cout << std::endl;
        
        
        
        Item *objectPTR = new Item(name, unit, price, quantity);
        
        int tempQuantity = 0;
        
        //Determines if duplicate item if true it changes quantity of item on list 
        if (list==*objectPTR == 1)
        {
            tempQuantity = list.getDuplicateQuantity(*objectPTR);
            list.removeItem(name);
            Item *objectPTR = new Item(name, unit, price, quantity+tempQuantity);
            list.addItem(objectPTR);
        }
        else list.addItem(objectPTR);
    }
    
    //Removes item from list
    if ( choice == 2)
    {
        std::string name;
        std::cout << "What is the name of the item you would like to remove? " << std::endl;
        std::cin >> name;
        list.removeItem(name);
        std::cout << "Item has been removed!" << std::endl;
    }
    if (choice == 3)
        list.displayList();
    
    
    
        
    
    }
    while (choice != 4);
    
    
    
    
    return 0;
}
