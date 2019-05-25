#include "KhachHang.h"
KhachHang::KhachHang()
{
}
KhachHang::~KhachHang()
{
}
void KhachHang::nhap() {
	cout << "Nhap Ma Khach Hang: " << endl;
	cin.ignore(1);
	getline(cin, m_sMaKH);
	cout << "Nhap Ten Khach Hang: " << endl;
	getline(cin, m_sTenKH);
	nhapDate();
}
void KhachHang::xuat() {
	cout << "Ma KH: " << m_sMaKH << endl;
	cout << "Ten KH: " << m_sTenKH << endl;
	xuatDate();
}
void KhachHang::nhapDate()
{
	cout << "Nhap ngay ra hoa don: " << endl;
	cout << "Nhap ngay: " << endl;
	cin >> m_nNgay;
	cout << "Nhap thang: " << endl;
	cin >> m_nThang;
	cout << "Nhap nam: " << endl;
	cin >> m_nNam;
}
void KhachHang::xuatDate()
{
	cout << "Ngay ra hoa don: " << m_nNgay << "/" << m_nThang << "/" << m_nNam << endl;
}
KhachHang::KhachHang(string sMaKH, string sTenKH)
{
	sMaKH = m_sMaKH;
	sTenKH = m_sTenKH;
}
void KhachHang::ktra()
{
		if (m_nNgay == 9 && m_nNam == 2019)
		{
			cout << m_sMaKH << m_sTenKH << endl;
		}
}