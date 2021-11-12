#include<iostream>
#include<string>
#include"NhanVien.h"
using namespace std;
NhanVien::NhanVien(string ID, string Ten, string CaLam, string Chucvu) : NCC_NV()
{
    this->_CaLam = CaLam;
    this->_ChucVu = Chucvu;
}
NhanVien::~NhanVien()
{

}
void NhanVien::Nhap(fstream& File)
{
    NCC_NV::Nhap(File);
    getline(File, this->_CaLam, ',');
    File.seekg(1, SEEK_CUR);
    getline(File, this->_ChucVu);
}
// void NhanVien::Xuat()
// {
//     cout<<"ID nhan vien :"<<_ID<<endl;
//     cout<<"Ten nhan vien : "<<_Ten<<endl;
//     cout<<"Ca lam viec : "<<_Ca<<endl;
//     cout<<"Chuc vu :"<<_Chucvu<<endl;
// }
// void NhanVien::Nhap()
// {
//     NCC_NV::Nhap();
//     getline(FileIn,_Ca,) //xem lại chỗ này 
//     getline(FileIn,_Chucvu,)
// }
void NhanVien::Xuat(fstream& File)
{
    File << "Nhan vien : " << endl;
    NCC_NV::Xuat(File);
    File << "Ca lam = " << _CaLam << endl;
    File << "Chuc vu = " << _ChucVu << endl;
    File << "\n";
}
string NhanVien::GetCaLam()
{
    return this->_CaLam;
}
string NhanVien::GetChucVu()
{
    return this->_ChucVu;
}
void NhanVien::SetCaLam(string CaLam)
{
    this->_CaLam = CaLam;
}
void NhanVien::SetChucVu(string ChucVu)
{
    this->_ChucVu = ChucVu;
}
