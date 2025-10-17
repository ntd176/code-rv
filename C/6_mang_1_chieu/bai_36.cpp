/*
Create on Fri Oct 17 2025 14:20
@author: ntdai

#37 CACH TRUYEN THAM SO MANG, TINH TRUNG BINH CONG MANG, TINH TRUNG BINH CONG SO DUONG
*/

// tinh trung binh cong trong mang 1 chieu 

#include "stdio.h"

float trungBinhCong(int x[], int n){
	int tong = 0;
	for(int i=0; i<n; i++){
		tong = tong + x[i];
	}
	return (float)tong/n; // ep kieu
}
//--------------------
// trung binh cong so duong
float trungBinhCongSoDuong(int x[], int n){
	int tong = 0;
	int dem = 0;
	
	for(int i=0; i<n; i++){
		if(x[i]>0){		// so duong trong mang
			tong = tong + x[i];
			dem++;
		}
	}
	if(dem==0)
		return 0;
	else
		return (float)tong/dem;
}

int main(){
	int n;
	int x[100];
	do{
		printf("nhap so luong phan tu n (1<n<100): ");
		scanf("%d", &n);
	} while(n<1 || n>100);
	//--------------------
	// nhap du lieu cho mang
	printf("\nnhap so luong phan tu trong mang: ");
	for(int i=0; i<n; i++){
		printf("\nx[%d] = ", i);
		scanf("%d", &x[i]);
	}
	//--------------------
	// xuat mang
	printf("\nx[n]: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
	//--------------------
	// goi ham trungBinhCong
	printf("\ntrung binh cong cua mang: %.2f", trungBinhCong(x, n));
	//--------------------
	// goi ham trungBinhCongSoDuong
	float kq = trungBinhCongSoDuong(x, n);
	if(kq==0)
		printf("\nkhong co so duong trong mang!");
	else
		printf("\ntrung binh cong so duong: %.2f", kq);
}
/*
trung binh cong so duong
n = 5
x[n] = 3 -1 5 0 2
	so duong: 3, 5, 2
	tong = 10
	so luong = 3
	trung binh = 10/3 = 3.33
*/
