//
//  selectionsort.cpp
//  All the Sorts
//
//  Created by Sophia Nguyen on 2016-06-18.
//  Copyright © 2016 Sophia Nguyen. All rights reserved.
//

#ifdef sorttypes_h

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size-1; i++) {   // Go through all values in array
        
        int min = i;                     // Set "minimum" value at index (starting at 0)
        
        //This for-loop is going through the whole array and finding the minimum value
        for (int j = i+1; j < size; j++) {   // Starting from the index after "min" (starting at 0+1 =1)
            if (arr[j] < arr[min]) {         // Check if what's at j is less than what's at min..
                min = j;                     // If it is, reassign min as j
            }
        }                                    // Increment j and check if it's the right minimum
        
        // Once the minimum value is found...
        int temp = arr[i];                   // Declare a new value at the beginning of the array you just went through
        arr[i] = arr[min];                   // Reassign its value with the newly found min
        arr[min] = temp;                     // Also reassign the value at "min" (together, these two lines perform a swap)
    }
}

#endif