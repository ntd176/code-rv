/*
Create on Wed Sep 24 2025 16:00
@author: ntdai

#5 TOAN TU ++ VA --
++ tang len mot gia tri
-- giam di mot gia tri

a++ <-> a = a + 1 // gia tri cua a thay doi sau khi ket thuc cau lenh
++a <-> a = a + 1 // gia tri cua a thay doi truoc khi ket thuc cau lenh

b-- <-> b = b - 1 // gia tri cua b thay doi sau khi ket thuc cau lenh
--b <-> b = b - 1 // gia tri cua b thay doi truoc khi ket thuc cau lenh
*/

#include "stdio.h"

int main(){
	int a = 5;
	int b = 5;
	
	printf("%d\n", a++);
	printf("%d\n", a);
	printf("%d\n", ++a);

	printf("%d\n", b--);
	printf("%d\n", b);
	printf("%d\n", --b);
}
