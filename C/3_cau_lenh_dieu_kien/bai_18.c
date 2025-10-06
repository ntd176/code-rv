/*
Create on Sat Oct 04 2025 15:15
@author: ntdai

#19 TINH DIEN TICH, CHU VI TAM GIAC
	Viet chuong trinh nhap vao toa do 3 dinh cua tam giac ABC, hay thuc hien cac yeu cau sau:
	
		a, Kiem tra 3 diem A, B, C co tao thanh tam giac khong?
		   neu A, B, C tao thanh tam giac thi tiep cac yeu cau b, c, d
		   
		b, Kiem tra tam giac ABC co phai tam giac can hay khong? 
		
		c, Tinh va xuat ra man hinh chu vi cua tam giac ABC
		
		d, Tinh va xuat ra man hinh dien tich cua tam giac ABC
----------------------------------------------------------------------
	Toa do cac diem:
		A(xa, ya)
		B(xb, yb)
		C(xc, yc)
		
	Tinh khoang cach
		AB = sqrt(pow(xb-xa, 2) + pow(yb-ya, 2));
		AC = sqrt(pow(xc-xa, 2) + pow(yc-ya, 2));
		BC = sqrt(pow(xc-xb, 2) + pow(yc-yb, 2));
		
	-> Tao thanh tam giac: AB+BC>AC va AB+AC>BC va BC+AC>AB
	
	--> Tam giac can: AB==AC || BC==AB || AC==BC
	
	---> Chu vi: AB + AC + BC
	
	----> Dien tich tinh theo cong thuc heron
			p = chuvi/2
			s = sqrt(p*(p-AB)*(p-AC)*(p-BC))
*/

#include "stdio.h"
#include "math.h"

int main(){
	// khai bao
	float xa, ya, xb, yb, xc, yc;
	float AB, AC, BC;
	float cv, p, dt;

	// nhap du lieu
	printf("nhap toa do diem A: \n");
	scanf("%f %f", &xa, &ya);
	printf("nhap toa do diem B: \n");
	scanf("%f%f", &xb, &yb);
	printf("nhap toa do diem C: \n");
	scanf("%f%f", &xc, &yc);
	
	// xu ly -> xuat ket qua
	// tinh do dai canh tam giac AB, AC, BC
	printf("do dai cac canh tam giac\n");
	AB = sqrt(pow(xb-xa, 2) + pow(yb-ya, 2));
	printf("AB = %.2f\n", AB);
	AC = sqrt(pow(xc-xa, 2) + pow(yc-ya, 2));
	printf("AC = %.2f\n", AC);
	BC = sqrt(pow(xc-xb, 2) + pow(yc-yb, 2));
	printf("BC = %.2f\n", BC);
	
	// check tam giac
	if(AB+AC>BC && AB+BC>AC && AC+BC>AB){
		printf("ABC tao thanh tam giac\n");
		
		// kiem tra ABC can
		if(AB==AC || AB==BC || AC==BC){
			printf("ABC la tam giac can\n");
		} else {
			printf("ABC khong phai tam giac can\n");
		}
	// chu vi
	cv = AB + AC + BC;
	printf("chu vi tam giac ABC = %.2f\n", cv);
	
	// dien tich
	p = cv/2;
	dt = sqrt(p*(p-AB)*(p-AC)*(p-BC));
	printf("dien tich tam giac ABC = %.2f", dt);
	
	} else {
		printf("ABC khong tao thanh tam giac");
	}
}
