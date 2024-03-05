/*
Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 4
dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
// Pragma once diguanakan agar header file hanya di-include satu kali
#pragma once
// Library yang digunakan
#include <iostream>
#include <string>
// Deklarasi namespace
using namespace std;

class Vehicle
{
private:
    string PlatNomor;
    string Merk;
    string TahunProduksi;
    string Warna;

public:
    Vehicle()
    {
    }

    Vehicle(string PlatNomor)
    {
        this->PlatNomor = PlatNomor;
        Merk = "";
        TahunProduksi = "";
        Warna = "";
    }

    Vehicle(string PlatNomor, string Merk)
    {
        this->PlatNomor = PlatNomor;
        this->Merk = Merk;
        TahunProduksi = "";
        Warna = "";
    }

    Vehicle(string PlatNomor, string Merk, string TahunProduksi)
    {
        this->PlatNomor = PlatNomor;
        this->Merk = Merk;
        this->TahunProduksi = TahunProduksi;
        Warna = "";
    }

    Vehicle(string PlatNomor, string Merk, string TahunProduksi, string Warna)
    {
        this->PlatNomor = PlatNomor;
        this->Merk = Merk;
        this->TahunProduksi = TahunProduksi;
        this->Warna = Warna;
    }

    void setPlatNomor(string PlatNomor)
    {
        this->PlatNomor = PlatNomor;
    }

    string getPlatNomor()
    {
        return PlatNomor;
    }

    void setMerk(string Merk)
    {
        this->Merk = Merk;
    }

    string getMerk()
    {
        return Merk;
    }

    void setTahunProduksi(string TahunProduksi)
    {
        this->TahunProduksi = TahunProduksi;
    }

    string getTahunProduksi()
    {
        return TahunProduksi;
    }

    void setWarna(string Warna)
    {
        this->Warna = Warna;
    }

    string getWarna()
    {
        return Warna;
    }

    ~Vehicle()
    {
    }
};