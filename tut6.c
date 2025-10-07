#include <stdio.h>

int main(){

    int sum = 0;
    for (int i = 1; 8*i <= 80; i++)
    {
        sum += 8*i;
    }
    printf("The sum of multiple of 8 is %d",sum);
    return 0;
}