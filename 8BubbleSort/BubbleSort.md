# 冒泡排序

**基本思想：**每一趟从待排序的数据元素中比较两个元素，如果顺序不对则交换，直到所有元素排完为止，并使用标志位和使用标记最后一次交换位置进行优化。

**时间复杂度：**O(n^2)

**演示图像：**

![bubblesort](D:\CppLearning\8BubbleSort\bubblesort.gif)

**实现程序：**

```c++
#include <iostream>
#include "SortTestHelper.h"
#include "SelectionSort.h"
#include "InsertionSort.h"

using namespace std;

template<typename T>
void bubblesort(T arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return;
}

template<typename T>
void bubblesortone(T arr[], int n){
    bool swapped;
    do{
        swapped = false;
        for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                swapped = true;
            }
        }
        //每次最后一个元素已排序可以不再考虑
        //利用标志位可以提前结束排序
        n--;
    }while(swapped);
    return;
}

template<typename T>
void bubblesorttwo(T arr[], int n){
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

int main() {
    //测试1 一般测试
    int n = 20000;
    int* arr = SortTestHelper::generateRandomArray(n,0,n);
    int* arr2 = SortTestHelper::copyIntArray(arr,n);
    int* arr3 = SortTestHelper::copyIntArray(arr,n);
    int* arr4 = SortTestHelper::copyIntArray(arr,n);
    int* arr5 = SortTestHelper::copyIntArray(arr,n);
    SortTestHelper::testSort("Selection Sort",selectionsort,arr,n);
    SortTestHelper::testSort("Insertion Sort",insertionsort,arr2,n);
    SortTestHelper::testSort("Bubble Sort",bubblesort,arr3,n);
    SortTestHelper::testSort("Bubble Sort1",bubblesortone,arr4,n);
    SortTestHelper::testSort("Bubble Sort2",bubblesorttwo,arr5,n);

    delete[] arr;
    delete[] arr2;
    delete[] arr3;
    delete[] arr4;
    delete[] arr5;

    //测试2 有序性更强的测试
    arr = SortTestHelper::generateRandomArray(n,0,3);
    arr2 = SortTestHelper::copyIntArray(arr,n);
    arr3 = SortTestHelper::copyIntArray(arr,n);
    arr4 = SortTestHelper::copyIntArray(arr,n);
    arr5 = SortTestHelper::copyIntArray(arr,n);
    SortTestHelper::testSort("Selection Sort",selectionsort,arr,n);
    SortTestHelper::testSort("Insertion Sort",insertionsort,arr2,n);
    SortTestHelper::testSort("Bubble Sort",bubblesort,arr3,n);
    SortTestHelper::testSort("Bubble Sort1",bubblesortone,arr4,n);
    SortTestHelper::testSort("Bubble Sort2",bubblesorttwo,arr5,n);

    delete[] arr;
    delete[] arr2;
    delete[] arr3;
    delete[] arr4;
    delete[] arr5;

    //测试3 近乎有序数组测试
    int swapTimes = 100;
    arr = SortTestHelper::generateNearlyOrderedArray(n,swapTimes);
    arr2 = SortTestHelper::copyIntArray(arr,n);
    arr3 = SortTestHelper::copyIntArray(arr,n);
    arr4 = SortTestHelper::copyIntArray(arr,n);
    arr5 = SortTestHelper::copyIntArray(arr,n);
    SortTestHelper::testSort("Selection Sort",selectionsort,arr,n);
    SortTestHelper::testSort("Insertion Sort",insertionsort,arr2,n);
    SortTestHelper::testSort("Bubble Sort",bubblesort,arr3,n);
    SortTestHelper::testSort("Bubble Sort1",bubblesortone,arr4,n);
    SortTestHelper::testSort("Bubble Sort2",bubblesorttwo,arr5,n);

    delete[] arr;
    delete[] arr2;
    delete[] arr3;
    delete[] arr4;
    delete[] arr5;
    return 0;
}
```

**运行结果：**

![output](D:\CppLearning\8BubbleSort\output.png)