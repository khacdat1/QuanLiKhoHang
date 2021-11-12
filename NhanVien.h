#pragma once
#include<string>
#include"NCC_NV.h"
using namespace std;
class NhanVien : public NCC_NV
{
private:
    string _CaLam;
    string _ChucVu;
public:
    NhanVien(string = "", string = "", string = "", string = "");
    ~NhanVien();
    void Nhap(fstream&);
    void Xuat(fstream&);
    string GetCaLam();
    string GetChucVu();
    void SetCaLam(string);
    void SetChucVu(string);
};

