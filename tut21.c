#include <stdio.h>
#include <string.h>

struct employee
{
    int exp;
    float salary;
    char name [100];
};

int main() {
    struct employee Jigar = {10, 50000000.00 ,"Jigar"};
    printf(" exp : %d\n salary : %f\n name: %s"  , Jigar.exp ,Jigar.salary, Jigar.name);
    
    return 0;
}