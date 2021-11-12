#pragma once 
#include<string>
#include "NCC_NV.h"
using namespace std;
class NhaCungCap : public NCC_NV
{
private:
    string _DiaChi;
    string _KhuVuc;
public:
    NhaCungCap(string = "", string = "", string = "", string = "");
    ~NhaCungCap();
    void Nhap(fstream&);
    void Xuat(fstream&);
    string GetDiaChi();
    void SetDiaChi(string);
    string GetKhuVuc();
    void SetKhuVuc(string);
};

