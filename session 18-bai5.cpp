#include<stdio.h>
#include<string.h>

struct sinhvien{
	int id;
	char name[50];
	int age;
	char sdt[15];
};

int main(){
	sinhvien danhsachsinhvien[50];
	
	danhsachsinhvien[0] =(sinhvien){1,"Nguyen van a",18,"0944354398"};
	danhsachsinhvien[1] =(sinhvien){2,"Nguyen van b",18,"0944354397"};
	danhsachsinhvien[2] =(sinhvien){3,"Nguyen van c",18,"0944354396"};
	danhsachsinhvien[3] =(sinhvien){4,"Nguyen van d",18,"0944354394"};
	danhsachsinhvien[4] =(sinhvien){5,"Nguyen van e",18,"0944354393"};
	
	for (int i=0;i<5;i++){
		printf("Sinh vien %d:\n",i+1);
		printf("ID: %d\n",danhsachsinhvien[i].id);
		printf("Ho va ten: %s\n",danhsachsinhvien[i].name);
		printf("tuoi: %d\n",danhsachsinhvien[i].age);
		printf("SDT: %s\n",danhsachsinhvien[i].sdt);

	}
}
