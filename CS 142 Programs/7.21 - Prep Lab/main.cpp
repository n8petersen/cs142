#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "ItemToPurchase.h"
using namespace std;

const int NUM_ITEMS = 2;

int main() {
    vector<ItemToPurchase> itemList;
    ItemToPurchase currItem;
    ItemToPurchase resultItem;
    string currName;

    double currPrice;
    int currQuantity;
    double totalCost = 0;
    unsigned int i;

    for (i = 0; i < NUM_ITEMS; i++) {
        cout << "Item " << (i + 1) << endl;

        cout << "Enter the item name: ";
        getline(cin, currName);
        cout << endl;
        currItem.SetName(currName);

        cout << "Enter the item price: ";
        cin >>  currPrice;
        cout << endl;
        currItem.SetPrice(currPrice);

        cout << "Enter the item quantity: ";
        cin >>  currQuantity;
        cout << endl;
        currItem.SetQuantity(currQuantity);

        cout << endl;

        itemList.push_back(currItem);
        cin.get();
    }

    cout << "TOTAL COST" << endl;

    for (i = 0; i < NUM_ITEMS; i++) {
        resultItem = itemList.at(i);
        cout << resultItem.GetName() << " ";
        cout << resultItem.GetQuantity() << " ";
        cout << " @ $" << fixed << setprecision(2);
        cout << resultItem.GetPrice() << " ";
        cout << " = $";
        cout << resultItem.GetQuantity() * resultItem.GetPrice();
        totalCost = totalCost + resultItem.GetQuantity() * resultItem.GetPrice();
        cout << endl;
    }

    cout << endl << fixed << setprecision(2) << "Total: $" << totalCost;

    return 0;
}
