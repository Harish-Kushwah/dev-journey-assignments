#include<stdio.h>
//1.Write an algorithm to compute x^n using recursive method.

//Method-1 : Time complexity is O(n)
int pow(int x,int n){
    if(n==0) return 1;
    if(n==1) return x;
    return x*pow(x,--n);
}
//Method-2 : Time complexity is O(log(n))
int pow1(int x,int n){
    if(n==0) return 1;
    if(n==1) return x;

    int ans = pow(x,n/2);
    if(n%2==0) 
      return ans*ans;
    else 
      return x*ans*ans;
}

int main(){
    int x,n;
    printf("Enter x,n :");
    scanf("%d%d",&x,&n);
    printf("%d^%d is:%d",x,n,pow1(x,n));
}