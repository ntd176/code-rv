/*
Create on Thu Oct 09 2025 14:24
@author: ntdai

#24 VONG LAP do while
	do {
		
	} while ();
*/

// Viet chuong trinh hien thi menu:
	// Nhap so 0 de thoat
	// Nhap bat ky ki tu khac 0 de tiep tuc

#include "stdio.h"

int main(){
	int c;
	do {
		printf("MENU\n");
		printf("Nhap so 0 de thoat menu\n");
		printf("Nhap so bat ky khac 0 de tiep tuc\n");
		scanf("%d", &c);
	} while (c!=0);
}
