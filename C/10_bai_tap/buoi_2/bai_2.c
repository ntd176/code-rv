/*
Create on Fri Nov 7 2025 14:15
@author: ntdai

# bai 2 
*/

#include "stdio.h"

int main(){
	int M, N;
	scanf("%d %d", &M, &N);
	int result = floor(M*N)/2;
	printf("%d", result);
}
/*
Vi du
	1, table 3x3
		1 2 3
		4 5 6
		7 8 9
		arrange
		[1 2] [3]
		[4 5] [6]
		[7 8] [9]
		=> result floor(3*3)/2 => 4 domino (1,2), (4,5), (7,8), (3,6) hoac (6,9)
	------------
	2, table 2x4
		1 2 3 4
		5 6 7 8
		arrange
		[1 2][3 4]
		[5 6][7 8]
		=> result 4 domino (1,2), (3,4), (5,6), (7,8)
	-------------
	3, table 1x5
		1 2 3 4 5
		arrange
		[1 2][3 4][5]
		=> floor(5/2) = 2 => 2 domino (1,2), (3,4)
*/
