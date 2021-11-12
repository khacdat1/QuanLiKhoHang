#pragma once      
#include <iostream>
#include <string>
#include <fstream>
#include "QuanLy.h"
using namespace std;
class HangHoa 
{
protected:
    string _IDHangHoa;
    string _IDNhaCungCap;
    string _TenHangHoa;
    string _IDLoaiHangHoa;
    double _SoLuong;
    double _DonGia;
    string _NgayNhap;
    string _HanSuDung;
public:
    HangHoa(string = "", string = "", string = "", string = "",double = 0,double=0, string = "", string = "");
    ~HangHoa();
    void SetIDHangHoa(const string&);
    string GetIDHangHoa();
    void SetTenHangHoa(const string&);
    string GetTenHangHoa();
    void SetSoLuong(const double&);
    double GetSoLuong();
    void SetDonGia(const double&);
    double GetDonGia();
    void SetNgayNhap(const string&);
    string GetNgayNhap();
    void  HanSuDung(const string&);
    string GetHanSuDung();
    void Xuat();
    void Nhap();
   // void ADD();
   // void Show();
   /* void Update();
    void Delete();
    string Search();*/
    void NhapFile(fstream&);
    void XuatFile(fstream&);
};
