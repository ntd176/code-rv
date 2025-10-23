/*
Create on Wed Oct 22 2025 22:00
@author: ntdai

#6 TINH KHOANG CACH	
*/

#include "stdio.h"
#include "math.h"

int main(){
	// khai bao
	int x1, y1;
	int x2, y2;
	float d;
 	// nhap toa do
	printf("nhap toa do diem A(x1, y1): ");
	scanf("%d %d", &x1, &y1);
	printf("\nnhap toa do diem B(x2, y2): ");
	scanf("%d %d", &x2, &y2);
	// tinh khoang cach
	d = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
	//-------------
	printf("\nd = %.2f", d);
}
