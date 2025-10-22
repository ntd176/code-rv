/*
Create on Wed Oct 22 2025 14:40
@author: ntdai

#1 PHAN NGUYEN, PHAN DU
	Tinh va in ra phan nguyen, phan du cua phep chia 2 so nguyen a, b
		Vi du:
		|-----------|-----------|
		|	input	|	output	|
		|-----------|-----------|
		|	100 5	|	20 0	|
		|	14 6	|	2 2		|
		|-----------|-----------|
*/

#include "stdio.h"

int main(){
	int a, b;
	printf("nhap a: ");
	scanf("%d", &a);
	printf("\nnhap b: ");
	scanf("%d", &b);
	
	if (b==0){
		printf("b phai khac 0!");
	} else {
		int phan_nguyen = a/b;
		int phan_du = a%b;
		printf("\nket qua phep tinh: ");
		printf("\nphan nguyen = %d", phan_nguyen);
		printf("\nphan du = %d", phan_du);
	}
}
