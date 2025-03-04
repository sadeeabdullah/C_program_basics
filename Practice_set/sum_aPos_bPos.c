#include<stdio.h>
int main(){
    int a,b,sum;
    printf("enter the value of A:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);

    sum = ((b*(b+1))/2) -((a*(a-1))/2);

    printf("The summation of Position a to b is: %d",sum);
}