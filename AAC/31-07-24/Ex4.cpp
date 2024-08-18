#include<stdio.h>

void TOH(char src[],char helper[],char dest[],int n){
    if(n==1){
        printf("Transfer disk %d from %s -> %s\n", n ,src ,dest);
        return;
    }
    TOH(src,dest,helper,n-1);
    printf("Transfer disk %d from %s -> %s\n", n ,src ,dest);
    TOH(helper,src,dest,n-1);
}

int main(){
    int n = 4;
    TOH("SOURCE","HELPER","DESTINATION",n);
}