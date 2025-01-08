#include<stdio.h>
#include<string.h>

struct Sinhvien {
	char name[50];
	int age;
	int Sdt;
	
};

int main(){
	
	struct Sinhvien sv;
	
	printf("Nhap ten cua sinh vien: " );
	fgets(sv.name,sizeof(sv.name), stdin);
	sv.name[strcspn(sv.name, "\n")] ='\0';
	
	printf("Nhap tuoi cua sinh vien: ");
	scanf("%d", &sv.age);
	
	printf("Nhap SDT cua sinh vien: ");
	scanf("%d", &sv.Sdt);
	
	printf("\n Thong tin cua sinh vien\n");
	printf("Ten sinh vien: %s\n",sv.name);
	printf("Tuoi: %d\n",sv.age);
	printf("SDT: %d\n",sv.Sdt);
	
	return 0;
	
}
