#include <stdio.h>
int main(){
    int MSSV,T,L,H;
    float DTB;
    char Ten[20];

    printf("Hay nhap mssv");
    scanf("%d",&MSSV);
    printf("hay nhap ten");
    scanf(" %[^\n]",Ten);
    printf("hay nhap diem t,l,h");
    scanf("%d%d%d",&T,&L,&H);
    DTB = 1.0*(T * 2 + L + H) / 4;
    printf("Mssv %d\n ho va ten %s \n diem trung binh la %.2f",MSSV,Ten,DTB);
    return 0;

}