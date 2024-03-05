/*
Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 4
dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
// Library yang digunakan
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "Garage.cpp"
#include "ParkingLot.cpp"
// Deklarasi namespace
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie();

    // Membuat objek Garage
    Garage myGarage("Garasi Saya", "100 m^2");

    // Menampilkan informasi garasi
    cout << "Informasi Garasi:" << endl;
    cout << "Nama Garasi:" << myGarage.getNamaGarasi() << endl;
    cout << "Luas Garasi:" << myGarage.getLuasGarasi() << endl;
    cout << endl;

    // Membuat dan memparkirkan mobil pertama
    Car car1("5 seat", "4 Pintu", "F 1234 CD", "Subaru", "2020", "Merah");
    myGarage.setCar(car1);

    // Menampilkan informasi mobil pertama
    cout << "Mobil berhasil diparkir." << endl;
    cout << "Plat Nomor: " << myGarage.getCar().getPlatNomor() << endl;
    cout << "Merk: " << myGarage.getCar().getMerk() << endl;
    cout << "Produksi: " << myGarage.getCar().getTahunProduksi() << endl;
    cout << "Warna: " << myGarage.getCar().getWarna() << endl;
    cout << "Jumlah Kursi: " << myGarage.getCar().getJumlahKursi() << endl;
    cout << "Jumlah Pintu: " << myGarage.getCar().getJumlahPintu() << endl;
    cout << endl;

    // Membuat dan memparkirkan mobil kedua
    Car car2("5 seat", "4 Pintu", "B 5678 GH", "Honda", "2021", "Biru");
    myGarage.setCar(car2);

    // Menampilkan informasi mobil kedua
    cout << "Mobil berhasil diparkir." << endl;
    cout << "Plat Nomor: " << myGarage.getCar().getPlatNomor() << endl;
    cout << "Merk: " << myGarage.getCar().getMerk() << endl;
    cout << "Produksi: " << myGarage.getCar().getTahunProduksi() << endl;
    cout << "Warna: " << myGarage.getCar().getWarna() << endl;
    cout << "Jumlah Kursi: " << myGarage.getCar().getJumlahKursi() << endl;
    cout << "Jumlah Pintu: " << myGarage.getCar().getJumlahPintu() << endl;
    cout << endl;

    Motorcycle motor1("Matic", "5 Liter", "F 5331 XG", "Yamaha", "2015", "Abu-abu");
    myGarage.setMotorcycle(motor1);

    // Menampilkan informasi motor pertama
    cout << "Motor berhasil diparkir." << endl;
    cout << "Plat Nomor: " << myGarage.getMotorcycle().getPlatNomor() << endl;
    cout << "Merk: " << myGarage.getMotorcycle().getMerk() << endl;
    cout << "Produksi: " << myGarage.getMotorcycle().getTahunProduksi() << endl;
    cout << "Warna: " << myGarage.getMotorcycle().getWarna() << endl;
    cout << "Jenis Motor: " << myGarage.getMotorcycle().getJenisMotor() << endl;
    cout << "Kapasitas Tangki: " << myGarage.getMotorcycle().getKapasitasTangki() << endl;
    cout << endl;

    // Membuat objek ParkingLot
    ParkingLot myParkingLot("50", "3");

    // Menampilkan informasi parking lot
    cout << "Informasi Parking Lot:" << endl;
    cout << "Parking Lot Kapasitas: " << myParkingLot.getKapasitas() << endl;
    cout << "Jumlah Kendaraan Terparkir: " << myParkingLot.getJumlahKendaraanTerparkir() << endl;
    cout << endl;

    Car car3("5 seat", "4 Pintu", "B 4301 X", "Tesla", "2021", "Putih");
    myParkingLot.setCar(car3);

    // Menampilkan informasi mobil ketiga
    cout << "Mobil berhasil diparkir." << endl;
    cout << "Plat Nomor: " << myParkingLot.getCar().getPlatNomor() << endl;
    cout << "Merk: " << myParkingLot.getCar().getMerk() << endl;
    cout << "Produksi: " << myParkingLot.getCar().getTahunProduksi() << endl;
    cout << "Warna: " << myParkingLot.getCar().getWarna() << endl;
    cout << "Jumlah Kursi: " << myParkingLot.getCar().getJumlahKursi() << endl;
    cout << "Jumlah Pintu: " << myParkingLot.getCar().getJumlahPintu() << endl;
    cout << endl;

    Car car4("4 seat", "2 Pintu", "F 5331 GR", "Toyota", "2024", "Merah");
    myParkingLot.setCar(car4);

    // Menampilkan informasi mobil keempat
    cout << "Mobil berhasil diparkir." << endl;
    cout << "Plat Nomor: " << myParkingLot.getCar().getPlatNomor() << endl;
    cout << "Merk: " << myParkingLot.getCar().getMerk() << endl;
    cout << "Produksi: " << myParkingLot.getCar().getTahunProduksi() << endl;
    cout << "Warna: " << myParkingLot.getCar().getWarna() << endl;
    cout << "Jumlah Kursi: " << myParkingLot.getCar().getJumlahKursi() << endl;
    cout << "Jumlah Pintu: " << myParkingLot.getCar().getJumlahPintu() << endl;
    cout << endl;

    Motorcycle motor2("Sport", "12 Liter", "D 5432 GG", "Kawasaki", "2023", "Hijau");
    myParkingLot.setMotorcycle(motor2);

    // Menampilkan informasi motor kedua
    cout << "Motor berhasil diparkir." << endl;
    cout << "Plat Nomor: " << myParkingLot.getMotorcycle().getPlatNomor() << endl;
    cout << "Merk: " << myParkingLot.getMotorcycle().getMerk() << endl;
    cout << "Produksi: " << myParkingLot.getMotorcycle().getTahunProduksi() << endl;
    cout << "Warna: " << myParkingLot.getMotorcycle().getWarna() << endl;
    cout << "Jenis Motor: " << myParkingLot.getMotorcycle().getJenisMotor() << endl;
    cout << "Kapasitas Tangki: " << myParkingLot.getMotorcycle().getKapasitasTangki() << endl;
    cout << endl;

    return 0;
};