/*
Create on Mon Sep 29 2025 14:55
@author: ntdai

#12 THU VIEN Math.h VA CAC HAM TOAN HOC
	1, ceil(number) -> lam tron len mot so da cho
	2, floor(number) -> lam tron xuong mot so da cho
	3, sqrt(number) -> can bac hai cua mot so da cho
	4, pow(base, exponent) -> so mu
	5, abs(number) -> gia tri tuyet doi
	...
*/

#include "stdio.h"
#include "math.h"

int main(){
	int a = 5;
	int b = 2;
	
	float kq = (float)a/b;
	
	printf("floor(a/b) = %f\n", floor(kq));
	printf("ceil(a/b) = %f\n", ceil(kq)); 
	printf("sqrt(a/b) = %f\n", sqrt(kq)); 
	printf("5^2 = %f\n", pow(5,2)); 
	printf("|5| = %d", abs(5));
}
