// Problem statement: Given N, calculate the sum from 1 to N.

#include<stdio.h>
int main (){
    int n, sum;
    printf("Enter the value of N:");
    scanf("%d",&n);

    sum = (n * (n+1))/2;
    printf("The sum value is: %d",sum);
}