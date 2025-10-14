/*
Create on Tue Oct 14 2025 14:15
@author: ntdai

#31 TRUYEN THAM CHIEU & THAM TRI
	Viet chuong trinh nhap hai so nguyen a, b.
	Viet ham hoan doi gia tri giua hai bien a, b va xuat ket qua ra man hinh
*/

#include "stdio.h"

// khong thay doi gia tri
void thamTri(int a, int b){
	int tam = a;
	a = b;
	b = tam;
}

// thay doi gia tri
void thamChieu(int a, int b){
	int tam = a;
	a = b;
	b = tam;
}

int main(){
	int a, b;
	printf("nhap 2 so a, b: ");
	scanf("%d %d", &a, &b);	
	
	printf("\ngia tri ban dau: a = %d va b = %d", a, b);
	thamTri(a, b);
	printf("\nhoan doi <-> truyen tham tri: a = %d va b = %d", a, b); // khong doi
	thamChieu(a, b);
	printf("\nhoan doi <-> truyen tham chieu: a = %d va b = %d", a, b); // thay doi
}
