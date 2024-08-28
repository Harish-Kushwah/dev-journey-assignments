#include<stdio.h>
#include<limits.h>
int getMaximumNum(int arr[],int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
void countingSort(int arr[],int n){
   int max_size = getMaximumNum(arr,n) + 1;
   int hash[max_size];
   for(int i=0;i<max_size;i++){
        hash[i] = 0;
   }
   //count the frequency of each element from the array
   for(int i=0;i<n;i++){
        hash[arr[i]]++;
   }

   //prefix sum
   for(int i=1;i<max_size;i++){
        hash[i+1] +=hash[i-1];
   }

   //use the external array for storing the sorted array
   int helper[n];
   for(int i=n-1;i>=0;i--){
        helper[hash[arr[i]]] = arr[i];
        hash[arr[i]]--;
   }

   for(int i=0;i<n;i++){
        arr[i] = helper[i];
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
    countingSort(arr,n);
    printf("Array After Sorting :");

    printArr(arr,n);

}