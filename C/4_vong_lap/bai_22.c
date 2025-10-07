/*
Create on Tue Oct 07 2025 15:12
@author: ntdai

#23 TIM UOC SO CHUNG LON NHAT
	Cach 1: giai thuat Euclid
			
*/

// cach 1
#include "stdio.h"
int main(){
	// khai bao 
	int a, b, r;
	// nhap du lieu
	printf("nhap a = ");
	scanf("%d", &a);
	printf("nhap b = ");
	scanf("%d", &b);
	// xu ly
	while(b!=0){
		r = a % b;
		a = b;
		b = r;
	}
	printf("UCLN = %d", a);
}

