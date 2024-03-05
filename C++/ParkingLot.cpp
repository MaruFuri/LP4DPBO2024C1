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

class ParkingLot
{
private:
    string Kapasitas;
    string JumlahKendaraanTerparkir;
    Car Mobil;
    Motorcycle Motor;

public:
    ParkingLot()
    {
    }

    ParkingLot(string Kapasitas)
    {
        this->Kapasitas = Kapasitas;
        JumlahKendaraanTerparkir = "";
    }

    ParkingLot(string Kapasitas, string JumlahKendaraanTerparkir)
    {
        this->Kapasitas = Kapasitas;
        this->JumlahKendaraanTerparkir = JumlahKendaraanTerparkir;
    }

    ParkingLot(string Kapasitas, string JumlahKendaraanTerparkir, Car Mobil)
    {
        this->Kapasitas = Kapasitas;
        this->JumlahKendaraanTerparkir = JumlahKendaraanTerparkir;
        this->Mobil = Mobil;
    }

    ParkingLot(string Kapasitas, string JumlahKendaraanTerparkir, Car Mobil, Motorcycle Motor)
    {
        this->Kapasitas = Kapasitas;
        this->JumlahKendaraanTerparkir = JumlahKendaraanTerparkir;
        this->Mobil = Mobil;
        this->Motor = Motor;
    }

    void setKapasitas(string Kapasitas)
    {
        this->Kapasitas = Kapasitas;
    }

    string getKapasitas()
    {
        return Kapasitas;
    }

    void setJumlahKendaraanTerparkir(string JumlahKendaraanTerparkir)
    {
        this->JumlahKendaraanTerparkir = JumlahKendaraanTerparkir;
    }

    string getJumlahKendaraanTerparkir()
    {
        return JumlahKendaraanTerparkir;
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

    ~ParkingLot()
    {
    }
};
