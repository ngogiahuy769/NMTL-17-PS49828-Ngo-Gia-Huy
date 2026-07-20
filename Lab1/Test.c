#include <stdio.h>

int main(){
    int chon;
    do{
    printf("Bang chon\n");
    printf("0.thoat chuong trinh\n");
    printf("1.Tinh hoc luc sinh vien\n");
    printf("2.giai pt bac 2\n");
    printf("3.tinh tien dien\n");
    printf("moi ban chon tu 0 den 3");
    scanf("%d",&chon);
    switch(chon)
    {
      case 0:
        printf("Ban da chon chuc nang: 0. Thoat chuong trinh.\n");
        break;
      case 1:
        printf("Ban da chon chuc nang: 1. Tinh hoc luc sinh vien.\n");
        break;
      case 2:
        printf("Ban da chon chuc nang: 2. Giai phuong trinh bac 2.\n");
        break;
       case 3:
        printf("Ban da chon chuc nang: 3. Tinh tien dien.\n");
        break;
        default:
        printf("ban da nhap sai chuc nang hay nhap tu 0 den 3");
        break;
    }
    } while (chon == 1);
       return 0;
}

//while la 0 == 0 dung chay tiep 2 hay so n khac == 0 sai dung chay
//while la 0 != 0 sai dung chay 2 hay so n khac khac 0 dung chay tiep
//while sai thi dung dung thi chay tiep