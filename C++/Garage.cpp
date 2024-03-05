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
#include "Car.cpp"
#include "Motorcycle.cpp"
// Deklarasi namespace
using namespace std;

class Garage
{
private:
    string NamaGarasi;
    string LuasGarasi;
    string DaftarKendaraan;
    Car Mobil;
    Motorcycle Motor;

public:
    Garage()
    {
    }

    Garage(string NamaGarasi)
    {
        this->NamaGarasi = NamaGarasi;
        LuasGarasi = "";
        DaftarKendaraan = "";
    }

    Garage(string NamaGarasi, string LuasGarasi)
    {
        this->NamaGarasi = NamaGarasi;
        this->LuasGarasi = LuasGarasi;
        DaftarKendaraan = "";
    }

    Garage(string NamaGarasi, string LuasGarasi, string DaftarKendaraan)
    {
        this->NamaGarasi = NamaGarasi;
        this->LuasGarasi = LuasGarasi;
        this->DaftarKendaraan = DaftarKendaraan;
    }

    Garage(string NamaGarasi, string LuasGarasi, string DaftarKendaraan, Car Mobil)
    {
        this->NamaGarasi = NamaGarasi;
        this->LuasGarasi = LuasGarasi;
        this->DaftarKendaraan = DaftarKendaraan;
        this->Mobil = Mobil;
    }

    Garage(string NamaGarasi, string LuasGarasi, string DaftarKendaraan, Car Mobil, Motorcycle Motor)
    {
        this->NamaGarasi = NamaGarasi;
        this->LuasGarasi = LuasGarasi;
        this->DaftarKendaraan = DaftarKendaraan;
        this->Mobil = Mobil;
        this->Motor = Motor;
    }

    void setNamaGarasi(string NamaGarasi)
    {
        this->NamaGarasi = NamaGarasi;
    }

    string getNamaGarasi()
    {
        return NamaGarasi;
    }

    void setLuasGarasi(string LuasGarasi)
    {
        this->LuasGarasi = LuasGarasi;
    }

    string getLuasGarasi()
    {
        return LuasGarasi;
    }

    void setDaftarKendaraan(string DaftarKendaraan)
    {
        this->DaftarKendaraan = DaftarKendaraan;
    }

    string getDaftarKendaraan(string DaftarKendaraan)
    {
        return DaftarKendaraan;
    }

    void setCar(Car Mobil)
    {
        this->Mobil = Mobil;
    }

    Car getCar()
    {
        return Mobil;
    }

    void setMotorcycle(Motorcycle Motor)
    {
        this->Motor = Motor;
    }

    Motorcycle getMotorcycle()
    {
        return Motor;
    }

    ~Garage()
    {
    }
};