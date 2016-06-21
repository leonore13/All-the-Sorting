//
//  stack.cpp
//  All the Data Structures
//
//  Created by Sophia Nguyen on 2016-06-20.
//  Copyright © 2016 Sophia Nguyen. All rights reserved.
//

#include <stdio.h>
#ifdef datastructtypes_h

// An implementation of a stack data structure, using dynamic arrays

// Default constructor
Stack::Stack() {
    arr_size = 2;
    arr = new int[arr_size];
    top = 0;
}

// Parametized constructor
Stack::Stack(int size) {
    arr_size = size;
    arr = new int[arr_size];
    top = 0;
}

// Destructor
Stack::~Stack() {
    delete[] arr;  // Releases memory associated with dynamic array
}

// Inserts an int on top of the stack
// PARAM: x is the value to be inserted
void Stack::Push(int x) {
    // If the stack is full, we must create a larger array and copy over old elements
    if (top == arr_size) {           // Remember, top increments with each push, so eventually it will equal arr_size
        int* old_arr = arr;          // Declare a pointer to save the contents of the old array to be copied
        arr_size = 2 * arr_size;     // How big do you want to make the new array? How about 2 times the size?
        arr = new int[arr_size];     // Create a new array with the doubled size
        
        for (int i = 0; i < top; i++) {
            arr[i] = old_arr[i];        // Assign each index in the new array with the values in the old array
        }
        delete[] old_arr;           // Delete the old array
    }
    // Finally insert the new item!
    arr[top] = x;
    top += 1;
}

// Removes and returns an item at the top of the stack
// Return -1 if the stack is empty
int Stack::Pop()
{
    if (top == 0) {
        return -1;        // If the stack is empty, return -1
    }
    top -= 1;             // Otherwise, return whatever top is, and reassign the index of the new top by decrementing
    return arr[top];
}

// Returns the item at the top of the stack
// Returns -1 if stack is empty
int Stack::Peek() const {
    if (top == 0) return -1;    // If the stack is empty, return -1
    else return arr[top-1];     // Else, return the itam on top
    
}

// Returns top index of the stack
int* Stack::get_Arr() {
    return arr;
}

#endif

