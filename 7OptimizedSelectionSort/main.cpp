#include <iostream>
#include "SortTestHelper.h"
#include "SelectionSort.h"
#include "InsertionSort.h"

using namespace std;

//在每一轮中，可以同时找到当前未处理的最大值和最小值
template<typename T>
void optselectionsort(T arr[], int n){
    int left = 0;
    int right = n-1;
    while(left < right){
        int minIndex = left;
        int maxIndex = right;
        //在每一轮查找中，要保证arr[minIndex]<=arr[maxIndex]
        if(arr[minIndex]>arr[maxIndex]){
            swap(arr[minIndex],arr[maxIndex]);
        }
        for(int i=left+1; i<right; i++){
            if(arr[i]<arr[minIndex]){
                minIndex = i;
            }
            else if(arr[i]>arr[maxIndex]){
                maxIndex = i;
            }
        }
        swap(arr[left],arr[minIndex]);
        swap(arr[right],arr[maxIndex]);
        left++;
        right--;
    }
}

int main() {
    //测试1 一般测试
    int n = 20000;
    int* arr = SortTestHelper::generateRandomArray(n,0,n);
    int* arr2 = SortTestHelper::copyIntArray(arr,n);
    int* arr3 = SortTestHelper::copyIntArray(arr,n);
    SortTestHelper::testSort("Selection Sort",selectionsort,arr,n);
    SortTestHelper::testSort("Insertion Sort",insertionsort,arr2,n);
    SortTestHelper::testSort("Selection Sort2",optselectionsort,arr3,n);

    delete[] arr;
    delete[] arr2;
    delete[] arr3;

    //测试2 有序性更强的测试
    arr = SortTestHelper::generateRandomArray(n,0,3);
    arr2 = SortTestHelper::copyIntArray(arr,n);
    arr3 = SortTestHelper::copyIntArray(arr,n);
    SortTestHelper::testSort("Selection Sort",selectionsort,arr,n);
    SortTestHelper::testSort("Insertion Sort",insertionsort,arr2,n);
    SortTestHelper::testSort("Selection Sort2",optselectionsort,arr3,n);

    delete[] arr;
    delete[] arr2;
    delete[] arr3;

    //测试3 近乎有序数组测试
    int swapTimes = 100;
    arr = SortTestHelper::generateNearlyOrderedArray(n,swapTimes);
    arr2 = SortTestHelper::copyIntArray(arr,n);
    arr3 = SortTestHelper::copyIntArray(arr,n);
    SortTestHelper::testSort("Selection Sort",selectionsort,arr,n);
    SortTestHelper::testSort("Insertion Sort",insertionsort,arr2,n);
    SortTestHelper::testSort("Selection Sort2",optselectionsort,arr3,n);

    delete[] arr;
    delete[] arr2;
    delete[] arr3;
    return 0;
}
