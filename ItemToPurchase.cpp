#include "ItemToPurchase.h"
#include <iostream>

ItemToPurchase::ItemToPurchase() : itemName("none"), itemPrice(0), itemQuantity(0), itemDescription("none") {}

void ItemToPurchase::SetName(string name) {
    itemName = name;
}

string ItemToPurchase::GetName() const {
    return itemName;
}

void ItemToPurchase::SetPrice(int price) {
    itemPrice = price;
}

int ItemToPurchase::GetPrice() const {
    return itemPrice;
}

void ItemToPurchase::SetQuantity(int quantity) {
    itemQuantity = quantity;
}

int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}

void ItemToPurchase::SetDescription(string description) {
    itemDescription = description;
}

string ItemToPurchase::GetDescription() const {
    return itemDescription;
}

void ItemToPurchase::PrintItemCost() const {
    cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << (itemPrice * itemQuantity) << endl;
}

void ItemToPurchase::PrintItemDescription() const {
    cout << itemName << ": " << itemDescription << endl;
}
