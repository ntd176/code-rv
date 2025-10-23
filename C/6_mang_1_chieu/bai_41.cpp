/*
Create on Thu Oct 23 2025 14:45
@author: ntdai

#42 TIM KIEM TRONG MANG 1 CHIEU
*/

#include "stdio.h"

int x[100];
int n;

void nhapMang(int x[100], int &n){ // truyen tham chieu
	printf("nhap so luong phan tu n (1<n<100): ");
	scanf("%d", &n);
	printf("\nnhap du lieu cho mang: ");
	for(int i=0; i<n; i++){
		printf("\nx[%d] = ", i);
		scanf("%d", &x[i]);
	}
}

void xuatMang(int x[100], int n){ // truyen tham tri
	printf("\nx[n]: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}

int timKiem(int x[100], int n, int tk){ // tk -> tim kiem
	int kq = 0;
	for(int i=0; i<n; i++){
		if(x[i]==tk){
			kq = 1;
			return 1;  
		}
	}
	return kq;
}

void thucHienTimKiem(int x[100], int n){
	int tk;
	printf("\nnhap gia tri can tim: ");
	scanf("%d", &tk);
	int kq = timKiem(x, n, tk);
	if(kq==1)
		printf("\ntim thay");
	else 
		printf("\nkhong tim thay!");
}

int main(){
	nhapMang(x, n);
	xuatMang(x, n);
	thucHienTimKiem(x, n);
}

