#include<stdio.h>
// 1.	Algorithm for iterative function for sum.

int sum(int arr[] , int n){
    int s = 0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    return s;
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
    printf("Sum of array : %d",sum(arr,n));
}