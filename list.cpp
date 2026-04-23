#include <iostream> 
#include "List.h" 
using namespace std;

List::List() {
    size = 0; // Initialize size to 0  
}

List::~List() {}

int List::numberOfItem() {
    return size; // Current number of elements 
}

void List::addItem(int item) {
    if (size == maxSize) {
        cout << "List is full\n";
        return;
    }
    array[size] = item; // Adds item to the end 
    size++; // Increment size after adding  
}

void List::printItem() {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void List::total() {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    cout << "Total = " << sum << endl;
}

//  Add item at specific position 
void List::addItem(int item, int position) {
    if (size == maxSize) {
        cout << "***List is full***\n";
        return;
    }

    if (position < 0 || position > size) {
        cout << "***Invalid Position***\n";
        return;
    }

    // Shift elements to the right
    for (int i = size - 1; i >= position; i--) {
        array[i + 1] = array[i];
    }

    array[position] = item;
    size++;
}

// Delete item at specific position 
void List::deleteItem(int position) {
    if (size == 0) {
        cout << "***Empty List***\n";
        return;
    }

    if (position < 0 || position >= size) {
        cout << "***Invalid Position***\n";
        return;
    }

    // Shift elements to the left
    for (int i = position + 1; i < size; i++) {
        array[i - 1] = array[i];
    }

    size--;
}
