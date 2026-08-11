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

    for (int i = 0; s[i] != '\0'; i++)
    {
        char c = tolower(s[i]);
        if (isalpha(c))
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                demNA++;
            }
            else
            {
                demPA++;
            }
        }
    }

    printf("So luong nguyen am: %d\n", demNA);
    printf("So luong phu am   : %d\n", demPA);
}

void kiemTraDangNhap()
{
    char userSys[] = "admin";
    char passSys[] = "123456";
    char user[50];
    char pass[50];

    printf("\nCHỨC NĂNG ĐĂNG NHẬP\n");
    printf("Nhập Username: ");
    fgets(user, sizeof(user), stdin);
    user[strcspn(user, "\n")] = '\0';
    printf("Nhập Password: ");
    fgets(pass, sizeof(pass), stdin);
    pass[strcspn(pass, "\n")] = '\0';
    if (strcmp(user, userSys) == 0 && strcmp(pass, passSys) == 0)
    {
        printf("-> Đăng nhập thành công!\n");
    }
    else
    {
        printf("-> Username hoặc Password không chính xác!\n");
    }
}

void sapXepChuoi()
{
    char s[5][50];
    char temp[50];

    printf("\n=== CHỨC NĂNG SẮP XẾP CHUỖI ALPHABET ===\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Nhập chuỗi thứ %d: ", i + 1);
        fgets(s[i], sizeof(s[i]), stdin);
        s[i][strcspn(s[i], "\n")] = '\0';
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    printf("\n--- Danh sách sau khi sắp xếp Alphabet ---\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d. %s\n", i + 1, s[i]);
    }
}

void thapPhanSangNhiPhan()
{
    int n;
    char nhiPhan[50] = "";
    int index = 0;

    printf("\n=== CHỨC NĂNG CHUYỂN THẬP PHÂN SANG NHỊ PHÂN ===\n");
    printf("Nhập một số nguyên dương thập phân: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Vui lòng nhập số nguyên dương (> 0)!\n");
        return;
    }

    int tempN = n; // Lưu lại giá trị ban đầu để in thông báo

    // 1. Chia lấy dư cho 2 và lưu phần dư thành ký tự '0' hoặc '1' vào chuỗi
    while (tempN > 0)
    {
        int du = tempN % 2;
        nhiPhan[index++] = du + '0'; // Chuyển số dư (0 hoặc 1) sang ký tự ('0' hoặc '1')
        tempN /= 2;
    }
    nhiPhan[index] = '\0'; // Đánh dấu kết thúc chuỗi

    // 2. In ngược chuỗi nhiPhan thu được để có kết quả chính xác
    printf("Số thập phân %d sang nhị phân là: ", n);
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%c", nhiPhan[i]);
    }
    printf("\n");
}

int main()
{
    int chon;

    do
    {
        printf("\n+---------------------------------------------------+\n");
        printf("|              MENU CHUONG TRINH LAB 7              |\n");
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

        case 2:
            kiemTraDangNhap();
            break;

        case 3:
            sapXepChuoi();
            break;

        case 4:
            thapPhanSangNhiPhan();
            break;

        case 5:
            printf("Tam biet\n");
            break;

        default:
            printf("Nhap sai chuc nang hay chon chuc nang tu 1 den 5\n");
            break;
        }

    } while (chon != 5);

    return 0;
}
