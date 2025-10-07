#include <stdio.h>

int main(){
    // a is a leap year 
    int a;

    printf("Enter the value of a :");
    scanf("%d",&a);

    if(a%4 == 0){
        printf("This is a leap year ");
    }
    else{
        printf("This is not a leap year ");
    };
    return 0;

}