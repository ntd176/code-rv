/*
Create on Thu Oct 23 2025 8:45
@author: ntdai

#7 CHUYEN DON VI DO C VA F	
*/

#include "stdio.h"

int main(){

	float C, F;
	
	printf("nhap nhiet do (C): ");
	scanf("%f", &C);
	
	F = (C * 9/5) + 32; 	
	printf("\nF = %.2f", F);
}
