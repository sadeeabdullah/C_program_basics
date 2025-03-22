#include <stdio.h>

int main(){
    int i, j,isPrime,num ;

    printf("Enter the value of Number");
    scanf("%d",&num);

    if(num<2){
        printf("the number is not prime");
        return 0;
    }
   
    for ( i = 2; i <num; i++)
    {
        isPrime = 1;  // assume every number is prime

        for (j = 2; j < i; j++)
        {
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        
        if(isPrime)printf("the number is prime %d",i);
    }
   
    
}