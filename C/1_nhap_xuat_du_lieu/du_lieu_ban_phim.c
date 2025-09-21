/*
Create on Sun Sep 21 2025 16:10
@author: ntdai

NHAP DU LIEU TU BAN PHIM
Su dung thu vien stdio.h -> ham scanf()
scanf("format_string", argument_address_list);
	format_string:
		%d -> so nguyen
		%c -> ky tu
		%s -> chuoi
		%f -> float
	dia chi cua bien: &ten_bien
*/

#include "stdio.h"

int main(){
	int x;
	float y;
	char c;
	
	// nhap so nguyen
	printf("nhap vao gia tri cua x: ");
	scanf("%d", &x);
	printf("gia tri x vua nhap la: %d\n", x);
	
	// nhap so thuc
	printf("nhap vao gia tri cua y: ");
	scanf("%f", &y);
	printf("gia tri y vua nhap la: %.2f\n", y);
	
	// nhap ky tu
	printf("nhap vao ky tu: \n");
	scanf(" %c", &c); // phai space truoc %c -> do \n o phia tren sau khi enter duoc luu buffer
					  // dan den khi den ham scanf doc gia tri buffer \n -> ket thuc
	printf("ky tu vua nhap la: %c\n", c);
	
	// nhap nhieu du lieu cung 1 hang
	float x1, x2, x3;
	printf("nhap gia tri x1, x2, x3\n");
	scanf("%f%f%f", &x1, &x2, &x3);
	printf("x1=%f, x2=%f, x3=%f", x1, x2, x3);
}
