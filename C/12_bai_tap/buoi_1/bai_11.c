/*
Create on Tue Oct 28 2025 9:35
@author: ntdai

#13 KIEM TRA CHU IN THUONG
nhap vao ky tu c.
in ra YES neu la chu thuong va nguoc lai
	A: NO
	a: YES
	%: NO
*/
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
/*------------------------
#14 KIEM TRA CHU IN THUONG
nhap vao ky tu c.
in ra YES neu la chu hoa va nguoc lai
	A: YES
	a: NO
	%: NO
*/
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
/*------------------
#15 KIEM TRA CHU CAI
nhap vao ky tu c.
in ra YES neu la chu cai va nguoc lai
	A: YES
	a: YES
	1: NO
	%: NO
*/
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
/*-----------------
#16 KIEM TRA CHU SO
nhap vao ky tu c.
in ra YES neu la chu so va nguoc lai
	A: YES
	a: YES
	1: NO
	%: NO
*/
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
}
/*-------------------------------
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
	// Bang ma ASCII
	// Chu hoa: 'A' -> 'Z': 65->90
	// Chu thuong: 'a' -> 'z': 97->122
	if (c>='A' && c<='Z'){
		c = c + 32; // hoa sang thuong
	}
	printf("ky tu sau khi chuyen: %c", c);
}
/*-------------------------------
#18 CHUYEN KY TU THUONG THANH HOA
nhap vao ky tu c.
Neu ky tu nhap la chu thuong thi in ra chu hoa tuong ung, nguoc lai thi khong thay doi ky tu ban dau
*/
#include "stdio.h"
int main(){
	char c;
	printf("nhap ky tu: ");
	scanf("%c", &c);
	//--------------
	// Bang ma ASCII
	// Chu hoa: 'A' -> 'Z': 65->90
	// Chu thuong: 'a' -> 'z': 97->122
	if (c>='a' && c<='z'){
		c = c - 32; // hoa sang thuong
	}
	printf("ky tu sau khi chuyen: %c", c);
}
/*-------------------------------
#19 CHU CAI KE TIEP
Nhap vao ky tu c.
Neu ky tu nhap la chu cai thi in ra chu cai tuong ung ke tiep o dang chu thuong, ta coi chu cai ke tiep cua z la a.
Neu ky tu nhap vao khong phai la chu cai thi xuat ra INVALID.
*/
#include "stdio.h"
int main(){
	char c;
	printf("nhap ky tu: ");
	scanf("%c", &c);
	//--------------
	// Bang ma ASCII
	// Chu hoa: 'A' -> 'Z': 65->90
	// Chu thuong: 'a' -> 'z': 97->122
	if ((c>='a' && c<='z') || (c>='A' && c<='Z')){
		// chuyen ve chu thuong
		if (c>='A' && c<='Z')
			c = c + 32;
		// tim chu cai ke tiep
		if (c=='z')
			c = 'a';
		else 
			c = c + 1;
	}
	printf("ky tu sau khi chuyen: %c", c);
}
