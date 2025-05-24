#include "GiaoDichNgoaiTe.h"
#include<iomanip>
void GiaoDichNgoaiTe::Nhap() {
	GiaoDich::Nhap();
	cout << "Ti gia: ";
	cin >> TiGia;
	cout << "Loai tien te (1.vnd, 2.USD, 3.Euro):  ";
	cin >> LoaiTien;
}
double GiaoDichNgoaiTe::ThanhTien() {
	if (LoaiTien == 1) {
		return SoLuong * DonGia;
	}
	else {
		return SoLuong * DonGia * TiGia;
	}
}
void GiaoDichNgoaiTe::Xuat() {
	GiaoDich::Xuat();
	string LoaiTien;
	if (this->LoaiTien == 1) {
		LoaiTien = "vnd";
	}
	else if (this->LoaiTien == 2) {
		LoaiTien = "USD";
	}
	else {
		LoaiTien = "Euro";
	}

	cout << setw(10) << TiGia << " | "
		<< setw(10) << LoaiTien << " | "
		<< setw(15) << ThanhTien() << " | ";
}
