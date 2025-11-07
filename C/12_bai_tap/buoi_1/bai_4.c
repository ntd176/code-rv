/*
Create on Wed Oct 22 2025 15:25
@author: ntdai

#4 TINH TONG, HIEU, TICH, THUONG
	Nhap vao 2 so nguyen, in ra tong, hieu, tich, thuong (do chinh xac 2 chu so)
*/

#include "stdio.h"

int main(){
	// khai bao
	int a, b;
	float tong, hieu, tich, thuong;
	// nhap a, b
	printf("nhap a: ");
	scanf("%d", &a);
	printf("nhap b: ");
	scanf("%d", &b);
	// tong
	tong = a + b;
	// hieu
	hieu = a - b;
	// tich
	tich = a * b;
	// thuong
	thuong = a / b;
	//-------------
	printf("\ntong = %.2f", tong);
	printf("\nhieu = %.2f", hieu);
	printf("\ntich = %.2f", tich);
	printf("\nthuong = %.2f", thuong);
}
