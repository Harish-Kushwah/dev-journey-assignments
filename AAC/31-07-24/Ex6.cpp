#include<stdio.h>
#include<time.h>
#include<stdlib.h>

const int n = 3;

//6.Write an algorithm to create a magic square.

int getUniqueRandomNumber(int arr[],int n){
    int index = rand()%n;
    while(arr[index]==0){
       index = rand()%4;
    }
    int num  = arr[index];
    arr[index] = 0;
    return num;
}
int printSquare(int square[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",square[i][j]);
        }
        printf("\n");
    }
}
int isMagicSquare(int square[n][n]){
    int row1 = square[0][0] + square[0][1] + square[0][2];
    int row2 = square[1][0] + square[1][1] + square[1][2];
    int row3 = square[2][0] + square[2][1] + square[2][2];

    int col1 = square[0][0] + square[1][0] + square[2][0];
    int col2 = square[0][1] + square[1][1] + square[2][1];
    int col3 = square[0][2] + square[1][2] + square[2][2];

    int dig1 = square[0][0] + square[1][1] + square[2][2];
    int dig2 = square[2][0] + square[1][1] + square[0][2];


    return (row1==row2 && row2==row3 && row3==15) &&  
           (col1==col2 &&col2==col3 && col3==15) &&
           (dig1==dig2 && dig2==15);
}
void printMagicSquare(){
    //Corner Number's(Even no.):2,4,6,8 
    //other except corner and middle : 1,3,7,9
    //center Number : 5
    int square[n][n];
    do
    {
        int even[] = {2,4,6,8};
        int odd[] = {1,3,7,9};
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((i==0 &&(j==0 || j==n-1)) || (i==n-1 &&(j==0 || j==n-1)) ){
                    //for even numbers
                    square[i][j] = getUniqueRandomNumber(even,4);
                }
                else if(i==n/2 && j==n/2){ 
                    square[i][j] = 5; 
                }
                else{
                    //for odd numbers
                    square[i][j] = getUniqueRandomNumber(odd,4);  
                }
            }
        }
    }while(!isMagicSquare(square));

    printSquare(square);
}
int main(){
    srand(time(NULL)); 
    for(int i=0;i<10;i++){
        printf("Magic Square : %d\n",(i+1));
        printMagicSquare();
        printf("\n");
    }
}