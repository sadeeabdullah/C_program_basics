// print the sum of First n Natural Numbers. Also, print them in reverse.

#include<stdio.h>

int main(){
    int sum=0,n;
    
    //taking the input of n
    printf("enter the value of n:");
    scanf("%d",&n);

    for (int i = 1, j=n; i <=n && j>=1; i++,j--)
    {
        sum=sum+i;
        printf("%d\n",j);
    }

    printf("%d",sum);

    // for (int i = n; i >=1; i--)
    // {
    //     printf("%d\n",i);
    // }
    printf("regular push");
    return 0;
    
}