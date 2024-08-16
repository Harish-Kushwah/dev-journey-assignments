#include<stdio.h>
//1.Write an algorithm to print odd numbers between 1 to 20 using repeat until loop.
int main(){
    int i = 1 ;
    do{
        if(i%2!=0)
            printf("%d " , i);
        i++;
    }while (i<20);

}