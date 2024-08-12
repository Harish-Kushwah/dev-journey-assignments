#include<stdio.h>
//1.Write a program to search an element in a given list.

int linearSearch(int arr[],int n,int target){
    for(int i=0;i<n;i++)
        if(arr[i]==target) return 1;
    return 0;
}
int main(){
    int n;
    printf("Enter the size of Array :");
    scanf("%d" , &n);
    int arr[n];
    printf("Enter the array:");
    for(int i=0;i<n;i++){
        scanf("%d" , &arr[i]);
    }

    int target;
    printf("Enter the target :");
    scanf("%d",&target);
    if(linearSearch(arr,n,target)){
        printf("%d found in array" ,target);
    }
    else{
        printf("%d not found in array",target);
    }

}