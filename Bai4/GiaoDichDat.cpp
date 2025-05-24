#include "GiaoDichDat.h"
#include<iomanip>
void GiaoDichDat::Nhap() {
	GiaoDich::Nhap();
	cout << "Nhap loai dat: ";
	cin >> LoaiDat;
}
void GiaoDichDat::Xuat() {
	GiaoDich::Xuat();
	cout << setw(10) << LoaiDat << " | "
		<< setw(10) << ThanhTien() << " | ";	
}
double GiaoDichDat::ThanhTien() {
	if (LoaiDat == 'A') {
		return GiaoDich::DienTich * GiaoDich::DonGia * 1.5;

	}
	else {
		return GiaoDich::DienTich * GiaoDich::DonGia;
	}
}
