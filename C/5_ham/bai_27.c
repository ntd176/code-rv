/*
Create on Sun Oct 12 2025 15:20
@author: ntdai

#28 LIET KE TAT CAC SO NGUYEN TO NHO HON BANG n
*/

#include "stdio.h"
#include "math.h"

int check_snt(x){
	int i; 
	if (x<2){
		return 0;
	} else {
		for(i=2; i<=(int)sqrt(x); i++){
			if(x%i==0)
				return 0;
		}
		return 1;
	}
}

int main(){
	int n;
	do {
		printf("nhap n = ");
		scanf("%d", &n);
	} while(n<1);
	
	int j;
	for(j=2; j<n; j++){
		if(check_snt(j)){
			printf("%d\n", j);
		}
	}
}
