#include<stdio.h>

//9.Write an algorithm for multiplication of 2 matrices.
int main(){
    int row1,col1,row2,col2;
    printf("Enter row1,col1:");
    scanf("%d%d",&row1,&col1);

    int A[row1][col1];
    printf("Enter Matrix A : \n");
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter row2,col2:");
    scanf("%d%d",&row2,&col2);

    int B[row2][col2];
    printf("Enter Matrix B : \n");
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            scanf("%d",&B[i][j]);
        }
    }

    int C[row1][col2];
    if(col1==row2){
        printf("Resultant Matrix :\n");
        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                int sum = 0;
                for(int k=0;k<row1;k++){
                    sum+= A[i][k] * B[k][j];
                }
                C[i][j] =sum;
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
        
    }
    else{
        printf("Addition not possible");
    }
}