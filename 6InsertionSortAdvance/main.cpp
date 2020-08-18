#include <iostream>
#include "SortTestHelper.h"
#include "SelectionSort.h"

using namespace std;

template<typename T>
void insertionsort(T arr[], int n){
    for(int i=1; i<n; i++){
        //寻找arr[i]合适的插入位置
        T e = arr[i];
        int j; //j保存元素e应该插入的位置
        //写法1
//        for(j=i; j>0; j--){
//            if(e < arr[j-1]){
//                arr[j] = arr[j-1];
//            }
//            else{
//                arr[j] = e;
//            }
//        }
        //写法2
        for(j=i; j>0 && e < arr[j-1]; j--){
            arr[j] = arr[j-1];
        }
        arr[j] = e;
    }
    return;
}

int main() {
    //测试1 一般测试
    int n = 20000;
    int* arr = SortTestHelper::generateRandomArray(n,0,n);
    int* arr2 = SortTestHelper::copyIntArray(arr,n);
    SortTestHelper::testSort("Selection Sort",selectionsort,arr,n);
    SortTestHelper::testSort("Insertion Sort",insertionsort,arr2,n);

    delete[] arr;
    delete[] arr2;

    //测试2 有序性更强的测试
    arr = SortTestHelper::generateRandomArray(n,0,3);
    arr2 = SortTestHelper::copyIntArray(arr,n);
    SortTestHelper::testSort("Selection Sort",selectionsort,arr,n);
    SortTestHelper::testSort("Insertion Sort",insertionsort,arr2,n);

    delete[] arr;
    delete[] arr2;

    //测试3 近乎有序数组测试
    int swapTimes = 100;
    arr = SortTestHelper::generateNearlyOrderedArray(n,swapTimes);
    arr2 = SortTestHelper::copyIntArray(arr,n);
    SortTestHelper::testSort("Selection Sort",selectionsort,arr,n);
    SortTestHelper::testSort("Insertion Sort",insertionsort,arr2,n);

    delete[] arr;
    delete[] arr2;
    return 0;
}
