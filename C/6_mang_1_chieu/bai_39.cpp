/*
Create on Tue Oct 21 2025 14:15
@author: ntdai

#40 SAP XEP MANG TANG DAN, GIAM DAN TRONG MANG 1 CHIEU
*/

#include "stdio.h"

void sapXepTangDan(int x[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){ // j la vi tri sau i
			if(x[i] > x[j]){ // so phia truoc > so phia sau
				// doi cho
				int temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			} 	
		}
	}
	printf("\nmang tang dan: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}

void sapXepGiamDan(int x[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){ 
			if(x[i] < x[j]){
				// doi cho
				int temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			} 	
		}
	}
	printf("\nmang giam dan: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}

int main(){
	int n;
	int x[100];
	do{
		printf("nhap so luong phan tu n (1<n<100): ");
		scanf("%d", &n);
	} while (n<1 || n>100);
	//---------------------
	// nhap du lieu cho mang
	printf("\nnhap du lieu cho mang: ");
	for(int i=0; i<n; i++){
		printf("\nx[%d] = ", i);
		scanf("%d", &x[i]);
	}
	//---------------------
	// xuat mang
	printf("\nx[n]: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
	//---------------------
	// goi ham sap xep tang dan
	sapXepTangDan(x, n);
	// goi ham sap xep giam dan
	sapXepGiamDan(x, n);
}
/*
Vi du tang dan:
	x[n] = {5, 3, 8, 1}
	  i     0, 1, 2, 3
	  j		   1, 2, 3
	loop 1: i = 0
	j	|		compare		|	change	|	result x[n]		|
	1	| x[0]=5 > x[1]=3	|	swap	|	3, 5, 8, 1		|
	2	| x[0]=3 < x[2]=8	|	!swap	|	3, 5, 8, 1		|
	3	| x[0]=3 > x[3]=1	|	swap	|	1, 5, 8, 3		|
-------------------------------------------------------------	
	loop 2: i = 1
	j	|		compare		|	change	|	result x[n]		|
	2	| x[1]=5 < x[2]=8	|	!swap	|	1, 5, 8, 3		|
	3	| x[1]=5 > x[3]=3	|	swap	|	1, 3, 8, 5		|
-------------------------------------------------------------	
	loop 3: i = 2
	j	|		compare		|	change	|	result x[n]		|
	3	| x[2]=8 > x[3]=5	|	swap	|	1, 3, 5, 8		|
=============================================================	
Vi du giam dan:
	x[n] = {5, 3, 8, 1}
	  i     0, 1, 2, 3
	  j		   1, 2, 3
	loop 1: i = 0
	j	|		compare		|	change	|	result x[n]		|
	1	| x[0]=5 > x[1]=3	|	!swap	|	5, 3, 8, 1		|
	2	| x[0]=5 < x[2]=8	|	swap	|	8, 3, 5, 1		|
	3	| x[0]=8 > x[3]=1	|	!swap	|	8, 3, 5, 1		|
-------------------------------------------------------------	
	loop 2: i = 1
	j	|		compare		|	change	|	result x[n]		|
	2	| x[1]=3 < x[2]=5	|	swap	|	8, 5, 3, 1		|
	3	| x[1]=3 > x[3]=1	|	!swap	|	8, 5, 3, 1		|
-------------------------------------------------------------	
	loop 3: i = 2
	j	|		compare		|	change	|	result x[n]		|
	3	| x[2]=3 > x[3]=1	|	!swap	|	8, 5, 3, 1		|
*/
