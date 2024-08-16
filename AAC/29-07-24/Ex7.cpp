#include<stdio.h>
//7.Write an algorithm to compute x^n.
int pow(int x,int n){
    int pr = x;
    for(int i = 1;i<n;i++){
        pr*=x;
    }
    return pr;
}
int main(){
    int x,n;
    printf("Enter x and n :");
    scanf("%d%d",&x,&n);
    printf("%d ^ %d = %d",x,n,pow(x,n));
}