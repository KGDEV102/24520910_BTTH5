#pragma once
#include"GiaoDich.h"

class GiaoDichNgoaiTe:public GiaoDich
{
protected:
	double TiGia;
	
public:
	void Nhap();
	void Xuat();
	int LoaiTien;
	double ThanhTien();
};

