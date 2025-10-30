/*
Create on Wed Oct 29 2025 21:50
@author: ntdai

#47 TRON 2 MANG MOT CHIEU
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
void tronMang(int a[], int n1, int b[], int n2, int c[], int &n3){
	// n1, n2, n3: so phan tu mang a, b, c
	int i = 0;
	int j = 0;
	int k = 0;
	// tron khi 2 mang con phan tu
	while (i<n1 && j<n2){
		if (a[i] < b[j]){
			c[k] = a[i];
			i++;
		} else {
			c[k] = b[j];
			j++;
		}
		k++;
	}
	// neu mang a con phan tu
	while (i<n1){
		c[k]=a[i];
		i++;
		k++;	
	}
	// neu mang b con phan tu
	while (j<n2){
		c[k]=b[j];
		j++;
		k++;	
	}
	n3 = k;
}

int main(){
	int a[100], b[100], c[200];
	int n1, n2, n3;
	
	printf("=== nhap mang a ===\n");
	nhapMang(a, n1);
	
	printf("=== nhap mang b ===\n");
	nhapMang(b, n2);
	
	sapXepTangDan(a, n1);
	sapXepTangDan(b, n2);
	
	printf("mang a sau khi sap xep: ");
	xuatMang(a, n1);
	printf("\nmang b sau khi sap xep: ");
	xuatMang(b, n2);
	
	tronMang(a, n1, b, n2, c, n3);
	printf("\nmang sau khi tron sap xep tang: ");
	xuatMang(c, n3);
}
