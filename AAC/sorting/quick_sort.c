#include<stdio.h>

void swap(int *a , int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int k = high;
    for(int i=high;i>low;i--){
        if(arr[i]>pivot){
            swap(&arr[i],&arr[k]);
            k--;
        }
    }
    swap(&arr[low],&arr[k]);
    return k;
}
void quickSort(int arr[],int low,int high){
    if(low<high){
        int pivotIndex = partition(arr,low,high);
        quickSort(arr,0,pivotIndex-1);
        quickSort(arr,pivotIndex+1 , high);
    }
}
void printArr(int arr[] , int n){
    for(int i=0;i<n;i++){
        printf("%d " , arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {1,4,2,3,4,21,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Array before sorting :");
    printArr(arr,n);
    quickSort(arr,0,n-1);
    printf("Array after sorting :");
    printArr(arr,n);

}