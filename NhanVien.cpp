#include<iostream>
#include<string>
#include"NhanVien.h"
#include "NCC_NV.h"
using namespace std;
NhanVien::NhanVien(string ID,string Ten,string Ca,string Chucvu) : NCC_NV()
{
    this->_Ca=Ca;
    this->_Chucvu=Chucvu;
}
NhanVien::~NhanVien()
{

}
void NhanVien::Nhap()
{
    cout<<"Nhan vien :"<<endl;
    NCC_NV::Nhap();
    cout<<"Nhap ca lam viec (sang/toi) : ";
    getline(cin,_Ca);
    cout<<"Nhap chuc vu (nhan vien,quan li) :";
    getline(cin,_Chucvu);
}
void NhanVien::Xuat()
{
    cout<<"ID nhan vien :"<<_ID<<endl;
    cout<<"Ten nhan vien : "<<_Ten<<endl;
    cout<<"Ca lam viec : "<<_Ca<<endl;
    cout<<"Chuc vu :"<<_Chucvu<<endl;
}
// void NhanVien::Nhap()
// {
//     NCC_NV::Nhap();
//     getline(FileIn,_Ca,) //xem lại chỗ này 
//     getline(FileIn,_Chucvu,)
// }
// void NhanVien::Xuat()
// {
//     NCC_NV::Xuat();
//     NCC_NV::FileOut<<"Ca = "<<_Ca<<endl;
//     cout<<"Ca = "<<_Ca<<endl;
//     NCC_NV::FileOut<<"Chuc vu = "<<_Chucvu<<endl;
//     cout<<"Chuc vu = "<<_Chucvu<<endl;
// }
string NhanVien::GetCa()
{
    return this->_Ca;
}
string NhanVien::GetChucVu()
{
    return this->_Chucvu;
}