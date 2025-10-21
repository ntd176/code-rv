/*
Create on Tue Oct 21 2025 21:00
@author: ntdai

#41 DAO NGUOC MANG 1 CHIEU
*/

#include "stdio.h"

void daoNguocMang(int x[], int n){
	for(int i=0; i<n/2; i++){
		// swap
		int temp = x[i];
		x[i] = x[n-1-i];
		x[n-1-i] = temp;
	}
	printf("\nmang sau khi dao nguoc: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}

int main(){
	int n;
	int x[100];
	do{
		printf("nhap so luong phan tu n (1<n<100): ");
		scanf("%d", &n);
	} while (n<1 || n>100);
	//---------------------
	// nhap du lieu cho mang
	printf("\nnhap du lieu cho mang: ");
	for(int i=0; i<n; i++){
		printf("\nx[%d] = ", i);
		scanf("%d", &x[i]);
	}
	//---------------------
	// xuat mang
	printf("\nx[n]: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
	//---------------------
	// goi ham dao nguoc mang
	daoNguocMang(x, n);
}
/*
Vi du dao mang
	x[n] = {1, 2, 3, 4, 5}
	----------------------
	loop i = 0, n = 5
	-> x[0] = 1 <=> x[n-1-i] = x[4] = 5 (doi cho so 1 va 5) -> ket qua x[n] = {5, 2, 3, 4, 1}
	----------------------
	loop i = 1, n = 5
	-> x[1] = 2 <=> x[n-1-i] = x[3] = 4 (doi cho so 2 va 4) -> ket qua x[n] = {5, 4, 3, 2, 1}
	----------------------
	loop i = 2 -> giua mang ->stop  
*/
