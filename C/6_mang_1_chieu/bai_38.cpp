/*
Create on Mon Oct 20 2025 21:15
@author: ntdai

#39 TIM MAX, MIN TRONG MANG 1 CHIEU
*/

#include "stdio.h"

// ham tim MAX, MIN
void timMaxMin(int x[], int n){
	int max = x[0];
	int min = x[0];
	for(int i=1; i<n; i++){
		if (x[i] > max)
			max = x[i];
		if (x[i] < min)
			min = x[i];
	}
	printf("\ngia tri lon nhat: %d", max);
	printf("\ngia tri nho nhat: %d", min);
}

int main(){
	int n;
	int x[100];
	do{
		printf("nhap so luong phan tu n (1<n<100): ");
		scanf("%d", &n);
	} while (n<1 || n>100);
	//---------------------
	// nhap du lieu cho mang
	printf("\nnhap du lieu cho mang: ");
	for(int i=0; i<n; i++){
		printf("\nx[%d] = ", i);
		scanf("%d", &x[i]);
	}
	//---------------------
	// xuat mang
	printf("\nx[n]: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
	//---------------------
	// goi ham
	timMaxMin(x, n);
}
/*
x[n]= {5, 9, 2, 11, 4}
	start: 		max = 5, min = 5
	compare:	9 > max -> max = 9
				2 < min -> min = 2
				11 > max -> max = 11
				4 -> khong thay doi
	end:		max = 11, min = 2
*/
