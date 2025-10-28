/*
Create on Tue Oct 28 2025 9:35
@author: ntdai

#13 KIEM TRA CHU IN THUONG
nhap vao ky tu c.
in ra YES neu la chu thuong va nguoc lai
	A: NO
	a: YES
	%: NO
*//*
#include "stdio.h"
int main(){
	char c;
	printf("nhap ky tu: ");
	scanf("%c", &c);
	//--------------
	if (c>='a' && c<='z'){ // chu thuong
		printf("\nYES");
	} else {
		printf("\nNO");
	}
}
*/
/*
#14 KIEM TRA CHU IN THUONG
nhap vao ky tu c.
in ra YES neu la chu hoa va nguoc lai
	A: YES
	a: NO
	%: NO
*//*
#include "stdio.h"
int main(){
	char c;
	printf("nhap ky tu: ");
	scanf("%c", &c);
	//--------------
	if (c>='A' && c<='Z'){ // chu hoa
		printf("\nYES");
	} else {
		printf("\nNO");
	}
}
*//*
#15 KIEM TRA CHU CAI
nhap vao ky tu c.
in ra YES neu la chu cai va nguoc lai
	A: YES
	a: YES
	1: NO
	%: NO
*//*
#include "stdio.h"
int main(){
	char c;
	printf("nhap ky tu: ");
	scanf("%c", &c);
	//--------------
	if ((c>='a' && c<='z') || (c>='A' && c<='Z')){ // chu cai
		printf("\nYES");
	} else {
		printf("\nNO");
	}
}
*//*

#16 KIEM TRA CHU SO
nhap vao ky tu c.
in ra YES neu la chu so va nguoc lai
	A: YES
	a: YES
	1: NO
	%: NO
*//*
#include "stdio.h"
int main(){
	char c;
	printf("nhap ky tu: ");
	scanf("%c", &c);
	//--------------
	if (c>='0' && c<='9'){ // chu so
		printf("\nYES");
	} else {
		printf("\nNO");
	}
}*/
/*
#17 CHUYEN KY TU HOA THANH THUONG
nhap vao ky tu c.
Neu ky tu nhap la chu hoa thi in ra chu thuong tuong ung, nguoc lai thi khong thay doi ky tu ban dau
*/
#include "stdio.h"
int main(){
	char c;
	printf("nhap ky tu: ");
	scanf("%c", &c);
	//--------------
	if (c>='A' && c<='Z'){
		c = c + 32;
	}
	printf("ky tu sau khi chuyen: %c", c);
}
