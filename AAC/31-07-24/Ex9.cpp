#include<stdio.h>
// 2.	Algorithm for recursive function for sum.

int sum(int arr[] , int n , int i){
    if(i==n){
        return 0;
    }
    return arr[i] + sum(arr,n,++i);
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
    printf("Sum of array : %d",sum(arr,n,0));
}