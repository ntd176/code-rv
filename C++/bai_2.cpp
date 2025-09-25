/*
Create on Thu Sep 25 2025
@author: ntdai
*************************
#2 Toan tu co ban
	Toan tu gan: =
	Toan tu toan hoc: +, -, *, /, %
	Toan tu so sanh: >, >=, <, <=, ==, != 
		toan_hang_1 toantusosanh toan_hang_2 => tra ve true, false
	Toan tu logic
		AND: &&
		OR: ||
		NOT: !
*/

#include <iostream>

using namespace std;

int main(){
	// gan 1 gia tri
//	int a = 100;
//	cout << a << endl;
	
	// gan nhieu gia tri
//	int a, b, c;
//	cin >> a;
//	b = a;
//	cout << b << endl;
//	c = b;
//	cout << c << endl;

	// toan tu toan hoc
//	int a = 500, b = 200;
//	int tong = a + b;
//	int hieu = a - b;
//	int tich = a * b;
//	float thuong = (float)a / b;	// kieu du lieu cho bien 'thuong' va ep kieu 1 trong hai bien 'a' hoac 'b'
//	int chia_du = a % b;
//	cout << tong << endl;
//	cout << hieu << endl;
//	cout << tich << endl;
//	cout << thuong << endl;
//	cout << chia_du << endl;

	// Tang / giam di 1 don vi
//	int a = 100;
//	a++; // Tang a len 1 don vi
//	cout << a << endl;
//	int b = 100;
//	b--; // Giam b di 1 don vi
//	cout << b << endl;

	// so sanh
//	int a = 100, b = 200;
//	bool ok = a <= b; // true
//	cout << ok << endl;

	// logic
	int a = 200, b = 200, c = 300, d = 400;
	int res_1 = (a==b) || (c<d) || (500>300);
	int res_2 = !(a==b);
	cout << res_1 << endl;
	cout << res_2 << endl; 
    return 0;
}
