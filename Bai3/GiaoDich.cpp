#include "GiaoDich.h"
#include<iomanip>
void GiaoDich::Nhap() {
	cout << "Nhap ma giao dich: ";
	cin >> MGD;
	cout << "Nhap ngay giao dich: ";
	cin >> NgayGD;
	cout << "Don gia: ";
	cin >> DonGia;
	cout << "So luong: ";
	cin >> SoLuong;
}
void GiaoDich::Xuat() {
	cout << left
		<< setw(15) << MGD << " | "
		<< setw(15) << NgayGD << " | "
		<< setw(15) << DonGia << " | "
		<< setw(10) << SoLuong << " | ";	
}
