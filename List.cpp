#include <iostream>
#include "List.h";
using namespace std;

int main() {
    List itemList;
    int val, item, position;

    //masukkan input
    cout << "Enter 3 items for the list:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Item " << i + 1 << ": ";
        cin >> val;
        itemList.addItem(val);
    }

    //display all number and total
    cout << "\nThe list contains " << itemList.numberOfItem() << " items:\n";
    itemList.printItem();
    itemList.total();

    // Insert new number
    cout << "\nEnter new number to insert: ";
    cin >> item;

    //enter the index
    cout << "Enter index (0 to " << itemList.numberOfItem() << "): ";
    cin >> position;

    itemList.addItem(item, position);

    //list baru 
    cout << "\nList after insertion:\n";
    itemList.printItem();

    // Delete using index
    cout << "\nEnter index to delete (0 to " << itemList.numberOfItem() - 1 << "): ";
    cin >> position;

    itemList.deleteItem(position);

    cout << "\nList after deletion:\n";
    itemList.printItem();

    return 0;
}
