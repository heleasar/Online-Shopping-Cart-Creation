#include "ShoppingCart.h"
#include <iostream>

ShoppingCart::ShoppingCart() : customerName("none"), currentDate("January 1, 2016") {}

ShoppingCart::ShoppingCart(string name, string date) : customerName(name), currentDate(date) {}

string ShoppingCart::GetCustomerName() const {
    return customerName;
}

string ShoppingCart::GetDate() const {
    return currentDate;
}

void ShoppingCart::AddItem(const ItemToPurchase& item) {
    cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(string name) {
    bool found = false;
    for (unsigned int i = 0; i < cartItems.size(); i++) {
        if (cartItems[i].GetName() == name) {
            cartItems.erase(cartItems.begin() + i);
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Item not found in cart. Nothing removed." << endl;
    }
}

void ShoppingCart::ModifyItem(const ItemToPurchase& item) {
    bool found = false;
    for (ItemToPurchase& cartItem : cartItems) {
        if (cartItem.GetName() == item.GetName()) {
            found = true;
            if (item.GetDescription() != "none") cartItem.SetDescription(item.GetDescription());
            if (item.GetPrice() != 0) cartItem.SetPrice(item.GetPrice());
            if (item.GetQuantity() != 0) cartItem.SetQuantity(item.GetQuantity());
            break;
        }
    }
    if (!found) {
        cout << "Item not found in cart. Nothing modified." << endl;
    }
}

int ShoppingCart
