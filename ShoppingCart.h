#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include "ItemToPurchase.h"
#include <vector>
#include <string>
using namespace std;

class ShoppingCart {
private:
    string customerName;
    string currentDate;
    vector<ItemToPurchase> cartItems;

public:
    ShoppingCart();
    ShoppingCart(string name, string date);

    string GetCustomerName() const;
    string GetDate() const;

    void AddItem(const ItemToPurchase& item);
    void RemoveItem(string name);
    void ModifyItem(const ItemToPurchase& item);

    int GetNumItemsInCart() const;
    int GetCostOfCart() const;

    void PrintTotal() const;
    void PrintDescriptions() const;
};

#endif
