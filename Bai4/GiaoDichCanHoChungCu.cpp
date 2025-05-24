#include "GiaoDichCanHoChungCu.h"
#include<iomanip>
void GiaoDichCanHoChungCu::Nhap() {
	GiaoDich::Nhap();
	cout << "Ma can: ";
	cin >> MaCan;
	cout << "Vi tri tang: ";
	cin >> ViTriTang;
}
void GiaoDichCanHoChungCu::Xuat() {
	GiaoDich::Xuat();
	cout << setw(10) << MaCan << " | "
		<< setw(10) << ViTriTang << " | "
		<< setw(10) << ThanhTien() << " | ";
}
double GiaoDichCanHoChungCu::ThanhTien() {
	if (ViTriTang == 1) {
		return DienTich * DonGia * 2;
	}
	else if (ViTriTang >= 15) {
		return DienTich * DonGia * 1.2;
	}
	else {
		return DienTich * DonGia;
	}
}
