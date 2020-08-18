# 希尔排序

**基本思想：**先将整个待排序的序列分割成若干子序列分别进行插入排序，直到所有元素排完为止。

**时间复杂度：**小于或等于O(n^2)

**演示图像：**

![shellsort](D:\CppLearning\9ShellSort\shellsort.gif)

**实现程序：**

```c++
#include <iostream>
#include "SortTestHelper.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"

using namespace std;

template<typename T>
void shellsort(T arr[], int n){
    int h = 1;
    while(h<n/3){
        h = 3*h+1;
    }
    while(h>=1){
        for(int i=h; i<n; i++){
            T e = arr[i];
            int j;
            for(j=i; j>=h; j-=h){
                if(arr[j-h] > e){
                    arr[j] = arr[j-h];
                } else
                    break;
            }
            arr[j] = e;
        }
        h = h/3;
    }
}

int main() {
    //测试1 一般测试
    int n = 20000;
    int* arr = SortTestHelper::generateRandomArray(n,0,n);
    int* arr2 = SortTestHelper::copyIntArray(arr,n);
    int* arr3 = SortTestHelper::copyIntArray(arr,n);
    int* arr4 = SortTestHelper::copyIntArray(arr,n);
    SortTestHelper::testSort("Selection Sort",selectionsort,arr,n);
    SortTestHelper::testSort("Insertion Sort",insertionsort,arr2,n);
    SortTestHelper::testSort("Bubble Sort",bubblesort,arr3,n);
    SortTestHelper::testSort("Shell Sort",shellsort,arr4,n);

    delete[] arr;
    delete[] arr2;
    delete[] arr3;
    delete[] arr4;

    //测试2 有序性更强的测试
    arr = SortTestHelper::generateRandomArray(n,0,3);
    arr2 = SortTestHelper::copyIntArray(arr,n);
    arr3 = SortTestHelper::copyIntArray(arr,n);
    arr4 = SortTestHelper::copyIntArray(arr,n);
    SortTestHelper::testSort("Selection Sort",selectionsort,arr,n);
    SortTestHelper::testSort("Insertion Sort",insertionsort,arr2,n);
    SortTestHelper::testSort("Bubble Sort",bubblesort,arr3,n);
    SortTestHelper::testSort("Shell Sort",shellsort,arr4,n);

    delete[] arr;
    delete[] arr2;
    delete[] arr3;
    delete[] arr4;

    //测试3 近乎有序数组测试
    int swapTimes = 100;
    arr = SortTestHelper::generateNearlyOrderedArray(n,swapTimes);
    arr2 = SortTestHelper::copyIntArray(arr,n);
    arr3 = SortTestHelper::copyIntArray(arr,n);
    arr4 = SortTestHelper::copyIntArray(arr,n);
    SortTestHelper::testSort("Selection Sort",selectionsort,arr,n);
    SortTestHelper::testSort("Insertion Sort",insertionsort,arr2,n);
    SortTestHelper::testSort("Bubble Sort",bubblesort,arr3,n);
    SortTestHelper::testSort("Shell Sort",shellsort,arr4,n);

    delete[] arr;
    delete[] arr2;
    delete[] arr3;
    delete[] arr4;
    return 0;
}
```

**运行结果：**

![output](D:\CppLearning\9ShellSort\output.png)