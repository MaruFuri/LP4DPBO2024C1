## Desain:  
![Class Diagram](https://github.com/MaruFuri/LP4DPBO2024C1/assets/100757350/3a183802-52c1-4509-bc4d-3d55e8d71f88)  

## Penjelasan Desain:  
Inheritance:  
Vehicle: Parent  
Car dan Motorcycle: Childs  
Composite:  
Garage composite Car dan Motorcycle  
ParkingLot composite Vehicle  


## Revisi Desain  
![Revisi Class Diagram](https://github.com/MaruFuri/LP4DPBO2024C1/assets/100757350/39a7c94c-39bb-47fc-b4d2-bfc59b8e18a9)

## Penjelasan Desain:  
**Vehicle** merupakan class **parent** dari class **Car** dan class **Motorcycle**.   
**Alasan:** Karena **Vehicle** merupakan **istilah umum** untuk kendaraan seperti **mobil** dan **motor**.  
**Garage** dan **ParkingLot** adalah class yang _composite_ atau "Has a" dengan class **Car** dan class **Motorcycle**.  
**Alasan:** Karena **Garage** dan **ParkingLot** adalah kelas **tidak sejenis** dengan class **Car** dan class **Motorcycle**,  
sehingga tidak mungkin _inheritance_, namun **Garage** dan **ParkingLot** dapat memiliki class **Car** dan class **Motorcycle** di dalamnya.
