#pragma once
#include"GiaoDich.h"
#include"GiaoDichNgoaiTe.h"
#include"GiaoDichVang.h"
#include<vector>
class QuanLyGiaoDich
{
private:
	vector<GiaoDichVang>gdv;
	vector<GiaoDichNgoaiTe>gdnt;
public:
	void Nhap();
	void Xuat();
	void GiaoDichVangMax();
	void GiaoDichEuroMin();
};

