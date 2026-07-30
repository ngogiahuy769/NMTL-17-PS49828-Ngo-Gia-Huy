#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void menu();
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
int solonNhat( int a, int b, int c);

int main()
{
    int chon;

    do
    {
        menu();
        printf(">> Xin moi chon chuc nang (1-5): ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
            chucNang1();
            break;

        case 2:
            chucNang2();
            break;

        case 3:
            chucNang3();
            break;

        case 4:
            chucNang4();
            break;

        case 5:
            printf("Tam biet!\n");
            break;

        default:
            printf("Nhap sai chuc nang! Vui long chon tu 1 den 5.\n");
            break;
        }

    } while (chon != 5);

    return 0;
}

void menu()
{
    printf("\n+---------------------------------------------------+\n");
    printf("|             MENU CHUONG TRINH LAB 5               |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 1. Tim gia tri lon nhat trong 3 so                |\n");
    printf("| 2. Kiem tra Nam nhuan                             |\n");
    printf("| 3. Hoan vi 2 so (Su dung Con tro)                 |\n");
    printf("| 4. Kiem tra & Phan loai Tam giac                  |\n");
    printf("| 5. Thoat chuong trinh                             |\n");
    printf("+---------------------------------------------------+\n");
}

void chucNang1()
{
    int a,b,c;
    printf("Nhap a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("So lon nhat la %d\n",solonNhat(a,b,c));
}

int solonNhat(int a, int b, int c){
    int lonNhat = a;
    if(lonNhat<b){
        lonNhat = b;
    }else if(lonNhat < c){
        lonNhat = c;
    }
    return lonNhat;
}

void chucNang2()
{
    
}

void chucNang3()
{
    printf("\nBan da chon Chuc nang 3.\n");
}

void chucNang4()
{
    printf("\nBan da chon Chuc nang 4.\n");
}