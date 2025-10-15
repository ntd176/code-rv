/*
Create on Tue Oct 14 2025 15:10
@author: ntdai

#33 CHUYEN DOI TU HE THAP PHAN SANG HE NHI PHAN
*/

#include "stdio.h"

void nhiPhan(int x){
	if(x==0)
		return;
	else 
		nhiPhan(x/2);
		printf("%d", x%2);		
}

int main(){
	int n;
	do {
		printf("nhap n: ");
		scanf("%d", &n);
	}while(n<=0);
	
	nhiPhan(n);
}
