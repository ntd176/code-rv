/*
Create on Wed Oct 22 2025 15:35
@author: ntdai

#5 TINH CHU VI, DIEN TICH HINH TRON	
*/

#include "stdio.h"
#include "math.h"

int main(){
	// khai bao
	int bk;	// ban kinh
	float cv, dt; // chu vi, dien tich
	float pi = 3.14;
	// nhap ban kinh 
	printf("nhap ban kinh r: ");
	scanf("%d", &bk);
	// chu vi
	cv = 2*pi*bk; // C = 2*pi*r
	dt = pi*pow(bk, 2); // S = 2*pi*(r^2)
	//-------------
	printf("\nchu vi = %.2f", cv);
	printf("\ndien tich = %.2f", dt);
}
