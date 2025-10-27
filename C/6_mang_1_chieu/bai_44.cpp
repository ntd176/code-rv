/*
Create on Mon Oct 27 2025 14:10
@author: ntdai

#45 CHEN PHAN TU VAO MANG 1 CHIEU VAO VI TRI DAU, CUOI HOAC VAO VI TRI k CUA MANG
*/

#include "stdio.h"

// nhap mang
void nhapMang(int x[], int &n){
	do {
		printf("nhap so luong phan tu n (1<n<100): ");
		scanf("%d", &n);
	} while (n<1 || n>100);
	//---------------------
	printf("nhap du lieu cho mang: ");
	for(int i=0; i<n; i++){
		printf("\nx[%d] = ", i);
		scanf("%d", &x[i]);
	}
}
// xuat mang
void xuatMang(int x[], int n){
	printf("\nx[n] = ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}
// them phan tu vao cuoi mang
void themVaoCuoiMang(int x[], int &n, int m){
	x[n] = m;
	n++;
	// 1 2 3 4 5 => n = 5
	// x[5] = 99 => 1 2 3 4 5 99 => n = 6
}
// them phan tu vao dau mang
void themVaoDauMang(int x[], int &n, int m){
	n++;
	for(int i=n-1; i>0; i--){
		x[i] = x[i-1]; // dich sang phai
	}
	x[0] = m; // chen phan tu moi vao dau
	// 1 2 3 4 5 => n = 5
	// n = 6 => 88 1 2 3 4 5 
}
// them phan tu vao vi tri k
void themVaoViTriK(int x[], int &n, int m, int k){
	n++;
	for(int i=n-1; i>k; i--){
		x[i] = x[i-1]; // dich sang phai
	}
	x[k] = m; // chen phan tu moi vao vi tri k
	// 1 2 3 4 5 => n = 5
	// n = 6 => 1 2 3 77 4 5
}
int main(){
	int x[100];
	int n;
	nhapMang(x, n);
	xuatMang(x, n);
	//-------------
	themVaoCuoiMang(x, n, 99);
	xuatMang(x, n);
	//-------------
	themVaoDauMang(x, n, 88);
	xuatMang(x, n);
	//-------------
	themVaoViTriK(x, n, 77, 3);
	xuatMang(x, n);
}
