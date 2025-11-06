/*
Create on Wed Nov 5 2025 21:20
@author: ntdai

# bai 1 
*/

#include "stdio.h"
#include "math.h"

int main(){
	int S1, S2, S3;
	printf("nhap dien tich: ");
	scanf("%d %d %d", &S1, &S2, &S3);
	
	int a = sqrt(S1*S2/S3);
	int b = sqrt(S1*S3/S2);
	int c = sqrt(S2*S3/S1);
	
	int tong = 4*(a+b+c);
	
	printf("%d", tong);
}
