#include<stdio.h>
//2.Write an algorithm to print odd numbers between 11 to 30 in reverse order.
int main(){
    printf("Odd number between 100 to 30 : ");
    for(int i=11;i<30;i++){
        if(i%2!=0){
            printf("%d ", i);
        }
    }
}