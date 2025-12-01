/*
	File		 : bai 6
	Author		 : Tien Dai Nguyen
	Init Time	 : 17:50
	Modifile Time: 17:55
	Date		 : 2025/11/30
	Modified Date: 2025/12/01
*/

#include "stdio.h"

int main(){
	long long n, a, b;
	scanf("%lld %lld %lld", &n, &a, &b);
	//----------------------------------
	long long cost;
	//----------------------------------
	if(b<2*a){
		cost = (n/2)*b + (n%2)*a;
	} else {
		cost = n*a;
	}
	printf("%lld", cost);
}


