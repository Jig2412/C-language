#include <stdio.h>

int main(){
    int a = 20;
    int *b = &a;
    printf("The address of *b is %u\n",&a);
    printf("The address of a is %d\n",*b);
    return 0;
}