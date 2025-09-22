/*
Create on Mon Sep 22 2025
@author: ntdai
*************************
#1 Vao ra trong c++ | Kieu du lieu va bien trong c++

n bit => -2^(n-1) -> 2^(n-1) - 1

Kieu du lieu so:
	So nguyen
		int: 4 byte = 32 bit: -2^31 -> 2^31 - 1
		long long: 8 byte = 64 bit: -2^63 -> 2^63 - 1
		unsigned int: 0 -> 2^32 - 1
		unsigned long long: 0 -> 2^64 - 1
	So thuc
		float: 4 byte
		double: 8 byte
Kieu du lieu ky tu:
	char: 1 byte: 256 (0 -> 255)
	bool: true, false
	
Bien
	Kieu_du_lieu Ten_bien;
		int dien_tich
		float ban_kinh
		double chu_vi

endl -> xuong dong
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
//    cout << "xin chao Tien Dai" << endl;
//    
// 	int BanKinh;
// 	cout << BanKinh << endl;
// 	
// 	int a, b, c;	// khai bao
// 	int d = 1, e = 2, f = 3; // khoi tao
// 	cout << d << " " << e << " " << f << endl;
// 	
// 	// nhap tu ban phim
//	int x, y, z;
//	cin >> x >> y >> z;
//	cout << "gia tri x vua nhap " << x << " " << y << " " << z << endl;
	
	// nhap so thap phan
	float k;
	cout << "nhap gia tri cua k: ";
	cin >> k;
	cout << "gia tri k vua nhap la: "<< fixed << setprecision(4) << k << endl;
    return 0;
}
