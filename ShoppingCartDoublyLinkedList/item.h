#pragma once
#include <string>
#include <iostream>

class item
{
public:
    std::string name;
    float price;
    int quantity;
    
    
    item(std::string name = "", float price = 0, int quantity = 0) {
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }




};

