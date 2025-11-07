/*
Create on Wed Oct 22 2025 15:00
@author: ntdai

#2 TINH TOAN GIA TRI BIEU THUC
	Cho bieu thuc A(x) = x^3 + 3x^2 + x + 1
	Voi gia tri x duoc nhap tu ban phim, tinh va in ra gia tri cua bieu thuc tren 
*/

#include "stdio.h"
#include "math.h"

int main(){
	// khai bao
	float x;
	float A;
	// nhap x
	printf("nhap x: ");
	scanf("%f", &x);
	// tinh gia tri bieu thuc A(x)
	A = pow(x, 3) + 3 * pow(x, 2) + x + 1;
	// in ket qua A(x)
	printf("\nA(x) = %.2f", A);
}
