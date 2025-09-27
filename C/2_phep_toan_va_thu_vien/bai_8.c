/*
Create on Sat Sep 27 2025 14:30
@author: ntdai

#8 BAI TAP TIM MAX, MIN GIUA 2 SO A, B
	Yeu cau: Nhap vao 2 so nguyen a, b tu ban phim. Hay xuat ra man hinh gia tri nho nhat va gia tri lon nhat giua 2 so a, b
*/

#include "stdio.h"

int main(){
	// khai bao bien
	int a, b, min, max;
	
	// nhap du lieu
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	
	// xu ly
	min = (a<b)?a:b;
	max = (a>b)?a:b;
	
	// xuat du lieu
	printf("MAX = %d\n", max);
	printf("MIN = %d", min);
} 
