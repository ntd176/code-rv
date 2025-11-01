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
// tach mang so am, so duong
void tachMangAmDuong(int a[], int n1, int b[], int &n2, int c[], int &n3){
	n2 = 0; // so phan tu mang b (am)
	n3 = 0; // so phan tu mang c (duong)
	for(int i=0; i<n1; i++){
		if (a[i]<0){ // so am
			b[n2] = a[i];
			n2++;
		} else if (a[i]>=0){ // so duong
			c[n3] = a[i];
			n3++;
		}
	}
}
// tach nua dau, nua sau mang
void tachMangNuaDauNuaSau(int a[], int n1, int b[], int &n2, int c[], int &n3){
	n2 = n1/2; // so phan tu nua dau
	n3 = n1-n2; // so phan tu nua sau
	// sao chep nua dau
	for(int i=0; i<n2; i++){
		b[i] = a[i];
	}
	// sao chep nua sau
	for(int i=0; i<n3; i++){
		c[i] = a[i+n2];
	}
}
int main(){
	int a[100], b[100], c[200];
	int n1, n2, n3;
	
	printf("=== nhap mang a ===\n");
	nhapMang(a, n1);
	
	printf("\nmang a vua nhap: ");
	xuatMang(a, n1);
	
	// call function chan le
	tachMangChanLe(a, n1, b, n2, c, n3);
	
	printf("\nmang chan b: ");
	xuatMang(b, n2);
	printf("\nmang le c: ");
	xuatMang(c, n3);
	
	// call function am duong
	tachMangAmDuong(a, n1, b, n2, c, n3);
	
	printf("\nmang am b: ");
	xuatMang(b, n2);
	printf("\nmang duong c: ");
	xuatMang(c, n3);
	
	// call function nua dau, nua sau
	tachMangNuaDauNuaSau(a, n1, b, n2, c, n3);
	
	printf("\nmang dau b: ");
	xuatMang(b, n2);
	printf("\nmang sau c: ");
	xuatMang(c, n3);
}
