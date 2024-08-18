#include<stdio.h>
//1.Write an algorithm for finding factorial using recursive method.
int fact(int n){
    if(n==0 || n==1)
        return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));
}