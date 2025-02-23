#include<stdio.h>

int main(){
    int i;
    for(i=0;i<100;i++){
        printf("hello  \n");
    }
    for(i=10;i>=1;i--){
        printf("%d\n",i);
    }
    //counter
    int c=0;
    for ( i = 0; i <=10; i++)
    {
        printf("%d\n",i);

        //adding extra counter
        c++;

    }
    
    //print the count
    printf("%d",c);
}