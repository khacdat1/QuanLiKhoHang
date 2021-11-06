#pragma
#include <iostream>
#include "NCC_NV.h"
ifstream NCC_NV::FileIn;
ofstream NCC_NV::FileOut;
NCC_NV::NCC_NV(string ten,string id) : _Ten(ten),_ID(id)
{

}
NCC_NV::~NCC_NV()
{

}
void NCC_NV::Nhap()
{
    cout<<"Nhap ID = ";
    getline(cin,_ID);
    cout<<"Nhap ten = ";
    getline(cin,_Ten);
}
void NCC_NV::Xuat()
{
    cout<<"ID  = "<<_ID<<endl;
    cout<<"Ten = "<<_Ten<<endl;
}
// void NCC_NV::Nhap()
// {
//     FileIn.open("input.txt");
//     getline(FileIn,_Ten,',');
//     FileIn.seekg(0,ios_base::cur);
//     getline(FileIn,_ID,',');
//     FileIn.seekg(1,ios_base::cur);
//     FileIn.close();
// }
// void NCC_NV::Xuat()
// {
//     FileOut.open("output.txt",ios::out);
//     FileOut<<"ID  = "<<_ID;
//     FileOut<<"Ten = "<<_Ten<<endl;
//     cout<<"ID  = "<<_ID;
//     cout<<"Ten = "<<_Ten<<endl;
//     FileOut.close();
// }