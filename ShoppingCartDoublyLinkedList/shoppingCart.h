#pragma once
#include "item.h"
#include "node.h"

class shoppingCart
{
private:
    node* head;
    node* tail;
    int size;
public:
    shoppingCart() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    void add(item item);
    void remove(item item);
    void LookUp(item item);
    void display();
    float getTotal();
};

