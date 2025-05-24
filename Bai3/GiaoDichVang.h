#pragma once
#include"GiaoDich.h"
class GiaoDichVang : public GiaoDich
{
protected:
	string LoaiVang;
public:
	void Nhap();
	void Xuat();
	double ThanhTien();
};

