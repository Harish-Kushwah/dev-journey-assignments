#include<stdio.h>

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp =arr[i];
        int j = i-1;
        while(j>=0 && temp<arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d " , arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {1,24,23,5,23,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Array Before Sorting :");
    printArr(arr,n);
    insertionSort(arr,n);
    printf("Array After Sorting :");
    printArr(arr,n);

}