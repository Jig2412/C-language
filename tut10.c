#include <stdio.h>

float mass (float m);
float mass (float m){
    return m*9.8;
}

int main(){
     int m = 9.0;
    printf("The value of force is %f", mass(m) );
    return 0;
}