/*
Create on Sat Sep 27 2025 15:15
@author: ntdai

#11 EP KIEU DU LIEU
	Cu phap: (type)value;
	Loai 1: Mo rong (short -> int -> long -> float -> double)
	Loai 2: Thu hep (double -> float -> long -> int -> short)
*/

#include "stdio.h"

int main(){
	int a, b;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	
	float kq_1 = (float)a/b;
	int kq_2 = (int)kq_1;
	
	printf("%d/%d=%.2f\n", a, b, kq_1);
	printf("kq_2 = %d", kq_2);
}
