#pragma
#include<string>
#include "NCC_NV.h"
using namespace std;
class NhaCungCap : public NCC_NV
{
private:
    string _DiaChi;
public:
    NhaCungCap(string = "", string ="",string= "");
    ~NhaCungCap();
    void Nhap();
    void Xuat();
    string GetDiaChi();
};

