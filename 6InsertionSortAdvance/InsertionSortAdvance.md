# 插入排序

**基本思想：** 每一趟将待排序的数据元素插入到前面已排好序的子序列中，直到所有元素排完为止，使用移动元素实现可以提前结束排序。

**运行目标：** 添加辅助函数生成近乎有序数组和复制数组，实现插入排序。

**演示图像：**

![InsertionSortAdvance](https://github.com/ma-nual/C-Algorithm-practice/blob/master/6InsertionSortAdvance/InsertionSortAdvance.gif)

![InsertionSortAdvance](D:\CppLearning\6InsertionSortAdvance\InsertionSortAdvance.gif)

**实现程序：**

SortTestHelper.h

```c++
#ifndef INSERTIONSORTADVANCE_SORTTESTHELPER_H
#define INSERTIONSORTADVANCE_SORTTESTHELPER_H
#include <iostream>
#include <ctime>
#include <cassert>

using namespace std;

namespace SortTestHelper{

    //生成有n个元素的随机数组，每个元素的随机范围为[rangeL,rangeR]
    int* generateRandomArray(int n, int rangeL, int rangeR){
        assert(rangeL <= rangeR);
        int* arr = new int[n];
        srand(time(NULL));
        for(int i=0; i<n; i++){
            arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
        }
        return arr;
    }
    //打印array数组的所有内容
    template<typename T>
    void printArray(T arr[],int n){
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    int* generateNearlyOrderedArray(int n, int swapTimes){
        int* arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = i;
        }
        srand(time(NULL));
        for(int j=0; j<swapTimes; j++){
            int posx = rand()%n;
            int posy = rand()%n;
            swap(arr[posx],arr[posy]);
        }
        return arr;
    }

    template<typename T>
    bool isSorted(T arr[], int n){
        for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                return false;
            }
        }
        return true;
    }

    template<typename T>
    void testSort(const string& sortName, void (*sort)(T[], int), T arr[], int n){
        clock_t startTime = clock();
        sort(arr,n);
        clock_t endTime = clock();
        assert(isSorted(arr,n));
        cout << sortName << ": " << double (endTime - startTime)/CLOCKS_PER_SEC << " s" << endl;
        return;
    }

    int* copyIntArray(int a[], int n){
        int* arr = new int[n];
        copy(a, a+n, arr);
        return arr;
    }
}

#endif //INSERTIONSORTADVANCE_SORTTESTHELPER_H
```

main.cpp

```c++
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
```

**运行结果：**

![output](https://github.com/ma-nual/C-Algorithm-practice/blob/master/6InsertionSortAdvance/output.png)

![output](D:\CppLearning\6InsertionSortAdvance\output.png)

**结论：** 从测试结果可以发现插入排序可以提前结束排序提高排序效率，且对于有序性越强的数组效果越好。