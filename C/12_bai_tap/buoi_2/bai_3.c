/*
Create on Sun Nov 9 2025 16:40
@author: ntdai

# bai 3
*/

#include "stdio.h"

int main(){
	int n, m, a;
	scanf("%d %d %d", &n, &m, &a);
	
	int result_n = (n+a-1)/a;
	int result_m = (m+a-1)/a;
	int result_all = result_m*result_n;
	
	printf("%d\n", result_n);
	printf("%d\n", result_m);
	printf("%d", result_all);
}
