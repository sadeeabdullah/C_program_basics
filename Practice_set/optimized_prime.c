// check if the given number is prime or not

#include<stdio.h>
#include<math.h>

int main(){
    int n,i;
    scanf("%d",&n);

    if (n<=1)
    {
        printf("the given number is not prime");
        return 0;
    }

    //let assume that the number is prime

    int isPrime = 1;

    for ( i = 2; i <= sqrt(n) ; i++) // we used sqrt because the as an example if we get the sqrt of 36 we get 6 and by using it we can also get the divisor like 12 18 and 36. By using sqrt we can optimize the code so that it can less execution time
    {
        if (n%i == 0)
        {
            isPrime = 0;
            break; // we have deducted the 1 and the value of the number by using the sqrt.
        }
    }

    if(isPrime){
        printf("The number %d is a prime number \n",n);
    }
    else{
        printf("The number %d is not a prime number \n",n);
    }
    
    
}