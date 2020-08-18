//
// Created by admin on 2020/8/15.
//

#ifndef SHELLSORT_INSERTIONSORT_H
#define SHELLSORT_INSERTIONSORT_H
#include <iostream>

using namespace std;

template<typename T>
void insertionsort(T arr[], int n){
    for(int i=1; i<n; i++){
        //寻找arr[i]合适的插入位置
        T e = arr[i];
        int j; //j保存元素e应该插入的位置
        for(j=i; j>0 && e < arr[j-1]; j--){
            arr[j] = arr[j-1];
        }
        arr[j] = e;
    }
    return;
}

#endif //SHELLSORT_INSERTIONSORT_H
