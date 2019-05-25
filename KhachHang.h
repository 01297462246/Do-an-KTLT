#pragma once
#include <iostream>
#include<string>
using namespace std;
#ifndef KhachHang_H
#define KhachHang_H
class KhachHang 
{
protected:
	string m_sMaKH;
	string m_sTenKH;
	int m_nNgay=0, m_nThang=0, m_nNam=0;
public:
	KhachHang();
	 ~KhachHang();
	virtual void  nhap();
	virtual void  xuat();
	void virtual nhapDate();
	void virtual xuatDate();
	int getMonth()
	{
		return this->m_nThang;
	}
	int getYear()
	{
		return this->m_nNam;
	}
	KhachHang(string sMaKH, string sTenKH);
	void ktra();
};
#endif // !KhachHang_H
