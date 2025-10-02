/*
Create on Wed Oct 01 2025 13:25
@author: ntdai

#14 GIAI PHUONG TRINH BAC NHAT
	Viet chuong trinh cho nhap cac he so cua phuong trinh bac nhat 1 an ax+b=0 in ra man hinh nghiem cua phuong trinh
*/

#include "stdio.h"

int main(){
	float a, b, x;
	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	
	if (a!=0){
		x = -b/a;
		printf("nghiem cua pt x = %.2f", x);
	} else {
		if (b==0){
			printf("pt vo so nghiem");
		} else {
			printf("pt vo nghiem");
		}
	}
}


