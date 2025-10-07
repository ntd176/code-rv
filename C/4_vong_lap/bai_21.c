/*
Create on Tue Oct 07 2025 14:42
@author: ntdai

#22 VONG LAP while
	while(exp){
		code thuc hien
	}
*/

// Nhap n tu ban phim, tinh tong cac con so tu 1 den n va xuat ket qua

#include "stdio.h"

int main(){
	int n;
	int tong = 0;
	printf("nhap n = ");
	scanf("%d", &n);
	
	int i=0;
	while(i<=n){
		tong = tong + i;
		i++;
	}	
	printf("tong = %d\n", tong);
}

