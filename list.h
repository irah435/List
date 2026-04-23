#ifndef LIST_H
#define LIST_H

const int maxSize = 100;

class List {
public:
    List();   // Constructor
    ~List();  // Destructor

    int numberOfItem(); // Return current size

    void addItem(int item); // Add item to end
    void addItem(int item, int position); // Add item at specific position

    void deleteItem(int position); // Delete item at position

    void printItem(); // Display all items
    void total();     // Display total

private:
    int array[maxSize]; // the array
    int size;           // current number of elements
};

#endif
