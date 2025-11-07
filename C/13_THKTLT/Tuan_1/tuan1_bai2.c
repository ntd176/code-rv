/*
viet chuong trinh thuc hien bieu thuc sau:
S(n) = 1 + 2! + 3! + ... + n! voi n > 0
*/
#include "stdio.h"
int main(){
	int n, i, j;
	int S=0, gt;
	printf("nhap n: ");
	scanf("%d", &n);
	
	if (n<=0){
		printf("khong hop le!");
	} 
	
	for (i=1; i<=n; i++){
		gt = 1;
		for (j=1; j<=i; j++){
		gt = gt*j;
		}
		S = S + gt;	
	}
	printf("S(%d) = %d", n, S);
}
