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
