#include<stdio.h>

//6.Write an algorithm for selection sort.
int getMinNumIndex(int arr[] ,int start,int n){
    int min = arr[start];
    int index = start;
    for(int i=start+1;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
            index = i;
        }
    }
    return index;
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int minNumIndex = getMinNumIndex(arr,i,n);

        //swap the numbers 
        int t = arr[minNumIndex];
        arr[minNumIndex] = arr[i];
        arr[i] = t;
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
    selectionSort(arr,n);
    printf("Array After Sorting :");
    printArr(arr,n);

}