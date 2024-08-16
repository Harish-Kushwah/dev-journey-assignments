#include<stdio.h>

//10.Write an algorithm for sorting given list using bubble sort

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
       for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
             int t = arr[j];
             arr[j] = arr[j+1];
             arr[j+1] = t;
        }
       }
    }
}
void printArr(int arr[] ,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Array Before Sorting :");
    printArr(arr,n);
    bubbleSort(arr,n);
    printf("Array After Sorting :");
    printArr(arr,n);

}