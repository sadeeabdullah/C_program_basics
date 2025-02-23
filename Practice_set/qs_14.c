//print the numbers from 0 to n, if n is given by the user.

#include<stdio.h>

int main(){

    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    
    for ( int i = 0; i <=n; i++)
    {
        printf("%d",i);
    }
    
    return 0;
}