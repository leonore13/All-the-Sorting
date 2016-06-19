//
//  main.cpp
//  All the Sorts
//
//  Created by Sophia Nguyen on 2016-06-18.
//  Copyright © 2016 Sophia Nguyen. All rights reserved.
//

#include <iostream>
#include "selectionsort.hpp"


int main() {
    std::cout << "Here's an unsorted array!" << std::endl;
    
    int arr[] = {2,7,4,1,5,3};
    for (int i = 0; i < 6; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\nRunning selection sort..." << std::endl;
    selectionSort(arr, 6);
    for (int i = 0; i < 6; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    return 0;
}