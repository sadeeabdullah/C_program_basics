// print the sum of First n Natural Numbers. Also, print them in reverse.

#include<stdio.h>

int main(){
    int sum=0,n;
    
    //taking the input of n
    printf("enter the value of n:");
    scanf("%d",&n);

    for (int i = 0; i <=n; i++)
    {
        sum=sum+1;
    }

    printf("%d",sum);
    
}