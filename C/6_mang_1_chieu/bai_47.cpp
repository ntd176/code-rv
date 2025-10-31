/*
Create on Fri Oct 31 2025 21:30
@author: ntdai

#48 TACH MANG 1 CHIEU THANH 2 MANG (CHAN VA LE), (SO DUONG VA SO AM) VA (TACH NUA DAU VA NUA SAU)
*/

#include "stdio.h"

// nhap mang
void nhapMang(int x[], int &n){
	do {
		printf("nhap so luong phan tu (0<n<100): ");
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
	printf("x[n] = ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}
// tach mang chan le
void tachMangChanLe(int a[], int n1, int b[], int &n2, int c[], int &n3){
	n2 = 0; // so phan tu mang b (chan)
	n3 = 0; // so phan tu mang c (le)
	for(int i=0; i<n1; i++){
		if (a[i]%2==0){
			b[n2] = a[i];
			n2++;
		} else {
			c[n3] = a[i];
			n3++;
		}
	}
}

int main(){
	int a[100], b[100], c[200];
	int n1, n2, n3;
	
	printf("=== nhap mang a ===\n");
	nhapMang(a, n1);
	
	printf("\nmang a vua nhap: ");
	xuatMang(a, n1);
	
	// call function
	tachMangChanLe(a, n1, b, n2, c, n3);
	
	printf("\nmang chan b: ");
	xuatMang(b, n2);
	printf("\nmang le c: ");
	xuatMang(c, n3);
}
