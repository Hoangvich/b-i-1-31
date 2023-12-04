#include<iostream>

using namespace std;

int main(){
	
	int n;
	cout << "Nhap so nguyen n(0 <= n <= 100): ";
	cin >> n;
	if(n < 0 || n > 100)
	{
		cout << "Gia tri vua nhap khong hop le" << endl;
		return 1;
	}
	int tong = 0;
	for(int i = 1; i < n; i += 2 )// Bat dau tu 1 tang len 2 de chi gap so le
	{
	    tong += i; //Cong so le vao bien tong
	}
	cout << "Tong cac so le be hon" << " " << n << " " << "la: " << tong << endl;
	
	return 0;
}