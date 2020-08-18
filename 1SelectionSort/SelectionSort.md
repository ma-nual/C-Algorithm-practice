# 选择排序

**基本思想：** 每一趟从待排序的数据元素中选择最小（或最大）的一个元素作为首元素，直到所有元素排完为止。

**时间复杂度：** O(n^2)

**演示图像：**

![selectionsort](D:\CppLearning\1SelectionSort\selectionsort.gif)

![selectionsort](https://github.com/ma-nual/C-Algorithm-practice/blob/master/1SelectionSort/selectionsort.gif)

**实现程序：**

```c++
#include <iostream>

using namespace std;

void selectionsort( int arr[] , int n ){
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
    int a[10] = {10,9,8,7,6,5,4,3,2,1};
    selectionsort( a , 10 );
    for(int i=0; i<10; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
```

**运行结果：**

![output](D:\CppLearning\1SelectionSort\output.png)

![output](https://github.com/ma-nual/C-Algorithm-practice/blob/master/1SelectionSort/output.png)