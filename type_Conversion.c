#include<stdio.h>
int main(){
    int a =(int) 1.9999;
    float b = 3.44;
    printf("%d %d",a,b);  // in compiler of C it doesnot implicitly convert float to integer
    return 0;
}