#include "QuanLyGiaoDich.h"
#include<iomanip>
void QuanLyGiaoDich::Nhap() {
	int chon;
	do {
		cout << "Nhap vao ds giao dich (1. vang, 2. ngoai te): ";
		cin >> chon;
	} while (chon != 1 && chon != 2);
	cout << "Nhap vao so luong: ";
	int n;
	cin >> n;
	
	if (chon == 1) {
		gdv.resize(n);
		for (int i = 0; i < n; i++) {
			cout << "Nhap vao giao dich thu " << i + 1 << ":\n";
			gdv[i].Nhap();
		}
	}
	else {
		gdnt.resize(n);
		for (int i = 0; i < n; i++) {
			cout << "Nhap vao giao dich thu " << i + 1 << ":\n";
			gdnt[i].Nhap();
		}
	}
	
}
void QuanLyGiaoDich::Xuat() {
	if (!gdv.size() && !gdnt.size()) {
		cout << "Chua co giao dich nao. Vui long nhap vao ds giao dich!";
		return;
	}
	bool check = false;
	for (GiaoDichVang x : gdv) {
		if (x.ThanhTien() > 1000000000) {
			cout << left
				<< setw(15) << "MA GD" << " | "
				<< setw(15) << "NGAY GD" << " | "
				<< setw(15) << "DON GIA" << " | "
				<< setw(10) << "SO LUONG" << " | "
				<< setw(10) << "LOAI VANG" << " | "
				<< setw(15) << "THANH TIEN" << " | " << endl;
			x.Xuat();
			check = true;
			cout << endl;
		}
	}
	cout << endl;
	for (GiaoDichNgoaiTe x : gdnt) {
		if (x.ThanhTien() > 1000000000) {
			cout << left
				<< setw(15) << "MA GD" << " | "
				<< setw(15) << "NGAY GD" << " | "
				<< setw(15) << "DON GIA" << " | "
				<< setw(10) << "SO LUONG" << " | "
				<< setw(10) << "TI GIA" << " | "
				<< setw(10) << "LOAI TIEN" << " | "
				<< setw(15) << "THANH TIEN" << " | " << endl;
			x.Xuat();
			check = true;
			cout << endl;
		}
	}
	if (!check) {
		cout << "Khong co giao dich nao co thanh tien tren 1 ty dong" << endl;
	}
}
void QuanLyGiaoDich::GiaoDichVangMax() {
	
	if (!gdv.size()) {
		cout << "Chua nhap vao ds giao dich vang!!";
		return;
	}
	double max_val = INT_MIN;
	for (GiaoDichVang x : gdv) {
		max_val = max(max_val, x.ThanhTien());
	}
	cout << "Cac giao dich vang co thanh tien cao nhat: \n";
	cout << left
		<< setw(15) << "MA GD" << " | "
		<< setw(15) << "NGAY GD" << " | "
		<< setw(15) << "DON GIA" << " | "
		<< setw(10) << "SO LUONG" << " | "
		<< setw(10) << "LOAI VANG" << " | "
		<< setw(15) << "THANH TIEN" << " | " << endl;
	for (GiaoDichVang x : gdv) {
		if (x.ThanhTien() == max_val) {
			x.Xuat();
			cout << endl;
		}
	}
}
void QuanLyGiaoDich::GiaoDichEuroMin() {
	if (!gdnt.size()) {
		cout << "Chua nhap vao ds giao dich ngoai te!!";
		return;
	}
	double min_val = INT_MAX;
	bool check = false;
	for (GiaoDichNgoaiTe x : gdnt) {
		if (x.LoaiTien == 3) {
			min_val = min(x.ThanhTien(), min_val);
			check = true;
		}
	}
	if (!check) {
		cout << "Khong co giao dich Euro nao!!\n";
		return;
	}
	cout << "Cac giao dich ngoai te Euro co gia tri thap nhat: \n";
	cout << left
		<< setw(15) << "MA GD" << " | "
		<< setw(15) << "NGAY GD" << " | "
		<< setw(15) << "DON GIA" << " | "
		<< setw(10) << "SO LUONG" << " | "
		<< setw(10) << "TI GIA" << " | "
		<< setw(10) << "LOAI TIEN" << " | "
		<< setw(15) << "THANH TIEN" << " | " << endl;
	for (GiaoDichNgoaiTe x : gdnt) {
		if (x.LoaiTien == 3) {
			if (x.ThanhTien() == min_val) {
				x.Xuat();
				cout << endl;
			}
		}
	}
}
