/*
Create on Sat Nov 1 2025 15:00
@author: ntdai

#22 CHUYEN DOI NGAY SANG THANG, NAM, NGAY
nhap so ngay
thuc hien chuyen so ngay sang nam, tuan, ngay con lai
*/
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
*/
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
/*-------------
#25 KET QUA HOC TAP
*/
#include "stdio.h"
int main(){
	float d1, d2, d3, d4;
	float tongKet;
	// nhap diem
	printf("nhap diem he so 1 thu 1: ");
	scanf("%f", &d1);
	printf("nhap diem he so 1 thu 2: ");
	scanf("%f", &d2);
	printf("nhap diem he so 2: ");
	scanf("%f", &d3);
	printf("nhap diem he so 3: ");
	scanf("%f", &d4);
	// tinh diem tong ket
	tongKet = (d1*1 + d2*1 + 2*d3 + d4*3) / (1+1+2+3);
	// xuat ket qua
	printf("diem tong ket = %.2f\n", tongKet);
	if (tongKet>=8)
		printf("gioi\n");
	else if (tongKet>=6.5)
		printf("kha\n");
	else if (tongKet>=5)
		printf("trung binh\n");
	else 
		printf("yeu\n");
}
/*-------------
#26 SO NHO THU 2
cho 5 so nguyen a, b, c, d, e 64 bit doi mot khac nhau
in ra so nho thu 2
*/
#include "stdio.h"
int main(){
	long long a, b, c, d, e;
	long long min1, min2;
	// nhap du lieu
	printf("nhap 5 so nguyen 64 bit:\n");
	scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &e);
	// min1 la so nho nhat
	// min2 la so nho thu hai
	// gia su
	min1 = a;
	min2 = b;
	// neu b < a thi doi cho
	if (min2<min1){
		long long temp = min1;
		min1 = min2;
		min2 = temp;
	}
	// so sanh voi c, d, e
	long long arr[3] = {c, d, e};
	int i;
	for(i=0; i<3; i++){
		if(arr[i]<min1){
			min2 = min1;
			min1 = arr[i];
		} else if (arr[i]>min2 && arr[i]<min1) {
			min2 = arr[i];
		}
	}
	printf("min2 = %lld", min2);
}
