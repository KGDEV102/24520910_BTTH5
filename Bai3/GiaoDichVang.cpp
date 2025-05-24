#include "GiaoDichVang.h"
#include<string>
#include<iomanip>
void GiaoDichVang::Nhap() {
	GiaoDich::Nhap();
	// Xóa toàn bộ bộ đệm đến khi gặp '\n'
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "Loai vang: ";
	getline(cin, LoaiVang);
}
double GiaoDichVang::ThanhTien() {
	return SoLuong * DonGia;
}
void GiaoDichVang::Xuat() {
	GiaoDich::Xuat();
	cout<< setw(10) << LoaiVang << " | "
		<< setw(15) << ThanhTien() << " | ";
}
