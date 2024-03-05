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

class Motorcycle : public Vehicle
{
private:
    string JenisMotor;
    string KapasitasTangki;

public:
    Motorcycle()
    {
    }

    Motorcycle(string JenisMotor, string PlatNomor, string Merk, string TahunProduksi, string Warna) : Vehicle(PlatNomor, Merk, TahunProduksi, Warna)
    {
        this->JenisMotor = JenisMotor;
        KapasitasTangki = "";
    }

    Motorcycle(string JenisMotor, string KapasitasTangki, string PlatNomor, string Merk, string TahunProduksi, string Warna) : Vehicle(PlatNomor, Merk, TahunProduksi, Warna)
    {
        this->JenisMotor = JenisMotor;
        this->KapasitasTangki = KapasitasTangki;
    }

    void setJenisMotor(string JenisMotor)
    {
        this->JenisMotor = JenisMotor;
    }

    string getJenisMotor()
    {
        return JenisMotor;
    }

    void setKapasitasTangki(string KapasitasTangki)
    {
        this->KapasitasTangki = KapasitasTangki;
    }

    string getKapasitasTangki()
    {
        return KapasitasTangki;
    }

    ~Motorcycle()
    {
    }
};