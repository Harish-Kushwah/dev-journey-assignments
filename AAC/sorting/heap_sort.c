#include<stdio.h>
#include<limits.h>

void maxHeapify(int arr[],int i,int n){
    int parent = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if(left<n && arr[parent]<arr[left]){
        parent = left;
    }

    if(right<n && arr[parent]<arr[right]){
        parent = right;
    }

    if(parent != i){
        int t = arr[parent];
        arr[parent] = arr[i];
        arr[i] = t;
        maxHeapify(arr,parent,n);
    }
}
void buildMaxHeap(int arr[], int n){
    for(int i=n/2;i>=0;i--){
        maxHeapify(arr,i,n);
    }
}
void heapSort(int arr[],int n){
    buildMaxHeap(arr,n);

    for(int i=n-1;i>=0;i--){
        int t = arr[i];
        arr[i] = arr[0];
        arr[0] = t;
        maxHeapify(arr,0,i);
    }
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d " , arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {1,24,23,5,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Array Before Sorting :");
    printArr(arr,n);
    heapSort(arr,n);
    printf("Array After Sorting :");

    printArr(arr,n);

}