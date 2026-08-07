#include <stdio.h>
#include <string.h>

int main()
{
    char string1[30] = "FpT poLytechnic HCM";
    char string2[30];
    char string3[30];

    printf("Chuoi 1: %s\n", string1);

    printf("Nhap chuoi 2: ");
    gets(string2)
        // scanf("%s", string2);
        printf("Chuoi moi nhap: %s\n" string2);

    printf("Nhap chuoi 3: ");
    scanf("%s", string3);
    printf("Chuoi moi nhap: %s" string3);

    return 0;
    
}