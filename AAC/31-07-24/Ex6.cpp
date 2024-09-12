#include<stdio.h>

//6.Write an algorithm to create a magic square.
int main(){

    int n;
    printf("Enter n (only odd number):");
    scanf("%d",&n);

   int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           arr[i][j] = 0;
        }
    }

   int row = 0;
   int col =n/2;

   for(int i=1;i<=n*n;i++){
        arr[row][col] = i;

        int newRow = (row-1+n)%n;
        int newCol = (col+1)%n;

        if(arr[newRow][newCol]!=0){
            row = (row+1)%n;
        }
        else{
            row = newRow;
            col = newCol;
        }
   }

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}