/*
Create on Tue Oct 28 2025 15:30
@author: ntdai

#20 TAM GIAC HOP LE
nhap do dai 3 canh tam giac a, b, c
in ra YES neu tam giac hop le, nguoc lai in NO
*/
#include "stdio.h"
int main(){
	int a, b, c;
	printf("nhap a: ");
	scanf("%d", &a);
	printf("nhap b: ");
	scanf("%d", &b);
	printf("nhap c: ");
	scanf("%d", &c);
	//--------------
	if ((a+b>c) && (a+c>b) && (b+c>a)){
		printf("YES");
	} else {
		printf("NO");
	}
}
/*-----------------
#21 KIEM TRA TAM GIAC
nhap do dai 3 canh tam giac a, b, c
in ra INVALID neu tam giac khong hop le
in ra 1 neu tam giac DEU
in ra 2 neu tam giac CAN
in ra 3 neu tam giac VUONG
in ra 4 neu tam giac THUONG
*/

#include "stdio.h"
#include "math.h"

int main(){
	int a, b, c;
	printf("nhap a: ");
	scanf("%d", &a);
	printf("nhap b: ");
	scanf("%d", &b);
	printf("nhap c: ");
	scanf("%d", &c);
	//--------------
	if(a+b>c && a+c>b && b+c>a){
		// tam giac deu
		if (a==b && b==c){ 
			printf("1");
		// tam giac can
		} else if (a==b || b==c || c==a){
			printf("2");
		// tam giac vuong
		} else if (pow(a, 2)+pow(b, 2)==pow(c, 2) ||
				   pow(a, 2)+pow(c, 2)==pow(b, 2) ||
				   pow(b, 2)+pow(c, 2)==pow(a, 2)){
			// a^2+b^2=c^2 or a^2+c^2=b^2 or b^2+c^2=a^2
			printf("3");
		} else {
			printf("4");
		}
	} else {
		printf("INVALID");
	}
}

