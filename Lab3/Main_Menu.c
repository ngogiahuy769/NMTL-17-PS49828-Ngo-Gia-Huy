#include <stdio.h>
#include <math.h>

int main()
{
    float dsv;
    printf("hay nhap diem sinh vien: ");
    scanf("%f", &dsv);
    if (dsv >= 9 && dsv <= 10)
    {
        printf("hoc luc xuat xac\n");
    }
    else if (dsv >= 8 && dsv < 9)
    {
        printf("hoc luc gioi\n");
    }
    else if (dsv >= 6.5 && dsv < 8)
    {
        printf("hoc luc kha\n");
    }
    else if (dsv >= 5 && dsv < 6.5)
    {
        printf("hoc luc trung binh\n");
    }
    else if (dsv >= 3.5 && dsv < 5)
    {
        printf("hoc luc yeu\n");
    }
    else if (dsv >= 0 && dsv < 3.5)
    {
        printf("hoc luc kem\n");
    }
    else if (dsv < 0 || dsv > 10)
    {
        printf("nhap diem khong hop le\n");
    }

    float a, b, c, x, Delta, x1, x2;
    printf("nhap vao he so a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0)
    {
        printf("pt bac nhat");
        if (b == 0 && c == 0)
        {
            printf("pt co vo so nghiem\n");
        }
        else if (b == 0 && c != 0)
        {
            printf("pt vo nghiem\n");
        }
        else
        {
            x = -c / b;
            printf("pt co nghiem duy nhat la %.2f\n", x);
        }
    }
    else if (a != 0)
    {
        printf("pt bac 2\n");
        Delta = b * b - 4 * a * c;
        if (Delta < 0)
        {
            printf("pt vo nghiem\n");
        }
        else if (Delta == 0)
        {
            x = -b / (2 * a);
            printf("pt co nghiem kep la %.2f\n", x);
        }
        else
        {
            x1 = (-b + sqrt(Delta)) / (2 * a);
            x2 = (-b - sqrt(Delta)) / (2 * a);
            printf("pt co 2 nghiem pt x1 la %.2f va x2 la %.2f\n", x1, x2);
        }
    }

    int kwh;
    int tiendien;

    printf("Nhap so kWh tieu thu trong thang: ");
    scanf("%d", &kwh);

    if (kwh <= 0)
    {
        printf("Nhap khong hop le");
    }
    else if (kwh <= 50)
    {
        tiendien = kwh * 1678;
    }
    else if (kwh <= 100)
    {
        tiendien = 50 * 1678 + (kwh - 50) * 1734;
    }
    else if (kwh <= 200)
    {
        tiendien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    }
    else if (kwh <= 300)
    {
        tiendien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    }
    else if (kwh <= 400)
    {
        tiendien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    }
    else
    {
        tiendien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
    }

    if (kwh >= 0)
    {
        printf("So tien dien phai tra: %d dong", tiendien);
    }
    return 0;
}
