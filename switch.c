#include<stdio.h>

int main(){
    int day;
    printf("Enter the day:");
    scanf("%d",&day);

    switch(day){
        case 1: printf("The day is saturday");
        break;
        case 2: printf("The day is sunday");
        break;
        case 3: printf("The day is monday");
        break;
        case 4: printf("The day is tuesday");
        break;
        case 5: printf("The day is wednesday");
        break;
        case 6: printf("The day is thursday");
        break;
        default: printf("the day is friday");
    }

    return 0;
}