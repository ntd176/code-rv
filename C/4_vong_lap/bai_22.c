/*
Create on Tue Oct 07 2025 15:12
@author: ntdai

#23 TIM UOC SO CHUNG LON NHAT
	Cach 1: giai thuat Euclid
	Cach 2: su dung phep tru
	Cach 3: su dung phep chia du
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

// cach 2
#include "stdio.h"
int main(){
	// nhap du lieu
	int a, b;
	printf("nhap a = ");
	scanf("%d", &a);
	printf("nhap b = ");
	scanf("%d", &b);
	// xu ly
	if(a==0 || b==0){
		printf("UCLN = %d", a+b);
	}while(a!=b){
		if(a>b){
			a=a-b;	
		}else{
			b=b-a;
		}
	}
	printf("UCLN = %d", a);
}

// cach 3
#include "stdio.h"
int main(){
	// nhap du lieu
	int a, b;
	printf("nhap a = ");
	scanf("%d", &a);
	printf("nhap b = ");
	scanf("%d", &b);
	// xu ly
	while(a*b != 0){
		if(a>b){
			a=a%b;
		}else{
			b=b%a;
		}
	}
	printf("UCLN = %d", a+b);
}

