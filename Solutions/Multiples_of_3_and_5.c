#include <stdio.h>
#include <unistd.h>

int main() {
    for (int num = 1; num < 1000; num++)
    {
        if (num%3 == 0) {
            printf("Number %d is a multiple of 3 \n", num);
            sleep(1);
        }
        else if (num%5 == 0) {
             printf("Number %d is a multiple of 5 \n", num);
             sleep(1);
        }
        else  printf("Number %d is neither a multiple of 3 nor 5 \n", num);
    }
    
    return 0;
}