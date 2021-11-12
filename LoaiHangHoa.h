#pragma once
#include <string>
#include "NCC_NV.h"
using namespace std;
class LoaiHangHoa
{
private:
   string _IDLoaiHangHoa;
   string _TenLoaiHangHoa;
public:
   LoaiHangHoa(string = " ", string = " ");
   ~LoaiHangHoa();
   void Nhap();
   void Xuat();
   string GetIDLHH();
   string GetTen();
};

