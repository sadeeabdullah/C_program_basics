#include<stdio.h>

int main(){
    int i = 1;

    //increment operator
    // ++i(pre increment operator),
    //  i++(post increment)
    //decrement operator
    // --i(pre decrement operator),
    //  i--(post decrement)

    printf("%d \n",i++);  //use, then increase
    printf("%d \n",i);  

    printf("%d \n",++i); // increase, then use
    printf("%d \n",i);  


    return 0;
}