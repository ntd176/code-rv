/*
Create on Wed Oct 01 2025 8:00
@author: ntdai

#13 CAU LENH DIEU KIEN if else
	
	Cau truc 1:
		if (dieu_kien) {
			doan code duoc thuc hien neu dieu kien dung
		}
	
	Cau truc 2:
		if (dieu_kien) {
			doan code duoc thuc hien neu dieu kien dung
		} else {
			doan code duoc thuc hien neu dieu kien sai
		}
		
	Cau truc 3:
		if (dieu_kien_1) {
			doan code duoc thuc hien neu dieu kien 1 dung
		} else if (dieu_kien_2) {
			doan code duoc thuc hien neu dk 1 sai va dk 2 dung
		} else {
			doan code duoc thuc hien neu dk 1 sai va dk 2 sai
		}
	
*/
//-----------------------------------------------------
// Cau truc 1
#include "stdio.h"

int main(){
	// nhap so n, kiem tra n co nho hon 20, neu co in ra man hinh
	int n;
	printf("nhap n = ");
	scanf("%d", &n);
	
	if(n<20){
		printf("so vua nhap be hon 20");
	}	
}
//-----------------------------------------------------
// Cau truc 2
#include "stdio.h"

int main(){
	// nhap so n, xuat man hinh la so chan hay le
	int n;
	printf("nhap n = ");
	scanf("%d", &n);
	
	if(n%2==0){
		printf("so vua nhap la so chan");
	} else {
		printf("so vua nhap la so le");
	}
}
//-----------------------------------------------------
// Cau truc 3
#include "stdio.h"

int main(){
	// nhap so n, xuat man hinh la so chan hay le
	int n;
	printf("nhap n = ");
	scanf("%d", &n);
	
	if(n%2==0){
		printf("so vua nhap la so chan");
	} else if (n%2==1) {
		printf("so vua nhap la so le");
	}
}
