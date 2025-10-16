/*
Create on Thu Oct 16 2025 15:08
@author: ntdai

#36 TINH TONG CAC PHAN TU MANG 1 CHIEU
*/

#include "stdio.h"

int main(){
	// khai bao mang
	int n;
	int x[100];
	do{
		printf("nhap so luong phan tu n (1<n<100): ");
		scanf("%d", &n);
	} while(n<1 || n>100);
	//----------------------
	// nhap du lieu cho mang
	printf("\nnhap cac phan tu cho mang: ");
	for(int i=0; i<n; i++){
		printf("\nx[%d] = ", i);
		scanf("%d", &x[i]);
	}
	//----------------------
	// xuat mang
	printf("\nx[n]: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
	//----------------------
	// tinh tong cac phan tu
	int tong = 0;
	for(int i=0; i<n; i++){
		tong = tong + x[i];
	}
	printf("\ntong cac phan tu trong mang: %d", tong);
}
