# 选择排序

**运行目标：** 使用辅助函数生成随机数组和打印数组。

**实现程序：**

SortTestHelper.h

```c++
#ifndef SELECTIONSORTGENERATETESTCASES_SORTTESTHELPER_H
#define SELECTIONSORTGENERATETESTCASES_SORTTESTHELPER_H
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
}

#endif //SELECTIONSORTGENERATETESTCASES_SORTTESTHELPER_H
```

main.cpp

```c++
#include <iostream>
#include "SortTestHelper.h"

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
}

int main() {
    //测试选择排序算法辅助函数
    int n=10000;
    int* arr = SortTestHelper::generateRandomArray(n,0,n);
    selectionsort( arr,n );
    SortTestHelper::printArray( arr,n );
    delete[] arr;
    return 0;
}
```

**运行结果：** 

![output](https://github.com/ma-nual/C-Algorithm-practice/blob/master/3SelectionSortGenerateTestCases/output.png)

![output](D:\CppLearning\3SelectionSortGenerateTestCases\output.png)