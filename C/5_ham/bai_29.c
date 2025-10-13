/*
Create on Mon Oct 13 2025 15:25
@author: ntdai

#30 BAI TAP VE NGAY THANG NAM
	Viet chuong trinh nhap ngay, thang, nam
		a, Hay cho biet thang do co bao nhieu ngay
		b, Tinh xem ngay do la ngay thu bao nhieu trong nam
		c, Tim ngay truoc ngay vua nhap (ngay, thang, nam)
		d, Tim ngay ke ngay vua nhap (ngay, thang, nam)
*/

#include "stdio.h"

// check nam nhuan
int namNhuan(int nam){
	return ((nam%400 == 0) || (nam%4 == 0 && nam%100 != 0));
}

// so ngay trong thang
int soNgayTrongThang(int thang, int nam){
	switch(thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			if(namNhuan(nam)==1)
				return 29;
			else
				return 28;
		default:
			return 0; // thang khong hop le
	}
}

int ngayTrongNam(int ngay, int thang, int nam){
	int tong = 0;
	int i;
	for(i=1; i<thang; i++){
		tong = tong + soNgayTrongThang(i, nam);
	}
	tong = tong + ngay;
	return tong;
}

int main(){
	int ngay, thang, nam;
	do{
		printf("nhap ngay thang nam: ");
		scanf("%d %d %d", &ngay, &thang, &nam);
	} while (ngay<1 || ngay>31 || thang<1 || thang>12 || nam<1);
	
	// cau a
	printf("(a) thang %d nam %d co %d ngay\n", thang, nam, soNgayTrongThang(thang, nam));
	// cau b
	printf("(b) ngay %d thang %d nam %d la ngay thu %d", ngay, thang, nam, ngayTrongNam(ngay, thang, nam));
}
