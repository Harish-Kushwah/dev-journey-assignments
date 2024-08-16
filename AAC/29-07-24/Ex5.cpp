#include<stdio.h>

//4.Write an algorithm to find min of n numbers.
int min(int arr[] ,int n){
    int min = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
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

    printf("minimum number from array : %d",min(arr,n));
}