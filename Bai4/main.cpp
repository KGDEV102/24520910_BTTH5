#include"GiaoDich.h"
#include"GiaoDichDat.h"
#include"GiaoDichNhaPho.h"
#include"GiaoDichCanHoChungCu.h"
#include<vector>
#include<iomanip>
string ChuanHoa(string& ngay) {
	if (ngay[2] != '/') {
		ngay=  '0' + ngay;
	}
	if (ngay[5] != '/') {
		ngay.insert(3, 1, '0');
	}
	return ngay;
}
int main() {
	int n1, n2, n3;
	vector<GiaoDichDat>gd1;
	vector<GiaoDichNhaPho>gd2;
	vector<GiaoDichCanHoChungCu>gd3;
	cout << "Nhap so luong giao dich dat: ";
	cin >> n1;
	
	for (int i = 0; i < n1; i++) {
		GiaoDichDat x;
		x.Nhap();
		gd1.push_back(x);
		
	}
	cout << "Nhap so luong giao dich nha pho: ";
	cin >> n2;
	
	for (int i = 0; i < n2; i++) {
		GiaoDichNhaPho x;
		x.Nhap();
		gd2.push_back(x);
	}
	cout << "Nhap so luong giao dich can ho chung cu: ";
	cin >> n3;
	
	for (int i = 0; i < n3; i++) {
		GiaoDichCanHoChungCu x;
		x.Nhap();
		gd3.push_back(x);
	}
	cout << "Tong so luong giao dich nha dat: " << gd1.size() << endl;
	cout << "Tong so luong giao dich nha pho: " << gd2.size() << endl;
	cout << "Tong so luong giao dich can ho chung cu: " << gd3.size() << endl;
	
	double ThanhTienCanHoChungCu = 0;
	for (GiaoDichCanHoChungCu x : gd3) {
		ThanhTienCanHoChungCu += x.ThanhTien();
	}
	cout << "Trung binh thanh tien cua giao dich Can ho chung cu: " << ThanhTienCanHoChungCu / gd3.size() << endl;

	double max_val = INT_MIN;
	for (GiaoDichNhaPho x : gd2) {
		max_val = max(x.ThanhTien(), max_val);
	}
	cout << "Nhung giao dich nha pho co gia tri cao nhat: " << endl;
	cout << left
		<< setw(15) << "Ma giao dich" << " | "
		<< setw(15) << "Ngay giao dich" << " | "
		<< setw(10) <<"Don gia" << " | "
		<< setw(10) << "Dien tich" << " | "
		<< setw(10) << "Loai Nha" << " | "
		<< setw(15) << "Dia chi" << " | "
		<< setw(10) << "Thanh tien" << " | ";
	cout << endl;
	for (GiaoDichNhaPho x : gd2) {
		if (x.ThanhTien() == max_val) {
			x.Xuat();
			cout << endl;
		}
	}
	cout << "Cac giao dich cua thang 12 nam 2024: " << endl;
	for (GiaoDichDat x : gd1) {
		ChuanHoa(x.NgayGD);
	}
	for (GiaoDichDat x : gd1) {
		if (x.NgayGD.substr(3) == "12/2024") {
			x.Xuat();
			cout << endl;
		}
	}
	for (GiaoDichNhaPho x : gd2) {
		ChuanHoa(x.NgayGD);
	}
	for (GiaoDichNhaPho x : gd2) {
		if (x.NgayGD.substr(3) == "12/2024") {
			x.Xuat();
			cout << endl;
		}
	}
	for (GiaoDichCanHoChungCu x: gd3) {
		ChuanHoa(x.NgayGD);
	}
	for (GiaoDichCanHoChungCu x : gd3) {
		if (x.NgayGD.substr(3) == "12/2024") {
			x.Xuat();
			cout << endl;
		}
	}
}
