/*
Create on Sat Oct 11 2025 15:35
@author: ntdai

#27 KHAI NIEM HAM, KIEM TRA SO NGUYEN TO
	Cau truc:
		return_type function_name(parameter list){
			// body of the function
		}
*/

// viet ham kiem tra so nguyen to
#include "stdio.h"
#include "math.h"

int check_snt(int x){
	int i;
	if (x<2) {
		return 0;
	} else {
		for (i=2; i<=x-1; i++){
			if(x%i==0)
				return 0;
		}
		return 1;
	}
}

int main(){
	// nhap du lieu
	int n;
	printf("nhap n = ");
	scanf("%d", &n);
	
	// goi ham
	int check = check_snt(n);
	
	// xu ly & xuat ket qua 
	if (check==0){
		printf("khong phai so nguyen to");
	} else {
		printf("so nguyen to");
	}
}
