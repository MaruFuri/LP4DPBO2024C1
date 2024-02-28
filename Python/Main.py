# Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 4
# dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
# melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Import Class
from Car import Car
from Motorcycle import Motorcycle
from Garage import Garage
from ParkingLot import ParkingLot

# Membuat beberapa objek kendaraan
mobil1 = Car("F 1234 CD", "Subaru", 2020, "Merah", 5, 4)
mobil2 = Car("B 5678 GH", "Honda", 2021, "Biru", 5, 4)
mobil3 = Car("D 9012 IJ", "Wuling", 2022, "Putih", 7, 4)
mobil4 = Car("D 3456 KL", "Hyundai", 2023, "Hitam", 5, 4)
mobil5 = Car("F 7890 MN", "Tesla", 2024, "Silver", 5, 4)
mobil6 = Car("B 1234 OP", "Mitsubishi", 2025, "Hijau", 5, 4)

motor1 = Motorcycle("F 5678 EF", "Yamaha", 2021, "Hitam", "Sport", 10)
motor2 = Motorcycle("D 9012 QR", "Honda", 2022, "Merah", "Matic", 10)
motor3 = Motorcycle("F 3456 TU", "Suzuki", 2023, "Biru", "Sport", 10)

# Membuat objek garasi dan menambahkan kendaraan ke dalamnya
garasi1 = Garage("Garasi 1", 100)
garasi1.tambah_kendaraan(mobil1)
garasi1.tambah_kendaraan(mobil2)
garasi1.tambah_kendaraan(mobil3)
garasi1.tambah_kendaraan(mobil4)
garasi1.tambah_kendaraan(mobil5)
garasi1.tambah_kendaraan(mobil6)
garasi1.tambah_kendaraan(motor1)
garasi1.tambah_kendaraan(motor2)
garasi1.tambah_kendaraan(motor3)

# Membuat objek parking lot dan memarkir kendaraan
parking_lot1 = ParkingLot(50)
parking_lot1.park_vehicle()
parking_lot1.park_vehicle()

# Menampilkan informasi
print("Informasi Garasi:")
garasi1.tampilkan_info_kendaraan()

print("Informasi Parking Lot:")
parking_lot1.tampilkan_info()



