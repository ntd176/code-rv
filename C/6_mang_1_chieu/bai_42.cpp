/*
Create on Fri Oct 24 2025 13:35
@author: ntdai

#43 TIM PHAN TU NHO THU HAI - LON THU HAI TRONG MANG
*/

#include "stdio.h"

// nhap mang
void nhapMang(int x[], int &n){
	do {
		printf("nhap so luong phan tu n (1<n<100): ");
		scanf("%d", &n);
	} while (n<1 || n>100);
	//--------------------------------
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
// tim phan tu lon thu hai, nho thu hai -> max2, min2
void timMinMax2(int x[], int n){
	// tim max1, min1
	int max1 = x[0];
	int min1 = x[0];
	for(int i=1; i<n; i++){
		if (x[i] > max1)
			max1 = x[i];
		if (x[i] < min1)
			min1 = x[i];
	}
	// tim max2, min2
	int max2 = -999999;
	int min2 = 999999;
	for(int i=0; i<n; i++){
		if (x[i] < max1 && x[i] > max2) // nho hon max1 va lon hon cac gia tri khac trong mang
			max2 = x[i];
		if (x[i] > min1 && x[i] < min2) // lon hon min1 va nho hon cac gia tri khac trong mang
			min2 = x[i];
	}
	// xuat ket qua
	if (max2 == -999999 && min2 == 999999){	// truong hop tat ca gia tri trong mang bang nhau
		printf("\nkhong tim thay trong mang!");
	}else{
		printf("\nmax2 = %d", max2);
		printf("\nmin2 = %d", min2);
	} 		
}

int main(){
	int x[100];
	int n;
	nhapMang(x, n);
	xuatMang(x, n);	
	timMinMax2(x, n);
}

/*
vi du:
	x[n] = 10, 5, 6, -1, 3
	max2 = 6
	min2 = 3
	----------------------
	x[n] = 1, 1, 1, 1, 1
	-> khong tim thay trong mang! 
*/

