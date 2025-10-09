/*
Create on Thu Oct 09 2025 14:36
@author: ntdai

#25 TINH GIAI THUA CUA SO NGUYEN n
*/

//#include "stdio.h"
//int main(){
//	int n, i;
//	printf("nhap n = ");
//	scanf("%d", &n);
//	
//	if(n==0){
//		printf("0! = 1");
//	} else {
//		int giaithua = 1;
//		for (i=1; i<=n; i++){
//			giaithua = giaithua * i;
//		}
//	printf("%d! = %d", n, giaithua);
//	}
//}

#include "stdio.h"
int main(){
	int n, i, giaithua;
	
	do{
		printf("nhap n = ");
		scanf("%d", &n);	
	} while (n<0);
	
	giaithua = 1;
	for(i=1; i<=n; i++){
		giaithua = giaithua * i;
	}
	printf("%d! = %d", n, giaithua);
}
