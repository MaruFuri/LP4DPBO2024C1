# LP4DPBO2024C1  
## Latihan praktikum 4 DPBO 2024.  
Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 4  
dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak  
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.    

Detail Soal Latihan Praktikum 4:  
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++ dan Python  
yang mengimplementasikan konsep inheritance, composition, dan array of object  
pada kelas-kelas berikut :  
1. Vehicle : plat nomor, merk, tahun produksi, warna  
2. Car : jumlah kursi, jumlah pintu  
3. Motorcycle : jenis motor, kapasitas tangki  
4. Garage : nama garasi, luas garasi, daftar kendaraan  
5. ParkingLot : kapasitas, jumlah kendaraan saat ini  

## Revisi Desain  
![Revisi Class Diagram](https://github.com/MaruFuri/LP4DPBO2024C1/assets/100757350/39a7c94c-39bb-47fc-b4d2-bfc59b8e18a9)

## Penjelasan Desain:  
**Vehicle** merupakan class **parent** dari class **Car** dan class **Motorcycle**.   
**Alasan:** Karena **Vehicle** merupakan **istilah umum** untuk kendaraan seperti **mobil** dan **motor**.  
**Garage** dan **ParkingLot** adalah class yang _composite_ atau "Has a" dengan class **Car** dan class **Motorcycle**.  
**Alasan:** Karena **Garage** dan **ParkingLot** adalah kelas **tidak sejenis** dengan class **Car** dan class **Motorcycle**,  
sehingga tidak mungkin _inheritance_, namun **Garage** dan **ParkingLot** dapat memiliki class **Car** dan class **Motorcycle** di dalamnya.

*Penjelasan program ada di file
## Output:  
![Output Parking Lot](https://github.com/MaruFuri/LP4DPBO2024C1/assets/100757350/2d5127d2-7088-43dc-9d5b-08eed6ec5082)
![Output Garage](https://github.com/MaruFuri/LP4DPBO2024C1/assets/100757350/888afe69-d14c-44a4-a206-f5ba80a4fc58)
