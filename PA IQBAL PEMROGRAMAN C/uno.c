#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int restartGame();

int main() {
    restartGame();

    return 0;
}
	//start
int restartGame() {
    int angka_rahasia, percobaan, hasil_percobaan;
    int angka_min, angka_max;

    // Tentukan urutan angka
    angka_min = 1;
    angka_max = 100;

    // Inisialisasi angka acak
    srand(time(NULL));
    angka_rahasia = rand() % (angka_max - angka_min + 1) + angka_min;
    
     // Mulai permainan
    printf("############################################################################################################################################################\n");
	printf("\n");
    printf("                                            #########################################################################\n");
    printf("                                            #                                                                       #\n");
    printf("                                            #                               o(0^^0)o                                #\n");
    printf("                                            #                Selamat datang di permainan tebak angka!               #\n");
    printf("                                            #                                                                       #\n");
    printf("                                            #                            By Kelompok 1                              #\n");
    printf("                                            #                                                                       #\n");
    printf("                                            #########################################################################\n");
    printf("\n");
    printf("\n");
    printf("############################################################################################################################################################\n");
    printf("\n");
    printf("\n");
	printf("Tebak angka antara %d hingga %d (0 _ <)\n", angka_min, angka_max);
	printf("\n");
    printf("Masukkan angka yang ingin Anda tebak ==> ");

    // Buat loop permainan
    do {
        scanf("%d", &hasil_percobaan);
        percobaan++;

        if (hasil_percobaan > angka_rahasia) {
        	printf("\n");
            printf("Mungkin lebih kecil. Coba lagi!   (T___T) \n");

        } else if (hasil_percobaan < angka_rahasia) {
            printf("Mungkin lebih besar. Coba lagi!   (T O T) \n");
            printf("\n");
            printf("\n");
        }
        printf("Jawab disini ==> ");
    } while (hasil_percobaan != angka_rahasia);
    
    
    // Akhir permainan
    printf("Selamat! Anda menebak angka yang tepat!    (>__O)   \n");
    printf("Jumlah percobaan: %d   (> 0 <)\n", percobaan);
    
    printf("\n");
    printf("Ingin bermain lagi? (Y/N) ");
    char c;
    scanf(" %c", &c);
    if (c == 'Y' || c == 'y') {
        restartGame();
    }
}
