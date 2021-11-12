#pragma once
#include<string>
#include<fstream>
using namespace std;
class HoaDon 
{
private:
    string IdHoadon;
    string IdNhanvien;
    string IdNhacungcap;
    string IdHanghoa;
    int Soluong;
    double Thanhtien;
    double DonGia;
    string Trangthai;
    string Ngaynhap;
    string Ngayxuat;
public:
    HoaDon();
    ~HoaDon();
    void TinhTien();
    int getSoluong();
    void setSoluong();
    int getDonGia();
    void setDonGia();
    double getThanhtien();
    void TaoHoaDon();
    // void seachIdHanghoa();
    void NhapFile(fstream&);
    void XuatFile(fstream&);
};

