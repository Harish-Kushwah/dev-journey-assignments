#include<stdio.h>

//5.Write an algorithm for sequencial search.

int isFound(int arr[] , int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target)
            return 1;
    }
    return 0;
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

    int target;
    printf("Enter target :");
    scanf("%d",&target);

    if(isFound(arr,n,target)){
        printf("%d found in array " , target);
    }
    else{
        printf("%d not found in array",target);
    }
}