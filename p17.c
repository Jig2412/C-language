#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("Enter the value of c : ");
    scanf("%d",&c);
    // to check nature of roots 
    // b*b - 4*a*c 
    if (b*b - 4*a*c == 0)
    {
        printf("Real and equal");
    }
    else{

        if (b*b - 4*a*c > 0)
        {
            printf("Real and unequal");
        }
        else{
            printf("Imaginery Roots");
        }
}
    
    

    return 0;
}