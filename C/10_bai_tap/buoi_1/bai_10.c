/*
Create on Fri Oct 24 2025 20:25
@author: ntdai

#10 KIEM TRA SO CHIA HET CHO 3 VA 5
nhap vao so nguyen n.
in ra 1 neu n chia het cho 3 va 5, nguoc lai in ra 0.
*/
#include "stdio.h"
int main(){
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	if(n%3==0 && n%5==0)
		printf("1");
	else
		printf("0");
}
/*
#11 KIEM TRA NAM NHUAN
Nam nhuan la nam chia het cho 400 hoac (chia het cho 4 va khong chia het cho 100)
In ra INVALID neu n la so nguyen am hoac so 0. Neu n la nam nhuan, in ra YES, nguoc lai in ra NO
*/
#include "stdio.h"
int main(){
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	if(n<0){
		printf("INVALID");
	} else if (n%400==0 || (n%4==0) && (n%100!=0)){
		printf("YES");
	} else {
		printf("NO");
	}
}
/*
#13 IN RA SO NGAY CUA THANG
Nhap 2 so nguyen thang, nam. Neu thang va nam nhap vao khong hop le in ra INVALID, nguoc lai in ra so ngay trong nam.
Chu y thang 2 cua nam nhuan co 29 ngay.
*/
#include "stdio.h"
int main(){
	int thang, nam;
	printf("nhap thang: ");
	scanf("%d", &thang);
	printf("nhap nam: ");
	scanf("%d", &nam);
	
	switch(thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 ngay");
			break;
		case 4: 
		case 6:
		case 9:
		case 11:
			printf("30 ngay");
			break;
		case 2:
			if((nam%400==0) || (nam%4==0) && (nam%100!=0)){
				printf("29 ngay");
			} else {
				printf("28 ngay");
			}
			break;
		default:
			printf("INVALID");
	}
}
