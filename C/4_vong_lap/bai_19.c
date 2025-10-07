/*
Create on Tue Oct 07 2025 14:10
@author: ntdai

#20 VONG LAP for
	Cu phap:
		for(exp1; exp2; exp3){
			code thuc hien
		}
		Trong do:
			exp1: bieu thuc khoi tao
			exp2: bieu thuc dieu kien - dieu kien lap
			exp3: buoc nhay
*/

#include "stdio.h"

int main(){
	// xuat cac so tu 0->9 ra man hinh
	int i;
	for(i=0; i<=9; i++){
		printf("%d\n", i);
	}
	// xuat cac so tu 0->n ra man hinh
	int n;
	printf("nhap n = ");
	scanf("%d", &n);
	int k;
	for(k=0; k<=n; k++){
		printf("%d\n", k);
	}
}
