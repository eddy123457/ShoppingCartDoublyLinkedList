#include <iostream>
#include <string>
#include "shoppingCart.h"
#include "item.h"
#include "node.h"

using namespace std;

void menu()
{
    shoppingCart cart;
    float price;
    int quantity;
    string it;
    int ans=0;

    while (1)
    {

        cout << " \nWelcome to Shoping Cart " << endl;
        cout << " Please Select From the Following Menu: " << endl;
        cout << "1 . Look Up\n " << endl;
        cout << "2 . Remove by price or by name\n " << endl;
        cout << "3 . Add item\n " << endl;
        cout << "4 . Display Whats in Cart\n " << endl;
        cout << "5 . exit\n " << endl;


        cin >> ans;
        cout << "\n" << endl;
        getchar();

        switch (ans) {
            case 1:
                cout << "Enter Item: " << endl;
                cin >> it;
                getchar();
                cart.LookUp(item(it));
                break;

            case 2:
                cout << "1. For remove by name  2. For remove by price?:\n " << endl;
                cin >> ans;
                
                    cout << "Enter Item: " << endl; 
                    cin >> it;
                    cart.remove(item(it));
                    break;
               
                
               
            case 3:
                cout << "Enter Item: " << endl;
                cin >> it;
                cout << "Enter Price: " << endl;
                cin >> price;
                cout << "Enter quantity\n" << endl;
                cin >> quantity;
                cart.add(item(it, price, quantity));
                break;
            case 4:
                cart.display();
                break;
            case 5:
                exit(0);
                break;
            default:
                cout << "Invalid Entry\n" << endl;
               
               


        }
    

     
    }

}

