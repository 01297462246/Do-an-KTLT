#include "NuocNgoai.h"
#include<iostream>
#include<string>
using namespace std;
NuocNgoai::NuocNgoai()
{
}
NuocNgoai::~NuocNgoai()
{
}
double NuocNgoai::ThanhTien() {
		m_dThanhTien = m_fSoLuong * m_fDonGia;
	return m_dThanhTien;
}
void NuocNgoai::nhap() {
	KhachHang::nhap();
	cout << "+++++++++++++++++++++++++++++++++++++++++Khach Hang Nuoc Ngoai+++++++++++++++++++++++" << endl;
	cout << "Nhap Quoc Tich: "; cin >> m_sQuocTich;
	cout << "Nhap so luong: "; cin >> m_fSoLuong;
	cout << "Nhap don gia: "; cin >> m_fDonGia;
}
void NuocNgoai::xuat() {
	KhachHang::xuat();
	cout << "Quoc Tich: " << m_sQuocTich << endl;
	cout << "So Luong: " << m_fSoLuong << endl;
	cout << "Don Gia: " << m_fDonGia << endl;
	cout << "So tien can thanh toan la: ";
	m_dThanhTien=ThanhTien();
	cout << m_dThanhTien << endl;
}
NuocNgoai::NuocNgoai(string sQuocTich, float fDonGia, float fSoLuong, double dThanhTien)
{
	m_sQuocTich = sQuocTich;
	m_fSoLuong = fSoLuong;
	m_fDonGia = fDonGia;
}
double NuocNgoai::TongSL() {
	double dTong = 0;
	dTong += m_fSoLuong;
	return dTong;
}
