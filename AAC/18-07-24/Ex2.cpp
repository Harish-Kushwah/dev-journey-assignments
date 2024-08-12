#include<stdio.h>
//2.Write a program for Fibonacci series.
void printFibonacci(int n){
    int a = 0;
    int b = 1;
    for(int i=0;i<n;i++){
        printf("%d ",a);
        int c =a + b;
        a = b;
        b = c;
    }
}
int main(){
    int n;
    printf("Enter N :");
    scanf("%d",&n);
    printf("Fibonacci series up to %d th term: ",n);
    printFibonacci(n);
}