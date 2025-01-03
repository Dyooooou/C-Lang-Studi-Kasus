// Setiap malam Minggu, Ima pergi dengan “adik angkat”-nya. Ia menyimpan kendaraannya di suatu tempat parkir. Kendaraan yang digunakan Ima ketika bermalam Minggu bisa motor ataupun mobil, tergantung “adik angkat”-nya ingin dijemput dengan apa.

// Di tempat parkir tersebut, ketentuan yang berlaku adalah:

// Parkir mobil: Rp1.500/jam
// Parkir motor: Rp1.000/jam
// Jika kendaraan sudah parkir lebih dari 5 jam, maka akan kena tarif tambahan sebesar Rp500/jam (baik motor maupun mobil).
// Jika kendaraan sudah parkir lebih dari 8 jam, maka kendaraan akan disegel oleh pengelola parkir.
// Malam Minggu ini Ima sedang kesepian, dan ia mengajakmu sebagai “adik angkat”-nya Ima. Sebagai “adik angkat” yang baik, bantulah Ima untuk menentukan biaya parkir yang harus dibayar dan memberitahu jika kendaraannya ternyata harus disegel!

// Spesifikasi Input


// Baris pertama berisi angka 1 jika kendaraan yang parkir adalah mobil, atau angka 2 jika kendaraan yang parkir adalah motor.

// Baris kedua berisi bilangan bulat berupa lama waktu parkir dalam satuan jam (0 < lama parkir ≤ 24).


// Spesifikasi Output

// Satu baris berisi bilangan bulat berupa total biaya parkir yang harus dibayarkan dalam rupiah, atau keluarkan “disegel” jika ternyata kendaraan Ima harus disegel.

// For example:

// Input	Result
// 1
// 5
// 7500
// 2
// 24
// disegel

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
                 if (waktu > 5 && waktu <= 8) {
                totalBiaya =1500*(waktu-1)+ 2000*(waktu-5);
                printf("%d", totalBiaya);
            }
            if (waktu <= 5){
                totalBiaya = 1500 * waktu;
                printf("%d", totalBiaya);
            }
            if (waktu > 8) {
                printf("disegel");
            }

          break;
        case 2 : /* isi instruksi jika jenis kendaraan 2 */ 
           if (waktu > 5 && waktu <= 8) {
                totalBiaya = 1000*(waktu-3)+1500*(waktu-5);
                printf("%d", totalBiaya);
            }
            if (waktu <= 5){
                totalBiaya = 1000 * waktu;
                printf("%d", totalBiaya);
            }
            if (waktu > 8) {
                printf("disegel");
            }
          break;
    }
    
    
    
    return 0;
}
