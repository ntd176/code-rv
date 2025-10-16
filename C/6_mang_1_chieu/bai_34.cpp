/*
Create on Thu Oct 16 2025 14:25
@author: ntdai

#35 MANG 1 CHIEU
	Cu phap:
		kieu_du_lieu ten_bien_mang[so_luong_phan_tu];
*/

#include "stdio.h"

int main(){
	// khai bao mang
	int a[10]; // khai bao mang gom 10 phan tu kieu int bat dau tu 0 -> 9
	a[0] = 5; // gan gia tri cho mang
	a[1] = 6;
	printf("%d", a[0]);
	float b[100];
	char c[1000];
	
	// khai bao mang va gan gia tri ban dau
	int x[10] = {}; // mang rong
	int y[3] = {9, 10, 11};
	
	printf("\nmang x: ");
	for(int i=0; i<10; i++){
		printf("%d ", x[i]);
	}
	printf("\nmang y: ");
	for(int i=0; i<3; i++){
		printf("%d ", y[i]);
	}
}
