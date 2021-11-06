#pragma
#include<iostream>
using namespace std;
#include "NhaCungCap.h"
#include "NCC_NV.h"
NhaCungCap::NhaCungCap(string ID,string Ten,string DiaChi) : NCC_NV()
{
    this->_DiaChi=DiaChi;
}
NhaCungCap::~NhaCungCap()
{

}
void NhaCungCap::Nhap()
{
    cout<<"Nha cung cap :"<<endl;
    NCC_NV::Nhap();
    cout<<"Dia chi : ";
    getline(cin,_DiaChi);
}
void NhaCungCap::Xuat()
{
    cout<<"Ten nha cung cap : "<<_Ten<<endl;
    cout<<"ID nha cung cap :"<<_ID<<endl;
    cout<<"Dia chi : "<<_DiaChi<<endl;
}
// void NhaCungCap::Nhap()
// {
//     NCC_NV::Nhap();
//     getline(FileIn,_DiaChi,'D');
// }
// void NhaCungCap::Xuat()
// {
//     NCC_NV::Xuat();
//     NCC_NV::FileOut<<"Dia chi = "<<_DiaChi<<endl;
//     cout<<"Dia chi = "<<_DiaChi<<endl;
// }
string NhaCungCap::GetDiaChi()
{
    return this->_DiaChi;
}