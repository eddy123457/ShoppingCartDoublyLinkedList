#include "shoppingCart.h"
#include "item.h"
#include "node.h"
#include <iostream>
#include <string>


using namespace std;
// NULL | data | NULL
// Head           tail
 //prev | data | next


// adds to the back of the list
    void shoppingCart::add(item item) {
        node* nod = new node(item);
        if (shoppingCart::tail == nullptr) {
            head = nod;
            tail = nod;
        }
        else {
            nod->prev = tail;
            tail->next = nod;
            tail = nod;
        }
        size++;
    }
    //starts search at the back of the list

    void shoppingCart::remove(item item) {
        node* temp = head;
        while (temp != nullptr) {
            if (temp->node::it.name == item.name || temp->node::it.price == item.price) {
                if (temp == head) {
                    head = temp->next;
                    if (head != nullptr) {
                        head->prev = nullptr;
                    }
                    else {
                        tail = nullptr;
                    }
                }
                else if (temp == tail) {
                    tail = temp->prev;
                    tail->next = nullptr;
                }
                else {
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;
                }
                delete temp;
                size--;
                break;
            }
            temp = temp->next;
        }
    }
    // from the back of the list
    void shoppingCart::LookUp(item item) {
        node* temp = head;
        while (temp != nullptr) {
            if (temp->it.name == item.name || temp->it.price == item.price) {
                if (temp == head) {
                    head = temp->next;
                    if (head != nullptr) {
                        head->prev = nullptr;
                    }
                    else {
                        tail = nullptr;
                    }
                }
                else if (temp == tail) {
                    tail = temp->prev;
                    tail->next = nullptr;
                }
                else {
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;
                }
                cout << "\nFrom Look Up" << temp->it.name << " - " << temp->it.quantity << " x " << temp->it.price << " = " << temp->it.quantity * temp->it.price << "\n" << endl;
                break;
            }
            else { cout << "\nEntry Not Found!" << endl; }
            temp = temp->next;
        }
       
    }
    void shoppingCart::display() {
        node* temp = head;
        while (temp != nullptr) {
            cout << temp->it.name << " - " << temp->it.quantity << " x " << temp->it.price << " = " << temp->it.quantity * temp->it.price << endl;
            temp = temp->next;
        }
        if (getTotal() == 0) { cout << "Cart is Empty!\n" << endl; }
        else { cout << "Currently in cart: " << getTotal() << endl; cout << "\n" << endl; }
    }

    float shoppingCart::getTotal() {
        float total = 0;
        node* temp = head;
        while (temp != nullptr) {
            total += temp->it.quantity * temp->it.price;
            temp = temp->next;
        }
        return total;
    }


    /*functions not used but will be implemented at a later date
    
    
    void pop_front() {
        if (head == nullptr) {
            return;
        }
        else if (head == tail) {
            delete head;
            head = nullptr;
            tail = nullptr;
        }
        else {
            n* temp = head;
            head = head->next;
            head->prev = nullptr;
            delete temp;
        }
        size--;
    }
    

    void push_front(int val) {
        node* n = new node(val);
        if (head == nullptr) {
            head = n;
            tail = n;
        }
        else {
            n->next = head;
            head->prev = n;
            head = n;
        }
        size++;
    }
    
    int getSize()
    {
        return size;
    }
    
    
    
    
    
    
    
    */