/*
Create on Fri Nov 14 2025 22:25
@author: ntdai

# bai 5
*/

#include "stdio.h"

int main(){
	long long a, b, s;
	if(scanf("%lld %lld %lld", &a, &b, &s) != 3)
		return 0;
	
	long long d = llabs(a) + llabs(b);
	
	if (s<d){
		printf("No");
	} else {
		long long diff = s - d;
		if (diff%2==0)
			printf("Yes");
		else
			printf("No");
	}
}
