#pragma once
#include"GiaoDich.h"
class GiaoDichNhaPho :public GiaoDich
{
protected:
	int LoaiNha;
	string DiaChi;
	
public:
	void Nhap();
	void Xuat();
	double ThanhTien();
};

