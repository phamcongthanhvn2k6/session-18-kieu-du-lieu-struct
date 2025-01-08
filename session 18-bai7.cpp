#include <stdio.h>
#include <string.h>

#define MAX 50

typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} SinhVien;

// Ham hien thi thong tin sinh vien
void in(SinhVien sv) {
    printf("ID: %d, Name: %s, Age: %d, Phone Number: %s\n", sv.id, sv.name, sv.age, sv.phoneNumber);
}

// Ham hien thi toan bo thong tin sinh vien trong mang
void intatca(SinhVien ds[], int n) {
    for (int i = 0; i < n; i++) {
        in(ds[i]);
    }
}

// Ham tim kiem sinh vien theo ten
int tim(SinhVien ds[], int n, char name[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(ds[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

void xoa(SinhVien ds[], int *n, char name[]) {
    int index = tim(ds, *n, name);
    if (index != -1) {
        for (int i = index; i < *n - 1; i++) {
            ds[i] = ds[i + 1];
        }
        (*n)--;
        printf("Da xoa sinh vien co ten: %s\n", name);
    } else {
        printf("Sinh vien khong ton tai!\n");
    }
}

int main() {
    SinhVien danhSachSinhVien[MAX] = {
        {1, "nguyen van a", 18, "0944354309"},
        {2, "nguyen van b", 21, "0944354398"},
        {3, "nguyen van c", 22, "0944354397"},
        {4, "pham cong thanh", 23, "0944354398"},
        {5, "nguyen van d", 24, "0378953453"}
    };
    int n = 5; 

    char xoaten[50];
    printf("Nhap ten sinh vien can xoa: ");
    gets(xoaten);

    xoa(danhSachSinhVien, &n, xoaten);
    
    printf("Danh sach sinh vien sau khi xoa:\n");
    intatca(danhSachSinhVien, n);

    return 0;
}

