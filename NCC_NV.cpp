#include <iostream>
#include "NCC_NV.h"

//NCC_NV::NCC_NV()
//{
//
//}
//NCC_NV::~NCC_NV()
//{
//
//}
void NCC_NV::Nhap(fstream& File)
{
    /*FileIn.open("input.txt");*/
    getline(File, this->_Ten, ',');
    File.seekg(1, SEEK_CUR);
    getline(File, this->_ID, ',');
    File.seekg(1, SEEK_CUR);
    /*FileIn.close();*/
}
void NCC_NV::Xuat(fstream& File)
{
    /*FileOut.open("output.txt", ios::out);*/
    File << "ID  = " << _ID << endl;
    File << "Ten = " << _Ten << endl;
   /* FileOut.close();*/
}
 //void NCC_NV::Nhap()
 //{
 //    cout<<"Nhap ID = ";
 //    getline(cin,_ID);
 //    cout<<"Nhap ten = ";
 //    getline(cin,_Ten);
 //}
 //void NCC_NV::Xuat()
 //{
 //    cout<<"ID  = "<<_ID<<endl;
 //    cout<<"Ten = "<<_Ten<<endl;
 //}
