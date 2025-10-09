/*
Create on Thu Oct 09 2025 15:33
@author: ntdai

#26 LENH goto, continue
*/

#include "stdio.h"

int main(){
	int n, i;
	
	nhap:
		printf("nhap n = ");
		scanf("%d", &n);
	if(n<=0) goto nhap;
	
	printf("so le: \n");
	for(i=1; i<=n; i++){
		if(i%2==0) continue; // bo qua neu i la so chan
		printf("%d\n", i);
	}
}
