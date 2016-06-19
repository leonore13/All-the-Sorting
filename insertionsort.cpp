//
//  insertionsort.cpp
//  All the Sorts
//
//  Created by Sophia Nguyen on 2016-06-19.
//  Copyright © 2016 Sophia Nguyen. All rights reserved.
//

#ifdef sorttypes_h

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size-1; i++) {         // Starting from first index of the "unsorted" part of the array (begins at second index of array)
        int value = arr[i];                    // Declare an int to store the value that we will compare
        int hole = i;                          // Declare an index where a hole will be, should value shift (begins at same place as value)
        
        // While the index of the hole is greater than 0 (i.e. there's a value before it) and the value behind the hole is greater than the value...
        while (hole > 0 && arr[hole-1] > value) {
            arr[hole] = arr[hole-1];        // "Fill" the hole with the greater value
            hole = hole-1;                  // Move the index of the imaginary hole to value's old place (hole-1)
        }
        arr[hole] = value;                  // "Fill" the new hole with the value it had just replaced
    }
}

#endif
