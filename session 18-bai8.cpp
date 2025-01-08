#include <stdio.h>
#include <string.h>

struct sinhvien {
    int id;
    char name[50];
    int age;
    char sdt[15];
};

void nhapsinhvien(struct sinhvien *sv) {
    printf("Nhap ID: ");
    scanf("%d", &sv->id);
    getchar(); // loai bo dau \n o cuoi gay loi ham     
    printf("Nhap ten sinh vien: ");
    fgets(sv->name, sizeof(sv->name), stdin);
    sv->name[strcspn(sv->name, "\n")] = '\0'; // loai bo dau'\n' o cuoi dong

    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &sv->age);
    getchar(); 
    
    printf("Nhap SDT cua sinh vien: ");
    fgets(sv->sdt, sizeof(sv->sdt), stdin);
    sv->sdt[strcspn(sv->sdt, "\n")] = '\0'; 
}

void hienthi(struct sinhvien sv) {
    printf("ID: %d, Name: %s, tuoi: %d, SDT: %s\n", sv.id, sv.name, sv.age, sv.sdt);
}

void hienthitatcasinhvien(struct sinhvien ds[], int n) {
    for (int i = 0; i < n; i++) {
        hienthi(ds[i]);
    }
}
// vi o day co thay doi so luong sinh vien nen phai dung con tro de co the thay doi gia tri
void chensinhvien(struct sinhvien ds[], int *n, int vitri, struct sinhvien sv) {
    if (vitri < 0) {
        vitri = 0;
    }
    if (vitri > *n) {
        vitri = *n;
    }
    
    for (int i = *n; i > vitri; i--) {
        ds[i] = ds[i - 1];
    }
    ds[vitri] = sv;
    (*n)++;
}

int main() {
    struct sinhvien danhsachsinhvien[50] = {
        {1, "nguyen van a", 18, "0944354309"},
        {2, "nguyen van b", 21, "0944354398"},
        {3, "nguyen van c", 22, "0944354397"},
        {4, "pham cong thanh", 23, "0944354398"},
        {5, "nguyen van d", 24, "0378953453"}
    };
    int n = 5; 

    int vitri;
    struct sinhvien sv;
    
    printf("Hay nhap vi tri can chen: ");
    scanf("%d", &vitri);
    getchar(); 
    
    nhapsinhvien(&sv);
    chensinhvien(danhsachsinhvien, &n, vitri, sv);
    
    printf("Danh sach sinh vien sau khi chen la: \n");
    hienthitatcasinhvien(danhsachsinhvien, n);
    
    return 0;
}

