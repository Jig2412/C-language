#include <stdio.h>
#include <string.h>

struct employee
{
    char name[10];
    int exp;
    float salary;

};

int main() {
    struct employee a1,a2,a3;
    
    strcpy(a1.name,"Suresh");
    a1.exp = 5;
    a1.salary = 450000.0;

    

    strcpy(a2.name,"Ramesh");
    a2.exp = 6;
    a2.salary = 458900.0;


    strcpy(a3.name,"Mahesh");
    a3.exp = 10;
    a3.salary = 650000.0;

    printf("Name: %s, Exp: %d, Salary: %.2f\n", a1.name, a1.exp, a1.salary);
    printf("Name: %s, Exp: %d, Salary: %.2f\n", a2.name, a2.exp, a2.salary);
    printf("Name: %s, Exp: %d, Salary: %.2f\n", a3.name, a3.exp, a3.salary);

    return 0;

}