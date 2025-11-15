/*
Create on Sat Nov 15 2025 22:30
@author: ntdai

#50 NHAP VA XUAT MANG HAI CHIEU 
*/

#include "stdio.h"

// nhap mang
void nhapMang(int x[], int &n, char tenMang){
	do {
		printf("nhap so luong phan tu (0<n<100): ", tenMang);
		scanf("%d", &n);
	} while (n<1 || n>100);
	//---------------------
	printf("nhap du lieu cho mang:\n");
	for(int i=0; i<n; i++){
		printf("%c[%d] = ", tenMang, i);
		scanf("%d", &x[i]);
	}
}
// xuat mang
void xuatMang(int x[], int n, char tenMang){
	printf("Mang %c: ", tenMang);
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
	printf("\n");
}
// check B la mang con cua A khong ?
int checkMangCon(int a[], int n1, int b[], int n2){
	// n1, n2 lan luot la so phan tu mang A, B
	if (n2>n1)
		return 0;
	for (int i=0; i<=n1-n2; i++){
		// debug 
		printf("so sanh tai %d: ", i);
		int j;
		for (int j=0; j<n2; j++){
			printf("%d-%d ", a[i+j], b[j]);
		}
		printf("\n");
		//-----------
		for (j=0; j<n2; j++){
			if (a[i+j] != b[j])
				break; // chi can 1 phan tu khac la stop
		}
		if (j==n2)
			return 1; // mang con
	}
	return 0; // khong phai mang con
}

int main(){
	int a[100], b[100];
	int n1, n2;
	
	nhapMang(a, n1, 'A');
	xuatMang(a, n1, 'A');
	nhapMang(b, n2, 'B');
	xuatMang(b, n2, 'B');
	
	if (checkMangCon(a, n1, b, n2)){
		printf("Mang con");
	} else {
		printf("Khong phai mang con");
	}
}
/*
vi du

*/
