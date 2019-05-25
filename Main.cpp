#include"NuocNgoai.h"
#include"VietNam.h"
#include <iostream>

using namespace std;
void NhapDS(VietNam *VN[], NuocNgoai *NN[], int &Slvn, int &i, int &j);
void xuatDS(VietNam * VN[], int nSL);
void xuatDS(NuocNgoai* NN[], int nSL);
double TongsoluongVN(VietNam *VN[], int &nSl);
double TongsoluongNN(NuocNgoai *NN[], int &nSl);
double TrungBinhTienKH(NuocNgoai *NN[], int &nSl);
void  ktra(KhachHang *kh[], int &nSl);
//bool ktra(KhachHang *kh[], int &nSl);
void main()
{
	KhachHang *kh[100];
	VietNam *VN[100];
	NuocNgoai *NN[100];
	int nSl, vn = 0, nn = 0;
	NhapDS(VN, NN, nSl, vn, nn);
	if(vn >= 0)
		xuatDS(VN, vn);
	if(nn >= 0)
		xuatDS(NN, nn);
	double dTongVN = 0;
	double dTongNN = 0;
	double dTrungBinhTienKH = 0;
	TongsoluongVN(VN, vn);
	TongsoluongNN(NN, nn);
	TrungBinhTienKH(NN, nn);
	dTongVN += TongsoluongVN(VN, vn);
	dTongNN += TongsoluongNN(NN, nn);
	dTrungBinhTienKH += TrungBinhTienKH(NN, nn);
	double dTrungBinhTienKHNN = 0;
	dTrungBinhTienKHNN = dTrungBinhTienKH / nn;
	//ktra(kh, nSl);
	cout << "Tong sl cua loai KH Viet Nam: " << dTongVN << endl;
	cout << "Tong sl cua loai KH Nuoc Ngoai: " << dTongNN << endl;
	cout << "Trung Binh tien dien cua khach nuoc ngoai la: " << dTrungBinhTienKHNN << endl;
	ktra(kh,nSl);
	system("pause");
}
void NhapDS(VietNam *VN[], NuocNgoai *NN[], int &Sl, int &vn, int &nn)
{
	cout << "\nso luong khach hang: "; cin >> Sl;
	int nLuaChon, sl;
	while (vn + nn < Sl)
	{
		cout << "\t\t\t\tMENU" << endl;
		cout << "1.Khach hang Viet Nam." << endl;
		cout << "2.Khach hang Nuoc Ngoai." << endl;
		cout << "Nhap Lua Chon: " << endl;
		cin >> nLuaChon;
		cout << "-------------------------------------------" << endl;
		if (nLuaChon == 1)
		{
			VN[vn] = new VietNam;
			VN[vn]->nhap();
			vn++;
		}
		else if (nLuaChon == 2)
		{
			NN[nn] = new NuocNgoai;
			NN[nn]->nhap();
			nn++;
		}
	}
	
	
}
void xuatDS(VietNam *VN[], int nSl) {
	for (int i = 0; i < nSl; i++)
	{
		cout << "\n--------------------------------" << endl;
		VN[i]->xuat();
		cout << "\n--------------------------------" << endl;

	}
}
void xuatDS(NuocNgoai *NN[], int nSl) {
	for (int i = 0; i < nSl; i++)
	{
		cout << "\n--------------------------------" << endl;  
		NN[i]->xuat();
		cout << "\n--------------------------------" << endl;

	}
}
double TongsoluongVN(VietNam *VN[], int &nSl)
{
	double dTong = 0;
	for (int i = 0; i < nSl; i++)
	{
		dTong += VN[i]->getSoluong();
	}
	return dTong;
}
double TongsoluongNN(NuocNgoai *NN[], int &nSl)
{
	
	double dTong = 0;
	for (int i = 0; i < nSl; i++)
	{
		dTong += NN[i]->TongSL();
	}
	return dTong;
}
double TrungBinhTienKH(NuocNgoai *NN[],int &nSl)
{
	double dTrungBinhNN = 0;
	for (int i = 0; i < nSl; i++)
	{
		dTrungBinhNN += NN[i]->getThanhTien();
	}
	return dTrungBinhNN;
}
//bool ktra(KhachHang *kh[], int &nSl)
//{
//	for (int i = 0; i < nSl; i++)
//	{
//		if (kh[i]->getMonth == 9 && kh[i]->getYear == 2019)
//		{
//			kh[i]->xuat();
//			return true;
//		}
//		return false;
//	}
//	return true;
//}
void  ktra(KhachHang *kh[], int &nSl)
{
	for (int i = 0; i < nSl; i++)
	{
		kh[i]->ktra();
	}
}

