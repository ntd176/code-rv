/*
Create on Sat Nov 1 2025 15:00
@author: ntdai

#22 CHUYEN DOI NGAY SANG THANG, NAM, NGAY
nhap so ngay
thuc hien chuyen so ngay sang nam, tuan, ngay con lai

#include "stdio.h"
int main(){
	int so_ngay;
	int nam, tuan;
	// nhap so ngay
	printf("nhap so ngay: ");
	scanf("%d", &so_ngay);
	// tinh nam
	nam = so_ngay/365; // 1 nam = 365 ngay
	so_ngay = so_ngay % 365; // co ngay con lai khi tru di so nam
	// tinh tuan
	tuan = so_ngay/7; // 1 tuan = 7 ngay
	printf("%d nam, %d tuan", nam, tuan);
}
/*
so ngay = 400
nam = 400/365 = 1
so_ngay = 400%365 = 35
tuan = 35/7 = 5
*/
/*--------------
#23 SO THUOC DOAN
cho 1 doan dai so a, b
tinh so luong so nguyen trong doan [a,b]

#include "stdio.h"
#include "math.h"
int main(){
	//----------
	float a, b;
	int counter;
	//----------
	printf("nhap a = ");
	scanf("%f", &a);
	printf("nhap b = ");
	scanf("%f", &b);
	//-----------
	// gia su a <= b
	if (a>b){ // hoan doi a, b
		float temp = a;
		a = b;
		b = temp;
	}
	// ceil(a): lam tron len
	// ceil(2.6) = 3
	// floor(b): lam tron xuong
	// floor(9.2) = 9
	int start = ceil(a);
	int end = floor(b);
	if (start > end){
		counter = 0;
	} else {
		counter = end - start + 1;
	}
	printf("counter = %d", counter);
}
/*-------------
#24 PHEP CHIA
cho 3 so nguyen 64 bit a, b, c
in ra "/" neu a/b = c hoac b/c = a hoac c/a = b 
in ra "NOSOL" neu khong thoa man
*/
#include "stdio.h"
int main(){
	long long a, b, c;
	printf("nhap a, b, c: ");
	scanf("%lld %lld %lld", &a, &b, &c);
	if ((b!=0 && a/b==c && a==b*c)||
	    (c!=0 && b/c==a && b==a*c)||
	    (a!=0 && c/a==b && c==a*b)){
		printf("/");
	} else {
		printf("NOSOL");
	}
}
