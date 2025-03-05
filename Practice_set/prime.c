#include<stdio.h>

int main(){
    int n,i,divisor = 0;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        if(n % i == 0){
            divisor++;
        }
    }

    // check if it is prime number or not

    if (divisor == 2)
    {
        printf("The number %d is a prime number",n);
    }else{
        printf("The number %d is not a prime number",n);
    }
    
    return 0;
}