#include<stdio.h>

//2.Write a program to print max of three numbers.

int max(int a,int b,int c){
    if(a>b&&a>c) return a;
    if(b>c) return b;
    return c;
}

//using the ternary operators
int max1(int a,int b,int c){
    return (a>b&&a>c)?a:(b>c)?b:c;
}
int main(){
    int a,b,c;
    printf("Enter number 1:");
    scanf("%d",&a);
    printf("Enter number 2:");
    scanf("%d",&b);
    printf("Enter number 3:");
    scanf("%d",&c);

    printf("Maximum of (%d , %d , %d ) is %d" ,a,b,c,max(a,b,c));
}