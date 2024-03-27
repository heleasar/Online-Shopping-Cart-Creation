#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
private:
    string itemName;
    int itemPrice;
    int itemQuantity;
    string itemDescription;

public:
    ItemToPurchase();
    void SetName(string name);
    string GetName() const;

    void SetPrice(int price);
    int GetPrice() const;

    void SetQuantity(int quantity);
    int GetQuantity() const;

    void SetDescription(string description);
    string GetDescription() const;

    void PrintItemCost() const;
    void PrintItemDescription() const;
};

#endif
