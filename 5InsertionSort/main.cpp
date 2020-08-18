#include <iostream>
#include "SortTestHelper.h"
#include "SelectionSort.h"

using namespace std;

template<typename T>
void insertionsort(T arr[], int n){
    for(int i=1; i<n; i++){
        //寻找元素arr[i]合适的插入位置
        //写法1
        for(int j=i; j>0; j--){
            if(arr[j] < arr[j-1]){
                swap(arr[j],arr[j-1]);
            } else
                break;
        }
        //写法2
//        for(int j=i; j>0 && arr[j] < arr[j-1]; j--){
//            swap(arr[j],arr[j-1]);
//        }
    }
    return;
}

int main() {
    int n = 10000;
    int* arr = SortTestHelper::generateRandomArray(n,0,n);
    int* arr2 = SortTestHelper::copyIntArray(arr,n);
    SortTestHelper::testSort("Selection Sort",selectionsort,arr,n);
    SortTestHelper::testSort("Insertion Sort",insertionsort,arr2,n);

    delete[] arr;
    delete[] arr2;
    return 0;
}
