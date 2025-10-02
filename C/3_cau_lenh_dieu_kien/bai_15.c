/*
Create on Thu Oct 02 2025 8:10
@author: ntdai

#16 Nhap vao he so phuong trinh bac hai ax^2+bx+c=0 in nghiem ra man hinh 
*/

#include "stdio.h"
#include "math.h"

int main(){
	// khai bao
	float a, b, c, x1, x2, delta;
	
	// nhap he so
	printf("nhap a = ");
	scanf("%f", &a);
	printf("nhap b = ");
	scanf("%f", &b);
	printf("nhap c = ");
	scanf("%f", &c);
	
	// tinh toan va xuat ket qua
	if (a==0){
		printf("he so a phai khac 0");
	} else {
		delta = pow(b, 2) - 4*a*c;
		printf("delta = %f\n", delta);
		
		if (delta>0 ){
			x1 = (-b-sqrt(delta))/(2*a);
			x2 = (-b+sqrt(delta))/(2*a);
			printf("pt co 2 nghiem x1 = %f va x2 = %f", x1, x2);
		} else if (delta==0){
			x1 = -b/(2*a);
			printf("pt co nghiem kep x1=x2=%2f", x1);
		} else {
			printf("pt vo nghiem");
		}
	}
}
