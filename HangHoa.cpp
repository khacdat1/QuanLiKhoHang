#include "HangHoa.h"
#include "List.h"
#include "NCC_NV.h"
#include <iostream>
using namespace std;
HangHoa::HangHoa(string IDHH, string TenHH, string IDNCC  , string IDLHH, double SoLuong, double DonGia , string NgayNhap, string HanSuDung) 

    : _IDHangHoa(IDHH),_TenHangHoa(TenHH),_IDNhaCungCap(IDNCC),_IDLoaiHangHoa(IDLHH),_NgayNhap(NgayNhap),_HanSuDung(HanSuDung)
{
    _DonGia = DonGia;
    _SoLuong = SoLuong;
}
HangHoa::~HangHoa()
{

}
void HangHoa::NhapFile(fstream& File)
{
    getline(File, _IDHangHoa, ',');
    File.seekg(1, SEEK_CUR);
    getline(File, _TenHangHoa, ',');
    File.seekg(0, SEEK_CUR);
    getline(File, _IDNhaCungCap, ',');
    File.seekg(1, SEEK_CUR);
    getline(File, _IDLoaiHangHoa, ',');
    File >> _SoLuong;
    File.seekg(2, SEEK_CUR);
    File>> _DonGia;
    File.seekg(2, SEEK_CUR);
    getline(File, _NgayNhap, ',');
    File.seekg(1, SEEK_CUR);
    getline(File, _HanSuDung, ',');
}
void HangHoa::Nhap()
{
    cout << "Nhap ID hang hoa :";
    cin >> _IDHangHoa;
    cout << "Nhap Ten hang hoa :";
    cin >> _TenHangHoa;
    cout << "So luong : ";
    cin >> _SoLuong;
    cout << "Don gia : ";
    cin >> _DonGia;
    cout << "Ngay Nhap : ";
    cin >> _NgayNhap;
    cout << "Han Su Dung : ";
    cin >> _HanSuDung;
}
void HangHoa::Xuat()
{
    cout << "ID hang hoa : " << _IDHangHoa << endl;
    cout << "Ten hang hoa : " << _TenHangHoa << endl;
    cout << "So Luong : " << _SoLuong << endl;
    cout << "Don gia : " << _DonGia << endl;
    cout << "Ngay nhap : " << _NgayNhap << endl;
    cout << "Han su dung :" << _HanSuDung << endl;

}
void HangHoa::XuatFile(fstream& File)
{
        File << "ID hang hoa : " << _IDHangHoa << endl;
        File << "Ten hang hoa : " << _TenHangHoa << endl;
        File << "ID nha cung cap :" << _IDNhaCungCap << endl;
        File << "ID loai hang hoa : " << _IDLoaiHangHoa << endl;
        File<< "Don gia : " << _DonGia << endl;
        File << "So Luong : " << _SoLuong << endl;
        File << "Ngay nhap/xuat : " << _NgayNhap << endl;
        File << "Han su dung : " << _HanSuDung << endl;
        File << "\n";
}
void HangHoa::SetIDHangHoa(const string& s)
{
    this->_IDHangHoa = s;
}
string HangHoa::GetIDHangHoa()
{
    return this->_IDHangHoa;
}
void HangHoa::SetTenHangHoa(const string& s)
{
    this->_TenHangHoa = s;
}
string HangHoa::GetTenHangHoa()
{
    return this->_TenHangHoa;
}
void HangHoa::SetSoLuong(const double& s)
{
    this->_SoLuong = s;
}
double HangHoa::GetSoLuong()
{
    return this->_SoLuong;
}
void HangHoa::SetDonGia(const double& s)
{
    this->_DonGia = s;
}
double HangHoa::GetDonGia()
{
    return this->_DonGia;
}
void HangHoa::SetNgayNhap(const string& s)
{
    this->_NgayNhap = s;
}
string HangHoa::GetNgayNhap()
{
    return _NgayNhap;
}
void  HangHoa::HanSuDung(const string& s)
{
    this->_HanSuDung = s;
}
string HangHoa::GetHanSuDung()
{
    return _HanSuDung;
}
//void HangHoa::ADD()
//{   
//    List<HangHoa* >list;
//    HangHoa* s;
//    while(!HangHoa::FileIn.eof())
//    {
//        FileIn.seekg(1, ios_base::cur);
//        s = new HangHoa;
//        s->Nhap();
//        list.push_back(s);
//       /* FileIn.open("input1.txt", ios_base::in);
//        HangHoa::NhapHH();
//        FileIn.close();*/
//    }
//}
////void QuanLy::ADD()
////{
////  /*  NCC_NV* x;
////    while (!NCC_NV::FileIn.eof())
////    {
////        char s;
////        NCC_NV::FileIn >> s;
////        NCC_NV::FileIn.seekg(1, ios_base::cur);
////        if (s == 'A')
////        {
////            x = new NhaCungCap;
////            x->Nhap();
////            list.push_back(x);
////        }
////        else if (s == 'B')
////        {
////            x = new NhanVien;
////            x->Nhap();
////            list.push_back(x);
////        }
////    }*/
////    //while(!HangHoa::FileIn)
//void HangHoa::Show()
//{
//    while (!HangHoa::FileIn.eof())
//    {
//        HangHoa::Xuat();
//    }
//}
