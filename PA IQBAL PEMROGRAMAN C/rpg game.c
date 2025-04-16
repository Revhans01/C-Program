#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int evaluateAnswer(int expected, int userInput) {
    if (userInput == expected) {
        printf("Benar!\n");
        return 1;
    } else {
        printf("Salah. Jawaban yang benar adalah %d.\n", expected);
        return 0;
    }
}

int pertambahan() {
    int a = rand() % 100;
    int b = rand() % 100;
    int result;
    printf("%d + %d = ", a, b);
    scanf("%d", &result);
    return evaluateAnswer(a + b, result);
}

int pengurangan() {
    int a = rand() % 100;
    int b = rand() % 100;
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    int result;
    printf("%d - %d = ", a, b);
    scanf("%d", &result);
    return evaluateAnswer(a - b, result);
}

int perkalian() {
    int a = rand() % 100;
    int b = rand() % 100;
    int result;
    printf("%d * %d = ", a, b);
    scanf("%d", &result);
    return evaluateAnswer(a * b, result);
}

int pembagian() {
    int a = rand() % 100;
    int b = rand() % 100;
    if (b == 0) {
        b = 1;
    }
    int result;
    printf("%d / %d = ", a, b);
    scanf("%d", &result);
    return evaluateAnswer(a / b, result);
}

int main() {
    int choice, score = 0;
    char stop = 'n';
    srand(time(0));

    do {
    	printf("                                  ================================================================================================\n");
    	printf("                                  |                                                                                              |\n");
    	printf("                                  |                              SELAMAT DATANG DI PERMAINAN MATIMATIKA                          |\n");
    	printf("                                  |                                     Dibuat Oleh Kelompok 1                                   |\n");
    	printf("                                  |         Saya menyarankan anda untuk klik no1 untuk melihat rules dari permainan kami         |\n");
    	printf("                                  |                                                                                              |\n");
    	printf("                                  ================================================================================================\n");
    	
    	
        printf("\n1. Rules\n2. Penjumlahan\n3. Pengurangan\n4. Perkalian\n5. Pembagian\n6. Skor\n\n");
        printf("Masukkan pilihan anda ==> ");
        scanf("%d", &choice);

        switch (choice) {
        	case 1:
        		printf("                 RULES DALAM PERMAINAN KAMI            ");
        		printf("\n1. Permainan dimulai dari pertambahan kalian bisa ketik 1 pada menu pilihan\n atau kalian bisa mulai dari pengurangan/perkalian/pembagian.\n2. Jika jawaban benar maka skor akan bertambah 1.\n3. Jika ingin lanjut ketik y jika berhenti ketik n.\n4. jika ingin melihat skor ketik 5 pada menu pilihan\n5. Ketik y untuk kembali ke manu pilihan");
        		break;
            case 2:
            	printf("Soal Pertambahan\n");
                score += pertambahan();
                break;
            case 3:
                score += pengurangan();
                break;
            case 4:
                score += perkalian();
                break;
            case 5:
                score += pembagian();
                break;
            case 6:
                printf("\nSkor anda: %d\n", score);
                exit(0);
            default:
                printf("\nPilihan yang dipilih tidak valid. Silakan coba lagi.\n");
        }

        printf("\nApakah anda ingin melanjutkan? (y/n)\n==>");
        scanf(" %c", &stop);
    } while (stop == 'y');

    return 0;
}
