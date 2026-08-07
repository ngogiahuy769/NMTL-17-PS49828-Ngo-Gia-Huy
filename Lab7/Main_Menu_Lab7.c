#include <stdio.h>
#include <string.h>
#include <ctype.h>

void demNguyenAmPhuAm()
{
    char s[100];
    int demNA = 0;
    int demPA = 0;

    printf("Hay nhap vao 1 chuoi ky tu: ");
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++){
        char c = tolower(s[i]);
        if (isalpha(c)){
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                demNA++;
            }else{
                demPA++;
            }
        }
    }

    printf("So luong nguyen am: %d\n", demNA);
    printf("So luong phu am   : %d\n", demPA);
}

int main()
{
    int chon;

    do
    {
        printf("+---------------------------------------------------+\n");
        printf("|             MENU CHUONG TRINH LAB 7               |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Dem nguyen am va Phu am trong chuoi            |\n");
        printf("| 2. Dang nhap he thong (User & Password)           |\n");
        printf("| 3. Sap xep danh sach Chuoi theo thu tu Alphabet   |\n");
        printf("| 4. Chuyen đoi so Thap phan sang Nhi phan (Chuoi)  |\n");
        printf("| 5. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-5): ");
        scanf("%d", &chon);
        getchar();
        switch (chon)
        {
        case 1:
         demNguyenAmPhuAm();
         break;

        case 5:
            printf("Tam biet");
            break;

        default:
            printf("Nhap sai chuc nang hay chon chuc nang tu 1 den 5\n");
            break;
        }

    } while (chon != 5);

    return 0;
}