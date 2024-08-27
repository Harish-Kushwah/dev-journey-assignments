#include<stdio.h>

#define n 3
int isFill(int arr[][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0)
                return 0;
        }
    }
    return 1;
}
void makeSquare(int arr[][n]){
    int mid = n/2;
    int num = 1;
    int row = 0;
    int col = mid;
    while(!isFill(arr)){
        arr[row][col] = num;
        //get top
        col--;
        if(col<0){
            col = n-1;
            row--;
    

        if(row<0){
            row = n-1;
              
        }

    }
}
}
int printSquare(int square[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",square[i][j]);
        }
        printf("\n");
    }
        printf("\n");

}
int makeZero(int square[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            square[i][j] = 0;
        }
    }
}
void square(int arr[][n],int i,int j,int num){
    while(!isFill(arr) ){
     

    if(i<0){
        i = n-1;
    }
    if(j<0){
        j = n-1;
    }
    if(i>n){
        i = 0;
    }
    if(j>n){
        j = 0;
    }
    printSquare(arr);


   
    if(arr[i][j]==0){
        //go to top left
        arr[i][j]=num++;

        j--;
        i--;
    }
    else{
        // back to position
        j++;
        i++;
        i++;
        arr[i][j]=num++;
    }
 
    // square(arr,i,j,++num);

    }

}
int main(){
    int arr[n][n];
    makeZero(arr);
    square(arr,0,n/2,1);
    printSquare(arr);

}