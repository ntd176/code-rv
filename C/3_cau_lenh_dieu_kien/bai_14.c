/*
Create on Wed Oct 01 2025 13:33
@author: ntdai

#15 TOAN TU LOGIC 
	
	Toan tu && -> toan tu AND, tra ve true khi va chi khi tat ca toan hang deu dung
	Toan tu || -> toan tu OR, tra ve true khi co it nhat 1 toan hang dung
	Toan tu ! -> toan tu NOT 
*/

#include "stdio.h"

int main(){
	int a = 1;
	int b = 0;
	int c = 1;
	
	printf("%d && %d = %d\n", a, b, a&&b);
	printf("%d && %d = %d\n", a, c, a&&c);
	
	printf("%d || %d = %d\n", a, b, a||b);
	printf("%d || %d = %d\n", a, c, a||c);
	
	printf("!%d = %d\n", a, !a);
	printf("!%d = %d", b, !b);
}
