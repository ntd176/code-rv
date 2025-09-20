/*
printf("format string", argument_list);
	format_string:
		%d -> so nguyen
		%c -> ky tu
		%s -> chuoi
		%f -> float
			%.2f -> chi lay 2 chu so sau phan thap phan
		\n -> xuong dong
	argument_list
		ten bien hoac gia tri noi dung xuat ra man hinh
*/

#include "stdio.h"

int main (){
	printf("bai 3 -> xuat du lieu ra man hinh\n");
	
	int x=5;
	printf("gia tri cua x la: %d\n", x);
	
	float a=3.14123456789;
	printf("gia tri cua a la: %f\n", a);
	printf("gia tri cua a la: %.2f\n", a);
	
	float b=2.3;
	float c=5.1;
	printf("b=%.2f, c=%.2f\n", b, c);
	
	char d='D';
	printf("%c", d);
}
