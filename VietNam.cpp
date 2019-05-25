#include "VietNam.h"
#include <string>
#include <iostream>
using namespace std;
VietNam::VietNam()
{
}
VietNam::~VietNam()
{
}
void VietNam::nhap() {
	KhachHang::nhap();
	cout << "+++++++++++++++++++++++++++++++++++++Khach Hang Viet Nam+++++++++++++++++++++++++++" << endl;
	cout << "\n\n\n========================Bang Lua Chon Doi tuong Khach Hang======================" << endl;
	cout << "\t 1. Doi tuong sinh hoat." << endl;
	cout << "\t 2. Doi tuong kinh doanh." << endl;
	cout << "\t 3. Doi tuong san xuat." << endl;
	cout << "Nhap doi tuong khach hang: ";
	cin >> nNumber;
	if (nNumber == 1)
	{
		cout << "\n******************** Doi Tuong Khach Hang Sinh Hoat ************************" << endl;
		cout << "Nhap so luong: "; cin >> m_fSoLuong;
		cout << "Nhap don gia: "; cin >> m_fDonGia;
		cout << "Nhap dinh muc: "; cin >> m_fDinhMuc;

	}
	else if (nNumber == 2)
	{
		cout << "\n******************** Doi Tuong Khach Hang Kinh Doanh ************************" << endl;
		cout << "Nhap so luong: "; cin >> m_fSoLuong;
		cout << "Nhap don gia: "; cin >> m_fDonGia;
		cout << "Nhap dinh muc: "; cin >> m_fDinhMuc;

	}
	else if (nNumber == 3)
	{
		cout << "\n******************** Doi Tuong Khach Hang San Xuat ************************" << endl;
		cout << "Nhap so luong: "; cin >> m_fSoLuong;
		cout << "Nhap don gia: "; cin >> m_fDonGia;
		cout << "Nhap dinh muc: "; cin >> m_fDinhMuc;

	}
	else
		exit(1);
}
void VietNam::xuat() {
		cout << "\n============================= Hoa Don Tien Dien ===========================" << endl;
		KhachHang::xuat();
		cout << "So luong: " << m_fSoLuong << endl;
		cout << "Don gia: " << m_fDonGia << endl;
		cout << "Dinh muc: " << m_fDinhMuc << endl;
		cout << "So tien can thanh toan la: ";
		m_dThanhTien = ThanhTien();
		cout << m_dThanhTien;
}
double VietNam:: ThanhTien() {
	if (m_fSoLuong > m_fDinhMuc)
	{
		m_dThanhTien = (m_fDonGia*m_fDinhMuc) + ((m_fSoLuong - m_fDinhMuc)*m_fDinhMuc*2.5);
	}
	else
		m_dThanhTien = m_fSoLuong * m_fDonGia;
	return m_dThanhTien;
}
VietNam:: VietNam (string sDoiTuongKhachHang, float fDonGia, float fSoLuong, float fDinhMuc, double dThanhTien)
{
	sDoiTuongKhachHang = m_sDoiTuongKhachHang;
	fDonGia = m_fDonGia;
	fDinhMuc = m_fDinhMuc;
	fSoLuong = m_fSoLuong;
	fDinhMuc = m_fDinhMuc;
	dThanhTien = m_dThanhTien;
}
double VietNam::TongSL() {
	double dTong = 0;
	dTong += m_fSoLuong;
	return dTong;
}