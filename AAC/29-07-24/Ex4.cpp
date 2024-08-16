#include<stdio.h>

//4.Write an algorithm to find max of n numbers.
int max(int arr[] ,int n){
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
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

    printf("Maximum number from array : %d",max(arr,n));
}