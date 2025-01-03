// Buatlah sebuah program untuk menghitung total biaya parkir motor atau mobil dengan ketentuan berikut:

// Mobil dikenakan tarif Rp2.000 untuk satu jam pertama dan Rp1.000 untuk setiap satu jam berikutnya;
// Motor dikenakan tarif Rp1.000 untuk satu jam pertama dan Rp5.00 untuk setiap satu jam berikutnya.


// Spesifikasi Input
// Baris pertama berisi angka 1 jika kendaraan yang parkir adalah mobil, atau angka 2 jika kendaraan yang parkir adalah motor.

// Baris kedua berisi bilangan bulat berupa lama waktu parkir dalam satuan jam (0 < lama parkir ≤ 24).

// Spesifikasi Output
// Satu baris berisi bilangan bulat berupa total biaya parkir yang harus dibayarkan dalam rupiah.

#include<stdio.h>


int main(){
    /* Kamus Data */
    int jenisKendaraan;
    int waktu;
    int totalBiaya;
    
    /* Algoritma */
    // input jenis kendaraan
    scanf("%d", &jenisKendaraan);
    // input lama parkir (dalam jam)
    scanf("%d", &waktu);
    
    
    switch(jenisKendaraan){
        case 1 : /* isi instruksi jika jenis kendaraan 1 */ 
            totalBiaya=2000+(1000*(waktu-1));
          break;
        case 2 : /* isi instruksi jika jenis kendaraan 2 */ 
            totalBiaya=1000+((waktu-1)*500);
          break;
    }
    
    printf("%d", totalBiaya);
    
    return 0;
}
