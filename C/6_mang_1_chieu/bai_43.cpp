/*
Create on Sat Oct 25 2025 14:05
@author: ntdai

#44 XOA PHAN TU THEO VI TRI, THEO DIEU KIEN TRONG MANG MOT CHIEU
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
// xoa phan tu tai vi tri
void xoaMangTaiViTri(int x[], int &n, int vi_tri){
	for(int i = vi_tri; i<n-1; i++){
		x[i] = x[i+1];
	}
	n--;
}
// xoa phan tu mang theo gia tri
void xoaMangTheoGiaTri(int x[], int &n){
	int gt;
	printf("\nnhap gia tri can xoa: ");
	scanf("%d", &gt);
	for(int i=0; i<n; i++){
		if(x[i]==gt){
			xoaMangTaiViTri(x, n, i);
			i--;
		}
	}
}
int main(){
	int x[100];
	int n;
	nhapMang(x, n);
	xuatMang(x, n);	
	xoaMangTheoGiaTri(x, n);
	xuatMang(x, n);
}

/*
vi du:
	truong hop 1
		chi so 	|	0	|	1	|	2	|	3	|	4	|
		gia tri	|	10	|	20	|	30	|	40	|	50	|
		-------------------------------------------------
		--> xoa gia tri: 30
		==> ket qua: 10, 20, 40, 50
		
	truong hop 2
		chi so 	|	0	|	1	|	2	|	3	|
		gia tri	|	1	|	5	|	5	|	7	|
		-----------------------------------------
		--> xoa gia tri: 5
		==> ket qua: 1, 7
*/

