/*
Create on Tue Sep 23 2025 14:10
@author: ntdai

#4 PHEP TOAN CO BAN
	+  Cong
	-  Tru
	*  Nhan
	/  Chia lay phan nguyen
	%  Chia lay phan du
	++ Tang gia tri toan hang 1 don vi
	-- Giam gia tri toan hang 1 don vi 
*/

#include "stdio.h"

int main(){
	float a, b;
	printf("Nhap vao gia tri a = ");
	scanf("%f", &a);
	printf("Nhap vao gia tri b = ");
	scanf("%f", &b);
	
	float tong = a + b;
	printf("%.2f + %.2f = %.2f \n", a, b, tong);
	
	float hieu = a - b;
	printf("%.2f - %.2f = %.2f \n", a, b, hieu);
	
	float tich = a * b;
	printf("%.2f * %.2f = %.2f \n", a, b, tich);
	
	float thuong = a / b;
	printf("%.2f / %.2f = %.2f \n", a, b, thuong);

	int r = ((int)a) % ((int)b); // syntax 
	printf("%.2f chia lay du %.2f = %d \n", a, b, r);
	
	a++;
	printf("a++ = %.2f \n", a);
	
	b--;
	printf("b-- = %.2f", b);
}
