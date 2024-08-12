#include<stdio.h>
//1.Write a program to find a factorial of n numbers.
int fact(int n){
    int pr = 1;
    for(int i=n;i>=2;i--){
        pr*=i;
    }
    return pr;
}
int main(){
    int n;
    printf("Enter N :");
    scanf("%d",&n);
    printf("Factorial of %d is : %d",n,fact(n));
    
}