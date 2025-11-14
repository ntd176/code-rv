/*
Create on Fri Nov 14 2025 22:00
@author: ntdai

# bai 4
*/

#include "stdio.h"

int main(){
	long long a, b, k;
	scanf("%d %d %d", &a, &b, &k);
	
	long long p = k/2;
	long long pos = p*(a-b);
	
	if (k%2==1)
		pos = pos + a;
	
	printf("%lld", pos);
}
