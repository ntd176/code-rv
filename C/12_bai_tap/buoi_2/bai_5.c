/*
Create on Sun Nov 16 2025 22:25
@author: ntdai

# bai 5
*/

#include "stdio.h"
#include "stdlib.h"

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

/*
	TH1:
	a = 2, b = 1 -> d = 3
	s = 3
	--> "YES"
	---------------------
	TH2:
	a = 2, b = 1 -> d = 3
	s = 4
	--> "NO" 
	---------------------
	TH3:
	a = 0, b = 0 -> d = 0
	s = 2
	--> "YES" 
*/
