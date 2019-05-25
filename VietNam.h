#pragma once
#include "KhachHang.h"
#include <string>
#include <iostream>
using namespace std;
#ifndef VietNam_H
#define VietNam_H
class VietNam :
	public KhachHang
{
private:
	int nNumber = 0;
	string m_sDoiTuongKhachHang;
	float m_fDonGia = 0.0;
	float m_fSoLuong = 0.0;
	float m_fDinhMuc = 0.0;
	double m_dThanhTien = 0.0;
public:
	VietNam();
	~VietNam();
	void nhap();
	void xuat();
	double ThanhTien();
	double TongSL();//Tinh tong so luong
	VietNam(string sDoiTuongKhachHang, float fDonGia, float fSoLuong, float fDinhMuc, double dThanhTien);
	float getSoluong() {
		return this->m_fSoLuong;
	};
};
#endif // !VietNam_H