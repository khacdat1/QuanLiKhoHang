#pragma 
#include <iostream>
using namespace std;
#include "LoaiHangHoa.h"
LoaiHangHoa::LoaiHangHoa(string ID,string Ten) :_IDLoaiHangHoa(ID),_TenLoaiHangHoa(Ten)
{

}
LoaiHangHoa::~LoaiHangHoa()
{

}
void LoaiHangHoa::Nhap()
{
    cout<<"Nhap ID : ";
    getline(cin,_IDLoaiHangHoa);
    cout<<"Nhap ten loai : ";
    getline(cin,_TenLoaiHangHoa);
}
void LoaiHangHoa::Xuat()
{
    cout<<"ID Loai hang hoa = "<<_IDLoaiHangHoa<<endl;
    cout<<"Ten loai hang hoa = "<<_TenLoaiHangHoa<<endl;
}
string LoaiHangHoa::GetIDLHH()
{
    return this->_IDLoaiHangHoa;
}

