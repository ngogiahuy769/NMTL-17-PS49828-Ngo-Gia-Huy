#include <stdio.h>
#include <string.h>

struct SinhVien {
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};

void xoaBoDem();
void nhapXuatSinhVien(struct SinhVien mangSV[], int *n);
void sapXepSinhVien(struct SinhVien mangSV[], int n);
void timKiemSinhVien(struct SinhVien mangSV[], int n);
void xuatHocBong(struct SinhVien mangSV[], int n);

int main() {
    struct SinhVien mangSV[100];
    int n = 0;
    int luaChon;

    do {
        printf("\n+---------------------------------------------------+\n");
        printf("|         HE THONG QUAN LY SINH VIEN (LAB 8)        |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Nhap va Xuat danh sach sinh vien               |\n");
        printf("| 2. Sap xep sinh vien theo diem TB tang dan        |\n");
        printf("| 3. Tim kiem sinh vien theo Ma so sinh vien (MSSV)  |\n");
        printf("| 4. Xuat danh sach sinh vien dat Hoc bong (>= 8.0) |\n");
        printf("| 5. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-5): ");
        
        if (scanf("%d", &luaChon) != 1) {
            xoaBoDem();
            printf("lua chon khong hop le\n");
            continue;
        }
        xoaBoDem(); // Xoa phim Enter con sot trong bo dem ngay sau khi chon menu

        switch (luaChon) {
            case 1:
                nhapXuatSinhVien(mangSV, &n);
                break;
            case 2:
                sapXepSinhVien(mangSV, n);
                break;
            case 3:
                timKiemSinhVien(mangSV, n);
                break;
            case 4:
                xuatHocBong(mangSV, n);
                break;
            case 5:
                printf("da thoat chuong trinh\n");
                break;
            default:
                printf("chuc nang khong ton tai\n");
        }
    } while (luaChon != 5);

    return 0;
}

void xoaBoDem() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void nhapXuatSinhVien(struct SinhVien mangSV[], int *n) {
    printf("nhap so luong sinh vien: ");
    scanf("%d", n);
    xoaBoDem();

    for (int i = 0; i < *n; i++) {
        printf("nhap mssv: ");
        fgets(mangSV[i].mssv, sizeof(mangSV[i].mssv), stdin);
        mangSV[i].mssv[strcspn(mangSV[i].mssv, "\n")] = '\0';

        printf("nhap ho va ten: ");
        fgets(mangSV[i].tenSV, sizeof(mangSV[i].tenSV), stdin);
        mangSV[i].tenSV[strcspn(mangSV[i].tenSV, "\n")] = '\0';

        printf("nhap nganh hoc: ");
        fgets(mangSV[i].nganhHoc, sizeof(mangSV[i].nganhHoc), stdin);
        mangSV[i].nganhHoc[strcspn(mangSV[i].nganhHoc, "\n")] = '\0';

        printf("nhap diem trung binh: ");
        scanf("%f", &mangSV[i].diemTB);
        xoaBoDem();
    }

    printf("\ndanh sach sinh vien:\n");
    for (int i = 0; i < *n; i++) {
        printf("stt: %d, mssv: %s, ho ten: %s, nganh: %s, dtb: %.2f\n", 
               i + 1, mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
    }
}

void sapXepSinhVien(struct SinhVien mangSV[], int n) {
    if (n == 0) {
        printf("danh sach trong\n");
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mangSV[i].diemTB > mangSV[j].diemTB) {
                struct SinhVien temp = mangSV[i];
                mangSV[i] = mangSV[j];
                mangSV[j] = temp;
            }
        }
    }

    printf("\ndanh sach sau khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("stt: %d, mssv: %s, ho ten: %s, nganh: %s, dtb: %.2f\n", 
               i + 1, mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
    }
}

void timKiemSinhVien(struct SinhVien mangSV[], int n) {
    if (n == 0) {
        printf("danh sach trong\n");
        return;
    }

    char mssvTim[50];
    printf("nhap mssv can tim: ");
    fgets(mssvTim, sizeof(mssvTim), stdin);
    mssvTim[strcspn(mssvTim, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(mangSV[i].mssv, mssvTim) == 0) {
            if (!found) {
                printf("\nthong tin sinh vien tim thay:\n");
            }
            printf("stt: %d, mssv: %s, ho ten: %s, nganh: %s, dtb: %.2f\n", 
                   i + 1, mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
            found = 1;
        }
    }

    if (!found) {
        printf("khong tim thay sinh vien\n");
    }
}

void xuatHocBong(struct SinhVien mangSV[], int n) {
    if (n == 0) {
        printf("danh sach trong\n");
        return;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (mangSV[i].diemTB >= 8.0) {
            if (count == 0) {
                printf("\ndanh sach sinh vien dat hoc bong:\n");
            }
            printf("stt: %d, mssv: %s, ho ten: %s, nganh: %s, dtb: %.2f\n", 
                   count + 1, mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
            count++;
        }
    }

    if (count == 0) {
        printf("khong co sinh vien dat hoc bong\n");
    }
}