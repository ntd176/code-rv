/*
Create on Tue Oct 14 2025 15:10
@author: ntdai

#34 TINH FIBONACCI BANG HAM DE QUY
	Day Fibonacci:
		F(0) = 0, F(1) = 1
		F(n) = F(n-1) + F(n-2) khi n > 2
	------------------------------------
		|   n  | 0 | 1 | 2 | 3 | 4 |
		| F(n) | 0 | 1 | 1 | 2 | 3 |
	------------------------------------
*/

#include "stdio.h"

int fibonacci(int n){
	if(n==0)
		return 0; // F(0) = 0
	else if (n==1)
		return 1; // F(1) = 0
	else 
		return fibonacci(n-1) + fibonacci(n-2);		
}

int main(){
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	
	printf("fibonacci(%d) = %d", n, fibonacci(n));
}
