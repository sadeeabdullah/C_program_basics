#include<stdio.h>

int main(){
    int n;
    printf("enter the value of N:");
    scanf("%d",&n);

    for (int i = 1; i<=10 ; i++)
    {
        printf("%d %s %d %s %d \n", i, "*", n, "=", i * n);

    }
    
}