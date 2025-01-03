// Kedua buah kue dapat dikatakan sama apabila kesamaan komposisi keduanya lebih dari atau sama dengan N% (urutan komposisi kue tidak dipermasalahkan).

// Sebuah kue maksimal terdiri dari 8 bahan yang berbeda. Bahan-bahan itu adalah

// t : telur
// g : gula
// r : ragi 
// p : tepung
// m : mentega
// a : air
// c : coklat
// s : susu
// k : kentang
// f : fermipan
// j : keju
// n : nanas
// o : sosis
// (semua kode bahan merupakan huruf kecil)

// Anda diberikan komposisi dari kue K dan kue L yang masing-masing disimpan ke sebuah array . Tentukanlah apakah kue K dan kue L sama.

// Spesifikasi Input
// Baris pertama berisi sebuah bilangan riil N (50 ≤ N ≤ 100) dalam satuan persentase sebagai batas minimal dua buah kue dinyatakan sama.

// Baris kedua berisi komposisi kue K yang ditulis dalam tipe karakter (inisial / kode bahan) dan dipisahkan oleh spasi (komposisi boleh kurang dari 8 bahan).

// Baris kedua berisi komposisi kue L yang ditulis dalam tipe karakter (inisial / kode bahan) dan dipisahkan oleh spasi (komposisi boleh kurang dari 8 bahan).


// Spesifikasi Output
// Satu baris berisi “sama” apabila kue K dan kue L sama, atau “tidak sama” apabila kue K dan kue L tidak sama.
// For example:

// Input	Result
// 100.0
// t g r m n c p f
// t k n r m c p o
// tidak sama
// 70.0
// t g r m n k p f
// t m g r n c p f
// sama

#include <stdio.h>
#include <string.h>

// Fungsi untuk menghitung jumlah kesamaan bahan
int count_matches(char kueK[8][2], char kueL[8][2], int sizeK, int sizeL) {
    int count = 0;
    for (int i = 0; i < sizeK; i++) {
        for (int j = 0; j < sizeL; j++) {
            if (strcmp(kueK[i], kueL[j]) == 0) {
                count++;
                break; // Hindari duplikasi perhitungan
            }
        }
    }
    return count;
}

int main() {
    float N; // Persentase minimal
    char kueK[8][2], kueL[8][2];
    char bufferK[50], bufferL[50];
    int sizeK = 0, sizeL = 0;

    // Input nilai N
    scanf("%f", &N);
    getchar(); // Konsumsi newline

    // Input komposisi kue K
    fgets(bufferK, sizeof(bufferK), stdin);
    sizeK = sscanf(bufferK, "%s %s %s %s %s %s %s %s",
                   kueK[0], kueK[1], kueK[2], kueK[3],
                   kueK[4], kueK[5], kueK[6], kueK[7]);

    // Input komposisi kue L
    fgets(bufferL, sizeof(bufferL), stdin);
    sizeL = sscanf(bufferL, "%s %s %s %s %s %s %s %s",
                   kueL[0], kueL[1], kueL[2], kueL[3],
                   kueL[4], kueL[5], kueL[6], kueL[7]);

    // Hitung jumlah kesamaan bahan
    int matches = count_matches(kueK, kueL, sizeK, sizeL);

    // Hitung persentase kesamaan
    int maxSize = sizeK > sizeL ? sizeK : sizeL;
    float percentage = (matches / (float)maxSize) * 100;

    // Output hasil
    if (percentage >= N) {
        printf("sama\n");
    } else {
        printf("tidak sama\n");
    }

    return 0;
}