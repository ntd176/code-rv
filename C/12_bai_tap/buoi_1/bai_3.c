/*
Create on Wed Oct 22 2025 15:15
@author: ntdai

#3 TINH TOAN GIA TRI BIEU THUC PART 2
	Cho ba so nguyen duong a, b va c, hay tinh S = a*(b+c)+b*(a+c)+c*(a+b)
*/

#include "stdio.h"

int main(){
	// khai bao
	float a, b, c;
	float S;
	// nhap a, b, c
	printf("nhap a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	// tinh gia tri bieu thuc S
	S = a*(b+c) + b*(a+c) + c*(b+c);
	// in ket qua S
	printf("\nS = %.2f", S);
}
