/*
nhap a, b, c tu ban phim
in ra man hinh theo thu tu tang dan cac so
(chi duoc dung them 2 bien phu)
*/
#include "stdio.h"
int main(){
	int a, b, c;
	int temp1, temp2;
	printf("nhap a, b, c: ");
	scanf("%d %d %d", &a, &b, &c);
	//  gia su a<=b<=c
	// so sanh 
	if (a>b){
		temp1 = a;
		a = b;
		b = temp1; 
	} 
	if (a>c){
		temp2 = a;
		c = a;
		a = temp2;
	}
	if (b>c){
		temp1 = b;
		b = c;
		c = temp1;
	}
	printf("thu tu tang dan: %d %d %d", a, b, c);
}
