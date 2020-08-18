//
// Created by admin on 2020/8/15.
//

#ifndef SHELLSORT_BUBBLESORT_H
#define SHELLSORT_BUBBLESORT_H
#include <iostream>

using namespace std;

template<typename T>
void bubblesort(T arr[], int n){
    int newn;
    do{
        newn = 0;
        for(int i=1; i<n; i++){
            if(arr[i-1]>arr[i]){
                swap(arr[i-1],arr[i]);
                //记录最后一次的交换位置，在此之后的元素在下一轮中不再考虑
                newn = i;
            }
        }
        n = newn;
    }while(newn>0);
    return;
}

#endif //SHELLSORT_BUBBLESORT_H
