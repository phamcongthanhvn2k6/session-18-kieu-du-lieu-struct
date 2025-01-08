#include<stdio.h>
#include<string.h>

struct sinhvien{
	int id;
	char name[50];
	int age;
	char sdt[15];
};

int main(){
	struct sinhvien danhsachsinhvien[50];
	
	danhsachsinhvien[0] =(struct sinhvien){1,"nguyen van a",18,"0944354398"};
	danhsachsinhvien[1] =(struct sinhvien){2,"Nguyen van b",18,"0944354397"};
	danhsachsinhvien[2] =(struct sinhvien){3,"Nguyen van c",18,"0944354396"};
	danhsachsinhvien[3] =(struct sinhvien){4,"Nguyen van d",18,"0944354394"};
	danhsachsinhvien[4] =(struct sinhvien){5,"Nguyen van e",18,"0944354393"};
	
	int n=5;
	
	printf("Nhap sinh vien moi: \n");
	struct sinhvien sinhvienmoi;
	printf("Nhap ID:");
	scanf("%d",&sinhvienmoi.id);
	printf("Nhap ho va ten: ");
	scanf("%s",&sinhvienmoi.name);
	printf("Nhap tuoi: ");
	scanf("%d",&sinhvienmoi.age);
	printf("Nhap SDT: ");
	scanf("%s",&sinhvienmoi.sdt);
	
	if(n<50){
		danhsachsinhvien[n] = sinhvienmoi;
		n++;
	}
	else{
		printf("Mang da day,khong the them sinh vien moi!");
	}
	
	for(int i=0;i<n;i++){
		printf("Sinh vien %d:\n",i+1);
		printf("ID: %d\n",danhsachsinhvien[i].id);
		printf("Ho va ten: %s\n",danhsachsinhvien[i].name);
		printf("tuoi: %d\n",danhsachsinhvien[i].age);
		printf("SDT: %s\n",danhsachsinhvien[i].sdt);
		printf("\n");
	}
	
	return 0;
	}
