#pragma once
#include <string>
#include <fstream>
using namespace std;
class NCC_NV
{
protected:
    string _Ten;
    string _ID;
public:
   /* NCC_NV();
    ~NCC_NV();*/
    virtual void Nhap(fstream&);
    virtual void Xuat(fstream&);
};
