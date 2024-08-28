#include<stdio.h>

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
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
    bubbleSort(arr,n);
    printf("Array After Sorting :");

    printArr(arr,n);

}