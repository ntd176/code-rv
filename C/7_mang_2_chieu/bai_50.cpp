/*
	File		 : #51 CACH TIM KIEM TRONG MANG HAI CHIEU (TRA TRAN)
	Author		 : Tien Dai Nguyen
	Init Time	 : 18:15
	Modifile Time: 18:15
	Date		 : 2025/12/04
	Modified Date: 2025/12/04
*/

#include "stdio.h"

// nhap ma tran
void nhapMaTran(int a[100][100], int m, int n){
	printf("Nhap cac phan tu cua ma tran:\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("a[%d][%d] = ",i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

// xuat ma tran
void xuatMaTran(int a[100][100], int m, int n){
	printf("Ma tran vua nhap:\n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
// tim kiem


int main(){
	int m, n;
	int a[100][100]; // ma tran toi da 100x100
	//--------------
	printf("Nhap so dong m: ");
	scanf("%d", &m);
	printf("Nhap so cot n: ");
	scanf("%d", &n);
	//--------------
	nhapMaTran(a, m, n);
	xuatMaTran(a, m, n);
}

