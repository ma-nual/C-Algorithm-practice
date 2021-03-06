//
// Created by admin on 2020/8/14.
//

#ifndef BUBBLESORT_SELECTIONSORT_H
#define BUBBLESORT_SELECTIONSORT_H
#include <iostream>

using namespace std;

template<typename T>
void selectionsort( T arr[], int n ){
    for(int i=0; i<n; i++){
        //寻找[i,n)区间里的最小值
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    return;
}

#endif //BUBBLESORT_SELECTIONSORT_H
