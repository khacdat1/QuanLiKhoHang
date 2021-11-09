#include "HoaDon.h"
#include <iostream>
// #include <iomanip>
using namespace std;
HoaDon::HoaDon()
{

}

HoaDon::~HoaDon()
{

}
int HoaDon::getSoluong()
{
    return this->Soluong;
}
void HoaDon::setSoluong()
{
    this->Soluong = Soluong;
}
int HoaDon::getDonGia()
{
    
    return this->DonGia;
}
void HoaDon::setDonGia()
{
    this->DonGia=DonGia;
}
double HoaDon::getThanhtien()
{   
    return this->Thanhtien=this->Soluong*this->DonGia;
}
// void HoaDon::seachIdHanghoa()
// {

// }
void HoaDon::TaoHoaDon()
{
    // cout<<"Nhap ID hoa don";
    // fstream file;
    // file.open(IdHoadon, ios::app);
    // getline(cin,IdHoadon);
    // cout<<"Nhap ID nhan vien";
    // getline(cin,IdNhanvien);
    // file<<IdNhanvien;
    // cout<<"Nhap ID nha cung cap";
    // getline(cin,IdNhacungcap);
    // file<<IdNhacungcap;
    // cout<<"Nhap ID loai hang hoa";
    // getline(cin,IdLoaihanghoa);
    // file<<IdLoaihanghoa;
    // cout<<"Nhap so luong";
    // cin>>Soluong;
    // file<<Soluong;
    // cout<<"Nhap trang thai";
    // getline(cin,Trangthai);
    // file<<Trangthai;
    // cout<<"Nhap ngay nhap";
    // getline(cin,Ngaynhap);
    // file<<Ngaynhap;
   
    // file<<Ngayxuat;
    cout<<"Nhap ID hoa don: ";
    getline(cin,IdHoadon);
    cout<<"Nhap ID nhan vien: ";
    getline(cin,IdNhanvien);
    cout<<"Nhap ID nha cung cap: ";
    getline(cin,IdNhacungcap);
    cout<<"Nhap ID loai hang hoa: ";
    getline(cin,IdHanghoa);
    cout<<"Nhap trang thai: ";
    getline(cin,Trangthai);
    cout<<"Nhap ngay nhap: ";
    getline(cin,Ngaynhap);
    cout<<"Nhap so luong: ";
    cin>>Soluong;
    cout<<"Nhap don gia: ";
    cin>>DonGia;
    ofstream fcout;
    fcout.open("hoadon.txt",ios::app);
    fcout<<""<<IdHoadon<<","<<IdNhanvien<<","<<IdNhacungcap<<","<<IdHanghoa<<","<<Trangthai<<","<<Ngaynhap<<","<<Soluong<<","<<DonGia<<endl;
    fcout.close();
}
