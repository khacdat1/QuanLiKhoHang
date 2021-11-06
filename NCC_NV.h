#pragma once
#include <string>
#include <fstream>
using namespace std;
class NCC_NV
{
    public :
        static ifstream FileIn;
        static ofstream FileOut;
    protected:
        string _Ten;
        string _ID;
    public :
        NCC_NV(string ="", string = "");
        ~NCC_NV();
        virtual void Nhap();
        virtual void Xuat();
};