#include<stdio.h>
#include<limits.h>
//3.Write an algorithm that inputs 3 integers and output them in non decreasing order.

int greatestNum(int a, int b,int c)
{
    if(a>b && a>c)
        return a;
    
    else if(b>c)
        return b;
    
    else
        return c;
    
}
int makeZero(int *a, int *b, int *c , int num){
    if(*a==num){
        *a = INT_MIN;
    }
    else if(*b==num){
        *b  = INT_MIN;
    }
    else{
        *c  = INT_MIN;
    }
}
void printNonDecreasing(int a,int b, int c)
{
    int f_greatest = greatestNum(a,b,c);
    makeZero(&a,&b,&c,f_greatest);

    int s_greatest = greatestNum(a,b,c);
    makeZero(&a,&b,&c,s_greatest);

    int t_greatest = greatestNum(a,b,c);

    printf("%d %d %d",t_greatest,s_greatest,f_greatest);
}

int main()
{
    printNonDecreasing(1,20,10);
}