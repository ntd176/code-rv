/*
Create on Mon Oct 13 2025 14:40
@author: ntdai

#29 LIET KE TAT CAC SO CHINH PHUONG NHO HON n
	So chinh phuong la tu nhien bang binh phuong cua mot so tu nhien khac
*/

#include "stdio.h"
#include "math.h"

int check_scp(int x){
	if (x<0)
		return 0;
	int can = sqrt(x);
	if (can*can == x){
		return 1;
	} else {
		return 0;
	}
}

int main(){
	int n;
	do {
		printf("nhap n = ");
		scanf("%d", &n);
	} while (n<1);
	
	int i;
	for(i=1; i<=n; i++){
		if(check_scp(i)==1){
			printf("%d\n", i);
		}
	}
}
