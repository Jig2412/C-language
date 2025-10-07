#include <stdio.h>

int main() {
    float a;
    printf("Enter the value of a",a);
    scanf("%f",&a);
    float b;
    printf("Enter the value of b", b);
    scanf("%f",&b);
    float c;
    printf("Enter the value of c",c);
    scanf("%f",&c);
    float d = a*b+c*a+b*c+b/c;
    printf("The value of d is %f",d);
    scanf("%f",&d);
    return 0;

}