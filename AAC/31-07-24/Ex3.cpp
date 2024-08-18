#include<stdio.h>
//3.Write an recursive algorithm to return n Fibonacci number.
// 1st 2nd 3rd 4th 5h ... 
//  0   1   1   2  3  ......

int fib(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    return fib(n-1) + fib(n-2);
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    printf("%d th fibonacci number is : %d",n,fib(n));
}