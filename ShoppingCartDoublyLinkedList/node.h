#pragma once
#include "item.h"
#include "shoppingCart.h"
class node
{
public:
    item it;
    node* prev;
    node* next;
    node(item i);
    
};

