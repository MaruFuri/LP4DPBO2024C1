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
#include "Vehicle.cpp"
// Deklarasi namespace
using namespace std;

class Car : public Vehicle
{
private:
    string JumlahKursi;
    string JumlahPintu;

public:
    Car()
    {
    }

    Car(string JumlahKursi, string PlatNomor, string Merk, string TahunProduksi, string Warna) : Vehicle(PlatNomor, Merk, TahunProduksi, Warna)
    {
        this->JumlahKursi = JumlahKursi;
        JumlahPintu = "";
    }

    Car(string JumlahKursi, string JumlahPintu, string PlatNomor, string Merk, string TahunProduksi, string Warna) : Vehicle(PlatNomor, Merk, TahunProduksi, Warna)
    {
        this->JumlahKursi = JumlahKursi;
        this->JumlahPintu = JumlahPintu;
    }

    void setJumlahKursi(string JumlahKursi)
    {
        this->JumlahKursi = JumlahKursi;
    }

    string getJumlahKursi()
    {
        return JumlahKursi;
    }

    void setJumlahPintu(string JumlahPintu)
    {
        this->JumlahPintu = JumlahPintu;
    }

    string getJumlahPintu()
    {
        return JumlahPintu;
    }

    ~Car()
    {
    }
};