#include<iostream>
using namespace std;
#include "NhaCungCap.h"
#include "NCC_NV.h"
NhaCungCap::NhaCungCap(string ID, string Ten, string DiaChi, string KhuVuc) : NCC_NV()
{
    this->_DiaChi = DiaChi;
    this->_KhuVuc = KhuVuc;
}
NhaCungCap::~NhaCungCap()
{

}
void NhaCungCap::Nhap(fstream& File)
{
    //cout<<"Nha cung cap :"<<endl;
    NCC_NV::Nhap(File);
    //cout<<"Dia chi : ";
    getline(File, this->_DiaChi,',');
    File.seekg(1, SEEK_CUR);
    getline(File, this->_KhuVuc);
}
void NhaCungCap::Xuat(fstream& File)
{
    File << "nha cung cap : " << endl;
    NCC_NV::Xuat(File);
    File << "Dia chi : " << this->_DiaChi << endl;
    File << "Khu vuc : " << this->_KhuVuc << endl;
    File << "\n";
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
void NhaCungCap::SetDiaChi(string KhuVuc)
{
    this->_DiaChi = KhuVuc;
}
string NhaCungCap::GetKhuVuc()
{
    return this->_KhuVuc;
}
void NhaCungCap::SetKhuVuc(string KhuVuc)
{
    this->_KhuVuc = KhuVuc;
}
