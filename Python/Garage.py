# Saya Akmal Zulkifli, NIM 2101310, mengerjakan soal Latihan 4
# dalam mata kuliah DPBO. Untuk keberkahannya maka saya tidak
# melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

from Car import Car
from Motorcycle import Motorcycle

class Garage:
    def __init__(self, nama_garasi, luas_garasi):
        self._nama_garasi = nama_garasi
        self._luas_garasi = luas_garasi
        self._daftar_kendaraan = []

    def get_nama_garasi(self):
        return self._nama_garasi

    def set_nama_garasi(self, nama_garasi):
        self._nama_garasi = nama_garasi

    def get_luas_garasi(self):
        return self._luas_garasi

    def set_luas_garasi(self, luas_garasi):
        self._luas_garasi = luas_garasi

    def get_daftar_kendaraan(self):
        return self._daftar_kendaraan

    def tambah_kendaraan(self, kendaraan):
        self._daftar_kendaraan.append(kendaraan)

    def hapus_kendaraan(self, kendaraan):
        self._daftar_kendaraan.remove(kendaraan)
    
    def tampilkan_info_kendaraan(self):
        for kendaraan in self._daftar_kendaraan:
            if isinstance(kendaraan, Car):
                print("Mobil berhasil diparkir.")
            elif isinstance(kendaraan, Motorcycle):
                print("Motor berhasil diparkir.")
            print(f"Plat Nomor: {kendaraan.get_plat_nomor()}")
            print(f"Merk: {kendaraan.get_merk()}")
            print(f"Produksi: {kendaraan.get_tahun_produksi()}")
            print(f"Warna: {kendaraan.get_warna()}")
            if isinstance(kendaraan, Car):
                print(f"Jumlah Kursi: {kendaraan.get_jumlah_kursi()} seat")
                print(f"Jumlah Pintu: {kendaraan.get_jumlah_pintu()} Pintu")
            elif isinstance(kendaraan, Motorcycle):
                print(f"Jenis Motor: {kendaraan.get_jenis_motor()}")
                print(f"Kapasitas Tangki: {kendaraan.get_kapasitas_tangki()} Liter")
            print()