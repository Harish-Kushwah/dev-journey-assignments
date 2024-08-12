#include<stdio.h>

//4.Given n is a positive integer. Determine whether is sum of all of its divisors.

int isSumOfDivisor(int n){
    int sum = 1;
    for(int i=2;i<=n;i++){
        if(n%i==0)
            sum+=i;
    }
    if(sum == n) return 1;

    return 0;
}
int main(){
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    if(isSumOfDivisor(n)){
        printf("%d's sum is equals to its divisor",n);
    }
    else{
        printf("%d's sum is not equals to its divisor",n);

    }

}