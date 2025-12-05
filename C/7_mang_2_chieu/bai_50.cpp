/*
	File		 : #51 CACH TIM KIEM TRONG MANG HAI CHIEU (MA TRAN)
	Author		 : Tien Dai Nguyen
	Init Time	 : 18:15
	Modifile Time: 18:00
	Date		 : 2025/12/04
	Modified Date: 2025/12/05
*/

#include "stdio.h"

// nhap ma tran
void nhapMaTran(int a[100][100], int *m, int *n){
	do{
		printf("Nhap so dong m: ");
		scanf("%d", m);
		printf("Nhap so cot n: ");
		scanf("%d", n);
	} while (*m<=0 || *n<=0);
	
	printf("Nhap cac phan tu cua ma tran:\n");
	for(int i=0; i<*m; i++){
		for(int j=0; j<*n; j++){
			printf("a[%d][%d] = ", i, j);
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

// tim kiem trong ma tran
int timKiem(int a[100][100], int m, int n, int giaTriTimKiem){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(a[i][j]==giaTriTimKiem)
				return 1; // tim thay
		}
	}
	return 0; // khong tim tha
}
void thucHienTimKiem(int a[100][100], int m, int n){
	int tieptuc;
	do{
		int x;
		printf("Nhap gia tri can tim: ");
		scanf("%d", &x);
		//--------------
		if(timKiem(a, m, n, x) == 1){
			printf("Tim thay!\n");
		} else {
			printf("Khong tim thay!\n");
		}
		printf("Nhap '0' de thoat, so khac de tiep tuc: ");
		scanf("%d", &tieptuc);
	} while (tieptuc != 0);
}

int main(){
	int a[100][100];
	int m, n;
	//-------
	nhapMaTran(a, &m, &n);
	xuatMaTran(a, m, n);
	thucHienTimKiem(a, m, n);
}

