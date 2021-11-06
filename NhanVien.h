#pragma
#include<string>
#include"NCC_NV.h"
using namespace std;
class NhanVien : public NCC_NV
{
    private:
        string _Ca;
        string _Chucvu;
    public:
        NhanVien(string ="",string = "",string = "",string = "");
        ~NhanVien();
        void Nhap();
        void Xuat();
        string GetCa();
        string GetChucVu();
};