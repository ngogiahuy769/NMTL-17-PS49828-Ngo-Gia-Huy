#include <stdio.h>

int main() {
    int MSSV, NS, Tuoi;
    float DTB;
    char Ten[50];

    printf("Nhap vao MSSV: ");
    scanf("%d", &MSSV);

    printf("Nhap ho va ten: ");
    scanf(" %[^\n]", Ten);   

    printf("Nhap nam sinh: ");
    scanf("%d", &NS);

    printf("Nhap diem trung binh: ");
    scanf("%f", &DTB);

    Tuoi = 2026 - NS;

    printf("\nMa so sinh vien: %d\n", MSSV);
    printf("Ho va ten: %s\n", Ten);
    printf("Nam sinh: %d\n", NS);
    printf("Tuoi: %d\n", Tuoi);
    printf("Diem trung binh: %.1f\n", DTB);

    return 0;
}