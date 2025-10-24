/*
Create on Fri Oct 24 2025 15:15
@author: ntdai

#9 SO CHIA HET

/*
 cho 2 so nguyen duong a va b
 tim so chia het cho b lon nhat ma khong lon hon a
 -> yc: khong dung vong lap va cac ham co san
--------------------------------------------------
*/
#include "stdio.h"
int main(){
	int a, b;
	printf("nhap a: ");
	scanf("%d", &a);
	printf("nhap b: ");
	scanf("%d", &b);
	int k = (a/b)*b;
	printf("so can tim chia het cho %d va khong lon hon %d la: %d", b, a, k);
}

/*
 cho 2 so nguyen duong a va b
 tim so chia het cho b nho nhat ma lon hon hoac bang a
 -> yc: khong dung vong lap va cac ham co san
--------------------------------------------------
*/
#include "stdio.h"
int main(){
	int a, b;
	printf("nhap a: ");
	scanf("%d", &a);
	printf("nhap b: ");
	scanf("%d", &b);
	int k = ((a+b-1)/b)*b;
	printf("so can tim chia het cho %d va lon hon hoac bang %d la: %d", b, a, k);
}
