/*
Create on Fri Sep 26 2025 14:30
@author: ntdai

#7 TOAN TU DIEU KIEN
	bieu_thu_1 ? bieu_thuc_2 : bieu_thuc_3;
		Neu bieu_thuc_1 DUNG, thi bieu_thuc_2 duoc tinh toan va tro thanh gia tri cua toan bo bieu thuc
		va nguoc lai
	Vi du:
		x = (5>=3) ? 1 : 0;		-> x = 1
		y = (5<=3) ? 1 : 0;		-> y = 0
*/

#include "stdio.h"

int main(){
	int a;
	printf("Nhap vao a = ");
	scanf("%d", &a);
	
	printf("%d la so %s", a, (a%2==0)?"CHAN":"LE");
}
