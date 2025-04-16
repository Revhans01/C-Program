#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int angka_rahasia, percobaan, hasil_percobaan;
    int angka_min, angka_max;

    // Tentukan urutan angka
    angka_min = 1;
    angka_max = 100;

    // Inisialisasi angka acak
    srand(time(NULL));
    angka_rahasia = rand() % (angka_max - angka_min + 1) + angka_min;

    // Mulai permainan
    
    printf("                                                 Selamat datang di permainan tebak angka!\n");
    
    printf("Tebak angka antara %d hingga %d\n", angka_min, angka_max);
    
    printf("Masukkan angka yang ingin Anda tebak: ");

    // Buat loop permainan
    do {
        scanf("%d", &hasil_percobaan);
        percobaan++;

        if (hasil_percobaan > angka_rahasia) {
            printf("Mungkin lebih kecil. Coba lagi!\n");
        } else if (hasil_percobaan < angka_rahasia) {
            printf("Mungkin lebih besar. Coba lagi!\n");
        }
        printf("Jawab disini ==>  ");
    } while (hasil_percobaan != angka_rahasia);
    
    // Akhir permainan
    printf("Selamat! Anda menebak angka yang tepat!\n");
    printf("Jumlah percobaan: %d\n", percobaan);

    return 0;
}
