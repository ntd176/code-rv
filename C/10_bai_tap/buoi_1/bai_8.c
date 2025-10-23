/*
Create on Thu Oct 23 2025 8:50
@author: ntdai

#8 TINH TONG

	Sn1 = 1 + 2 + 3 + 4 + ... + n => Sn = (n*(n+1))/2
	
	Sn2 = 1^2 + 2^2 + 3^2 + 4^2 + ... + n^2 => Sn = (n*(n+1)*(2n+1))/6

	Sn3 = 1/1*2 + 1/2*3 + 1/3*4 + ... + 1/n*(n+1) => Sn = n/(n+1) 

	Sn4 = 2 + 4 + 6 + 8 + ... +2*n => Sn = n*(n+1)
	
	Sn5 = -1 + 2 - 3 + 4 - 5 + 6 + …. + ((-1)^n)*n
*/

// Tinh Sn1
#include "stdio.h"
int main(){
	// dung cong thuc
	int n, S1;
	printf("nhap n: ");
	scanf("%d", &n);
	S1 = (n*(n+1))/2;
	printf("Sn1 = %d", S1);
	// dung vong lap
	int n;
	int S1 = 0;
	printf("nhap n: ");
	scanf("%d", &n);
	int i;
	for(i=1; i<=n; i++){
		S1 = S1 + i;
	}
	printf("Sn1 = %d", S1);
}
//------------------------
// Tinh Sn2
#include "stdio.h"
int main(){
	// dung cong thuc
	int n, S2;
	printf("nhap n: ");
	scanf("%d", &n);
	S2 = (n*(n+1)*(2*n+1))/6;
	printf("Sn2 = %d", S2);
	// dung vong lap
	int n;
	int S2 = 0;
	printf("nhap n: ");
	scanf("%d", &n);
	int i;
	for(i=1; i<=n; i++){
		S2 = S2 + i*i; // cong i^2
	}
	printf("Sn2 = %d", S2);
}
//------------------------
// tinh Sn3
#include "stdio.h"
int main(){
	// dung cong thuc
	int n;
	float S3;
	printf("nhap n: ");
	scanf("%d", &n);
	S3 = (float)n/(n+1);
	printf("Sn3 = %.2f", S3);
	// dung vong lap
	int n;
	float S3 = 0;
	printf("nhap n: ");
	scanf("%d", &n);
	int i;
	for(i=1; i<=n; i++){
		S3 = (float)S3 + (float)1/(i*(i+1));
	}
	printf("Sn3 = %.2f", S3);
}
//------------------------
// Tinh Sn4
#include "stdio.h"
int main(){
	// dung cong thuc
	int n, S4;
	printf("nhap n: ");
	scanf("%d", &n);
	S4 = n*(n+1);
	printf("Sn4 = %d", S4);
	// dung vong lap
	int n;
	int S4 = 0;
	printf("nhap n: ");
	scanf("%d", &n);
	int i;
	for(i=1; i<=n; i++){
		S4 = S4 + 2*i;
	}
	printf("Sn4 = %d", S4);
}
//------------------------
// Tinh Sn5
#include "stdio.h"
#include "math.h"
int main(){
	// ((-1)^i)*i
		// i chan -> dau +
		// i le -> dau -
	int n;
	int S5 = 0;
	printf("nhap n: ");
	scanf("%d", &n);
	int i;
	for(i=1; i<=n; i++){
		S5 = S5 + pow(-1, i)*i; // cong xen ke dau
	}
	printf("Sn5 = %d", S5);
	// dung vong lap
	int n;
	int S5 = 0;
	printf("nhap n: ");
	scanf("%d", &n);
	int i;
	for(i=1; i<=n; i++){
		if(i%2==0)
			S5 = S5 + i; // chan -> cong
		else 
			S5 = S5 - i; // le -> tru
	}
	printf("Sn5 = %d", S5);
}
