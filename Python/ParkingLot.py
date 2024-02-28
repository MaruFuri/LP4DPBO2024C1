# Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 4
# dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
# melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

from Car import Car
from Motorcycle import Motorcycle

class ParkingLot:
    def __init__(self, kapasitas):
        self._kapasitas = kapasitas
        self._jumlah_kendaraan_terparkir = 0

    def park_vehicle(self):
        if self._jumlah_kendaraan_terparkir < self._kapasitas:
            self._jumlah_kendaraan_terparkir += 1
            print("Kendaraan berhasil diparkir.")
        else:
            print("Parking lot penuh, tidak dapat memarkir kendaraan.")

    def unpark_vehicle(self):
        if self._jumlah_kendaraan_terparkir > 0:
            self._jumlah_kendaraan_terparkir -= 1
            print("Kendaraan berhasil dikeluarkan.")
        else:
            print("Parking lot kosong, tidak ada kendaraan yang bisa dikeluarkan.")

    def tampilkan_info(self):
        print(f"Parking Lot Kapasitas: {self._kapasitas}")
        print(f"Jumlah Kendaraan Terparkir: {self._jumlah_kendaraan_terparkir}")
