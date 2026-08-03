#include <stdio.h>

void nhapMang(int a[], int n)
{
    printf("Nhap %d phan tu cho mang:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void tinhTrungBinhCong(int a[], int n)
{
    int tong = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0 && a[i] % 5 == 0)
        {
            tong += a[i];
            count++;
        }
    }

    if (count == 0)
    {
        printf("Khong tim thay so nao chia het cho ca 3 va 5!\n");
    }
    else
    {
        float trungBinh = (float)tong / count;
        printf("Tong cac so thoa dieu kien: %d\n", tong);
        printf("So luong phan tu thoa dieu kien: %d\n", count);
        printf("Trung binh cong = %.2f\n", trungBinh);
    }
}

void timMaxMin(int a[], int n)
{
    int max = a[0];
    int min = a[0];
    for (int i = 1; i <= n - 1; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        else if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("Gia tri lon nhat trong mang: %d\n", max);
    printf("Gia tri nho nhat trong mang: %d\n", min);
}

void sapXepGiamDan(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep giam dan:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void maTranBinhPhuong(int row, int col)
{
    int mt[10][10];

    printf("Nhap cac phan tu cho ma tran %d x %d:\n", row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &mt[i][j]);
        }
    }

    printf("Ma tran sau khi binh phuong tung phan tu:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%6d", mt[i][j] * mt[i][j]);
        }
        printf("\n");
    }
}

void xuatSoLeMaTran(int row, int col)
{
    int mt[10][10];
    int count = 0;

    /* Nhap ma tran */
    printf("Nhap cac phan tu cho ma tran %d x %d:\n", row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &mt[i][j]);
        }
    }

    printf("Cac phan tu le trong ma tran:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mt[i][j] % 2 != 0)
            {
                printf("Phan tu le tai a[%d][%d] = %d\n", i, j, mt[i][j]);
                count++;
            }
        }
    }

    if (count == 0)
    {
        printf("Khong co phan tu le nao trong ma tran!\n");
    }
}

int main()
{
    int chon;
    int a[100];
    int n;
    int row, col;

    do
    {
        printf("+---------------------------------------------------+\n");
        printf("|             MENU CHUONG TRINH LAB 6               |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Tinh trung binh tong so chia het cho 3 va 5    |\n");
        printf("| 2. Tim gia tri Lon nhat va Nho nhat trong Mang    |\n");
        printf("| 3. Sap xep Mang theo thu tu Giam dan              |\n");
        printf("| 4. Ma tran binh phuong (Mang 2 chieu)             |\n");
        printf("| 5. Loc va xuat vi tri cac So le trong Ma tran     |\n");
        printf("| 6. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-6): ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
            printf("Nhap so luong phan tu n: ");
            scanf("%d", &n);
            nhapMang(a, n);
            tinhTrungBinhCong(a, n);
            break;
        case 2:
            printf("Nhap so luong phan tu n: ");
            scanf("%d", &n);
            nhapMang(a, n);
            timMaxMin(a, n);
            break;
        case 3:
            printf("Nhap so luong phan tu n: ");
            scanf("%d", &n);
            nhapMang(a, n);
            sapXepGiamDan(a, n);
            break;
        case 4:
            printf("Nhap so hang row: ");
            scanf("%d", &row);
            printf("Nhap so cot col: ");
            scanf("%d", &col);
            maTranBinhPhuong(row, col);
            break;
        case 5:
            printf("Nhap so hang (row): ");
            scanf("%d", &row);
            printf("Nhap so cot (col): ");
            scanf("%d", &col);
            xuatSoLeMaTran(row, col);
            break;
        case 6:
            printf("Cam on ban da su dung chuong trinh!\n");
            break;
        default:
            printf("Lua chon khong hop le, vui long chon lai!\n");
        }

    } while (chon != 6);
    return 0;
}