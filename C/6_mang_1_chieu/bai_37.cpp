/*
Create on Sat Oct 18 2025 14:20
@author: ntdai

#38 LIET KE CAC PHAN TU THOA DIEU KIEN TRONG MANG 1 CHIEU
		LIET KE CAC SO NGUYEN TO
*/

#include "stdio.h"
#include "math.h"

// liet ke cac phan tu chan va chia het cho 3 trong mang
int lietKeChanChia3(int x[], int n){
	printf("\ncac phan tu chan va chia het cho 3: ");
	int check = 0;
	for(int i=0; i<n; i++){
		if(x[i]%2==0 && x[i]%3==0){	// so chan va chia het cho 3
			printf("%d ", x[i]);
			check = 1;
		}
	}
	if(check==0)
		printf("\nkhong co phan tu chan va chi het cho 3!");
}

// liet ke cac phan tu la so nguyen to trong mang (dung 2 ham)
int checkSNT(int x){
	if(x<2)
		return 0; // khong phai SNT
	for(int i=2; i<=sqrt(x); i++){
		if(x%i==0)
			return 0;
	}
	return 1; // SNT
}

int lietKeSNT(int x[], int n){
	printf("\ncac phan tu so nguyen to: ");
	int check;
	for(int i=0; i<n; i++){
		if(checkSNT(x[i])){
			printf("%d ", x[i]);
			check = 1; 	// co it nhat 1 SNT
		}
	}
	if(check==0)
		printf("\nkhong co SNT trong mang!");
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
	printf("\nnhap du lieu cho mang: ");
	for(int i=0; i<n; i++){
		printf("\nx[%d]= ", i);
		scanf("%d", &x[i]);
	}
	//--------------------
	// xuat mang
	printf("\nx[n]: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
	//--------------------
	// goi ham liet ke chan, chia het 3
	lietKeChanChia3(x, n);
	//--------------------
	// goi ham liet ke SNT
	lietKeSNT(x, n);
}
