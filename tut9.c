#include <stdio.h>

float Fahrenheit(float c);
float Fahrenheit(float c){
    return (1.8)*c + 32.0;
} 

int main(){
    int c = 15.0;
printf("The value of celsius in Fahrenheit is %f",Fahrenheit(c));
   return 0;
}

