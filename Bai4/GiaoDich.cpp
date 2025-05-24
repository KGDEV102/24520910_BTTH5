#include "GiaoDich.h"
#include<iomanip>
void GiaoDich:: Nhap() {
	cout << "Nhap ma giao dich: ";
	cin >> MGD;
	cout << "Nhap ngay giao dich: ";
	cin >> NgayGD;
	cout << "Don gia: ";
	cin >> DonGia;
	cout << "Dien tich: ";
	cin >> DienTich;

}
void GiaoDich::Xuat() {
	
	cout << left
		<< setw(15) << MGD << " | "
		<< setw(15) << NgayGD << " | "
		<< setw(10) << DonGia << " | "
		<< setw(10) << DienTich << " | ";
}
