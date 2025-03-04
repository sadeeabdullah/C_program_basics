#include <stdio.h>
int main() {
    int n = 3, count = 0, num = 2, sum = 0;
    while (count < n) {
        int is = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is = 0;
                break;
            }
        }
        if(is){
            sum += num;
            count++;
        }


        num++;
    }
    printf("Sum: %d\n",sum);
    return 0;
}
