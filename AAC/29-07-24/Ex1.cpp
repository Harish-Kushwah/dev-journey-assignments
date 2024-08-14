#include<stdio.h>
//1.Write an algorithm to print table of 2.
int main(){
    int n = 2;
    for(int i=1;i<=10;i++){
        printf("%d x %d  = %d \n",n,i,(n*i));
    }
}