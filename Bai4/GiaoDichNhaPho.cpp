#include "GiaoDichNhaPho.h"
#include<iomanip>
void GiaoDichNhaPho::Nhap() {
	GiaoDich::Nhap();
	cout << "Loai nha (1. cao cap, 2. thuong):  ";
	cin >> LoaiNha;
	cout << "Dia chi: ";
	cin >> DiaChi;
}
void GiaoDichNhaPho::Xuat() {
	GiaoDich::Xuat();
	string LoaiNha;
	if (this->LoaiNha == 1) {
		LoaiNha = "Cao cap";
	}
	else {
		LoaiNha = "Thuong";
	}
	
	cout << setw(10) << LoaiNha << " | "
		<< setw(15) << DiaChi << " | "
		<< setw(10) << ThanhTien() << " | ";
}
double GiaoDichNhaPho::ThanhTien() {
	if (LoaiNha == 1) {
		return GiaoDich::DienTich * GiaoDich::DonGia;
	}
	else {
		return GiaoDich::DienTich * GiaoDich::DonGia * 0.9;
	}
}
