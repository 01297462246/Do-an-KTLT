#pragma once
#include "KhachHang.h"
#include <string>
#include <iostream>
using namespace std;
#ifndef NuocNgoai_H
#define NuocNgoai_H


class NuocNgoai :
	public KhachHang
{
private:
	string m_sQuocTich;
	float m_fDonGia = 0.0;
	float m_fSoLuong = 0.0;
	double m_dThanhTien = 0.0;
public:
	NuocNgoai();
	~NuocNgoai();
	void nhap();
	void xuat();
	double ThanhTien();
	double TongSL();
	float getSoLuong() {
		return this->m_fSoLuong;
	}
	double getThanhTien()
	{
		return this->m_dThanhTien;
	}
	NuocNgoai(string sQuocTich, float fDonGia, float fSoLuong, double dThanhTien);
};

#endif // !NuocNgoai_H



