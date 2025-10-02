/*
Create on Thu Oct 02 2025 9:10
@author: ntdai

#18 TIM SO NGAY CUA THANG
	viet chuong trinh nhap vao thang, nam
	tim so ngay trong thang do va xuat ra mam hinh
	luu y:
		thang 2 (nam nhuan) co 29 ngay
		thang 2 (khong nhuan) co 28 ngay
		thang 1, 3, 5, 7, 8, 10, 12 co 31 ngay
		thang 4, 6, 9, 11 co 30 ngay
	goi y:
		cach kiem tra nam nhuan
			1, chia het cho 400
			2, chia het cho 4 va khong chia het cho 100
*/

#include "stdio.h"

int main(){
	int thang, nam;
	printf("nhap thang = ");
	scanf("%d", &thang);
	printf("nhap nam = ");
	scanf("%d", &nam);
	
	switch(thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("co 31 ngay");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("co 30 ngay");
			break;
		case 2:
			if ((nam%400==0) || (nam%4==0) && (nam%100!=0)){
				printf("co 29 ngay");
			} else {
				printf("co 28 ngay");
			}
			break;
		default:
			printf("nhap du lieu khong dung!");
	}
}

