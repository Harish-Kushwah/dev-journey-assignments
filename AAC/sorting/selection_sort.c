#include<stdio.h>
#include<limits.h>

int getMinimumNumIndex(int arr[],int start,int n){
    int min = INT_MAX;
    int index = 0; 
    for(int i=start;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
            index = i;
        }
    }
    return index;
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_num_index = getMinimumNumIndex(arr,i,n);
        int temp = arr[i];
        arr[i] = arr[min_num_index];
        arr[min_num_index] = temp; 
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
    selectionSort(arr,n);
    printf("Array After Sorting :");

    printArr(arr,n);

}