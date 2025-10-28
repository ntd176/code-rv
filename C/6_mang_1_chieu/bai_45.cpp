/*
Create on Tue Oct 28 2025 14:35
@author: ntdai

#46 TAO MENU CHO CHUONG TRINH C TRONG MANG 1 CHIEU 
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
	char gt;
	do{
		printf("\nMENU (chon ham muon xu ly)\n");
		printf("1. Nhap mang\n");
		printf("2. Xuat mang\n");
		printf("3. Them phan tu vao cuoi mang\n");
		printf("4. Them phan tu vao dau mang\n");
		printf("5. Them phan tu vao vi tri k mang\n");
		printf("x. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf(" %c", &gt);
		//---------------
		if (gt=='1'){
			nhapMang(x, n);
		} else if (gt=='2'){
			xuatMang(x, n);
		} else if (gt=='3' || gt=='4' || gt=='5'){
			int m;
			printf("\nnhap m: ");
			scanf("%d", &m);
			//--------------
			if(gt=='3'){
				themVaoCuoiMang(x, n, m);
			} else if (gt=='4'){
				themVaoDauMang(x, n, m);
			} else if (gt=='5'){
				int k;
				printf("\nnhap k: ");
				scanf("%d", &k);
				themVaoViTriK(x, n, m, k);
			}
		}
	} while (gt!='x');
}
