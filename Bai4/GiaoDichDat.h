#pragma once
#include"GiaoDich.h"
class GiaoDichDat : public GiaoDich
{
protected:
	char LoaiDat;
public:
	void Nhap();
	void Xuat();
	double ThanhTien();
};

