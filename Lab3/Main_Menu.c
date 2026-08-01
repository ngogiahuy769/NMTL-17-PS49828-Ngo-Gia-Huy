#include <stdio.h>
#include <math.h>

int main()
{
    int nhapluachon;

    do
    {
        printf("\n========== MENU ==========\n");
        printf("1. Xep loai hoc luc\n");
        printf("2. Giai phuong trinh\n");
        printf("3. Tinh tien dien\n");
        printf("0. Thoat\n");
        printf("==========================\n");
        printf("Nhap lua chon: ");
        scanf("%d", &nhapluachon);

        switch (nhapluachon)
        {
        case 1:
        {
            float dsv;
            printf("Hay nhap diem sinh vien: ");
            scanf("%f", &dsv);

            if (dsv >= 9 && dsv <= 10)
                printf("Hoc luc xuat sac\n");
            else if (dsv >= 8)
                printf("Hoc luc gioi\n");
            else if (dsv >= 6.5)
                printf("Hoc luc kha\n");
            else if (dsv >= 5)
                printf("Hoc luc trung binh\n");
            else if (dsv >= 3.5)
                printf("Hoc luc yeu\n");
            else if (dsv >= 0)
                printf("Hoc luc kem\n");
            else
                printf("Nhap diem khong hop le\n");

            break;
        }

        case 2:
        {
            float a, b, c, x, Delta, x1, x2;

            printf("Nhap vao he so a, b, c: ");
            scanf("%f%f%f", &a, &b, &c);

            if (a == 0)
            {
                printf("Phuong trinh bac nhat\n");

                if (b == 0 && c == 0)
                    printf("Phuong trinh vo so nghiem\n");
                else if (b == 0)
                    printf("Phuong trinh vo nghiem\n");
                else
                {
                    x = -c / b;
                    printf("Nghiem x = %.2f\n", x);
                }
            }
            else
            {
                printf("Phuong trinh bac hai\n");

                Delta = b * b - 4 * a * c;

                if (Delta < 0)
                    printf("Phuong trinh vo nghiem\n");
                else if (Delta == 0)
                {
                    x = -b / (2 * a);
                    printf("Phuong trinh co nghiem kep x = %.2f\n", x);
                }
                else
                {
                    x1 = (-b + sqrt(Delta)) / (2 * a);
                    x2 = (-b - sqrt(Delta)) / (2 * a);
                    printf("x1 = %.2f\n", x1);
                    printf("x2 = %.2f\n", x2);
                }
            }

            break;
        }

        case 3:
        {
            float kwh, tiendien;

            printf("Nhap so kWh tieu thu trong thang: ");
            scanf("%f", &kwh);

            if (kwh <= 0)
            {
                printf("Nhap khong hop le\n");
            }
            else if (kwh <= 50)
            {
                tiendien = kwh * 1.678;
            }
            else if (kwh <= 100)
            {
                tiendien = 50 * 1.678 + (kwh - 50) * 1.734;
            }
            else if (kwh <= 200)
            {
                tiendien = 50 * 1.678 + 50 * 1.734 + (kwh - 100) * 2.014;
            }
            else if (kwh <= 300)
            {
                tiendien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (kwh - 200) * 2.536;
            }
            else if (kwh <= 400)
            {
                tiendien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (kwh - 300) * 2.834;
            }
            else
            {
                tiendien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + (kwh - 400) * 2.927;
            }

            if (kwh > 0)
                printf("So tien dien phai tra: %.3f dong\n", tiendien);

            break;
        }

        case 0:
            printf("Thoat chuong trinh!\n");
            break;

        default:
            printf("Lua chon khong hop le!\n");
        }

    } while (nhapluachon != 0);

    return 0;
}


