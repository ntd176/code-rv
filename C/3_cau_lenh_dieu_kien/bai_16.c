/*
Create on Thu Oct 02 2025 9:00
@author: ntdai

#17 CAU LENH Switch case
	Cau truc:
		switch(case_value){
			case 1:
				// thuc hien code
				break;
			case 2:
				// thuc hien code
				break;
			case n:
				// thuc hien code
				break;
			default:
				// thuc hien code
				break;
		}
*/

#include "stdio.h"

int main(){
	int n;
	printf("nhap vao so n (tu 1->7): ");
	scanf("%d", &n);
	
	switch(n){
		case 1:
			printf("chu nhat");
			break;
		case 2:
			printf("thu 2");
			break;
		case 3:
			printf("thu 3");
			break;
		case 4:
			printf("thu 4");
			break;
		case 5:
			printf("thu 5");
			break;
		case 6:
			printf("thu 6");
			break;
		case 7:
			printf("thu 7");
			break;
		default:
			printf("phai nhap tu 1->7");
	}
}
