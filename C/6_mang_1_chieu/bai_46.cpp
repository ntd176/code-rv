/*
Create on Wed Oct 29 2025 21:50
@author: ntdai

#47 TRON 2 MANG MOT CHIEU
*/

#include "stdio.h"

// nhap mang
void nhapMang(int x[], int &n){
	do {
		printf("nhap so luong phan tu: ");
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
// sap xep tang dan
void sapXepTangDan(int x[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(x[i]>x[j]){
				int temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
}
// tron mang
void tronMang(int x1[], int n_x1, int x2[], int n_x2, int x3[], &int n_x3){
	n_x3 = n_x1 + n_x2;
	int i1 = 0;
	int i2 = 0;
	int i3 = 0;
	while (i3<n_x3){
		if(i1>n_x1){
			x[i3]=x2[i2];
		} else if (i2>=n_x2){
			x[i3]=x1[i1];
			i1++;
		} else if (x1[i1]<x2[i2]){
			x3[i3]=x1[i1];
			i1++;
		} else {
			x3[i3]=x2[i2];
			i2++;
		}
		i3++;
	}
}

int main(){

}
