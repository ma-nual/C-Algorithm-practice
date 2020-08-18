# 插入排序

**基本思想：** 每一趟将待排序的数据元素插入到前面已排好序的子序列中，直到所有元素排完为止，使用交换元素实现。

**时间复杂度：** 最差时间复杂度：O(n^2)

​                        最优时间复杂度：O(n)

​                        平均时间复杂度：O(n^2)

**实现程序：**

```c++
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
```

**运行结果：**

![output](https://github.com/ma-nual/C-Algorithm-practice/blob/master/5InsertionSort/output.png)

![output](D:\CppLearning\5InsertionSort\output.png)

**结论：** 按道理插入排序比选择排序快，但是显示结果并不是这样，说明插入排序的写法有改进空间。