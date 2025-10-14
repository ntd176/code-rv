/*
Create on Tue Oct 14 2025 15:10
@author: ntdai

#32 LAP TRINH DE QUI, TINH GIAI THUA BANG DE QUI
	ham de quy gom 2 phan:
		dieu kien dung de thoat de quy
		goi de quy
	-----------------------------
	Tinh giai thua n! bang de quy
	n! = n x (n-1) x (n-2) x ...
	note: 0! = 1
	-----------------------------
	giaithua(4)
	-> 4 * giaithua(3)
	-> 4 * (3 * giaithua(2))
	-> 4 * (3 * (2 * giaithua(1)))
	-> 4 * (3 * (2 * 1))
	-> 24
*/
#include "stdio.h"

int giaithua(int n){
	if(n==0 || n==1) // dieu kien dung
		return 1;
	else 
		return n*giaithua(n-1); // goi de quy
}

int main(){
	int n;
	do{
		printf("nhap n: ");
		scanf("%d", &n);	
	} while(n<0);
	printf("%d! = %d", n, giaithua(n));
}

