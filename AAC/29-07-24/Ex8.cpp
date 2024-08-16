#include<stdio.h>

//8.Write an algorithm addition of 2 matrices.
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

    int C[row1][col1];
    if(row1==row2 && col1==col2){
        printf("Resultant Matrix :\n");
        for(int i=0;i<row1;i++){
            for(int j=0;j<col1;j++){
                C[i][j] = A[i][j] + B[i][j];

                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
        
    }
    else{
        printf("Addition not possible");
    }
}