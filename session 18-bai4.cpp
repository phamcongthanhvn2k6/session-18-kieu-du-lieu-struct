#include<stdio.h>
#include<string.h>

struct Sinhvien {
	int id;
	char name[50];
	int age;
	int Sdt;
	
};

int main(){
	int n;
	printf("Nhap so sinh vien mon nhap thong tin: ");
	scanf("%d",&n);
	struct Sinhvien sv[n];
	
	getchar();
	for(int i=0;i<n;i++){
	sv[i].id = i+1;
	
	printf("Nhap ten cua sinh vien:  ");
	fgets(sv[i].name,sizeof(sv[i].name), stdin);
	sv[i].name[strcspn(sv[i].name, "\n")] ='\0';
	
	printf("Nhap tuoi cua sinh vien: ");
	scanf("%d", &sv[i].age);
	
	printf("Nhap SDT cua sinh vien: ");
	scanf("%d", &sv[i].Sdt);
	
	getchar();
	}
	for(int i=0;i<n;i++){
	
	printf("\n Thong tin cua sinh vien%d\n",sv[i].id);
	printf("ID cua Sinh vien: %d\n",sv[i].id);
	printf("Ten sinh vien: %s\n",sv[i].name);
	printf("Tuoi: %d\n",sv[i].age);
	printf("SDT: %d\n",sv[i].Sdt);
}
	return 0;
	
}
