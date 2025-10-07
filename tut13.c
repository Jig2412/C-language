#include <stdio.h>

int main(){
    int multiple [10] = {5,10,15,20,25,30,35,40,45,50};
    for (int i = 0; i < 10 ; i++)
    {
        printf("%d\n", multiple[i]);
        scanf("%d", &multiple[i]);
    }
    
    return 0;
}