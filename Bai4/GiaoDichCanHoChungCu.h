#pragma once
#include"GiaoDich.h"
class GiaoDichCanHoChungCu : public GiaoDich
{
protected:
	string MaCan;
	int ViTriTang;
public:
	void Nhap();
	void Xuat();
	double ThanhTien();
};

