#include <stdio.h>
#include <string.h>
//Encryption and Decryption
int main() {
    char str[] = "He scarifices the ROOOOOOKKKK";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }
    
    printf("%s",str);
    
    return 0;
}