#include <stdio.h>
#include <math.h>

int main(){
    int base,height ;
    float area, hypotenuse;
    scanf("%d %d",&base ,&height);

    area = 0.5*base*height;
    hypotenuse = sqrt(pow(base,2)+pow(height,2));

    printf("the area and hypotenuse is sequentially  %.2f %.2f", area ,hypotenuse);

    return 0;
}