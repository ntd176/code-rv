/*
So hoan thien la so co tong cac uoc so cua no (khong ke no) bang chinh no
hay liet ke cac so hoan thien nho hon 5000.
6 la so hoan thien (6 = 1 + 2 + 3)
*/
#include "stdio.h"
int main(){
	int i, j, tong;
	printf("cac so hoan thien nho hon 5000:\n");
	
	for (i=1; i<5000; i++){ // duyet i tu 1->4999
		tong = 0;
		// tinh tong cac uoc so cua i 
		for (j=1; j<=i/2; j++){ // uoc cua i luon nho hon hoac bang i/2
			if (i%j==0)
				tong = tong + j;
		}
		if (tong == i)
			printf("%d ", i);
	}
}
