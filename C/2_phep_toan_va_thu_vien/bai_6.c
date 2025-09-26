/*
Create on Fri Sep 26 2025 14:00
@author: ntdai

#6 TOAN TU SO SANH
	==, >, <, !=, >=, <=
	Ket qua so sanh: 1->true, 0->false
*/

#include "stdio.h"
int main(){
	int a, b;
	printf("Nhap vao a = ");
	scanf("%d", &a);
	printf("Nhap vao b = ");
	scanf("%d", &b);
	
	printf("%d == %d -> %d\n", a, b, a==b);
	printf("%d > %d -> %d\n", a, b, a>b);
	printf("%d >= %d -> %d\n", a, b, a>=b);
	printf("%d < %d -> %d\n", a, b, a<b);
	printf("%d <= %d -> %d\n", a, b, a<=b);
	printf("%d != %d -> %d", a, b, a!=b);
}
