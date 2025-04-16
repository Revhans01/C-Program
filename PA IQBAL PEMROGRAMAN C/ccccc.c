#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tambah();
void kurang();
int main() {
    int choice;
    int score = 0;
    printf("Welcome to the game!\n");
    printf("1. Tambah\n");
    printf("2. Kurang\n");
    printf("3. Exit\n");
    printf("Please choose an option (> 0): ");
    scanf("%d", &choice);

    while (choice != 3) {
        switch (choice) {
            case 1:
                tambah(score);
                break;
            case 2:
                kurang(score);
                break;
            default:
                printf("Invalid choice. Please choose a valid option.\n");
                break;
        }

        printf("1. Tambah\n");
        printf("2. Kurang\n");
        printf("3. Exit\n");
        printf("Please choose an option (> 0): ");
        scanf("%d", &choice);
    }

    printf("Your final score is %d.\n", score);
    printf("Thank you for playing (> <)!\n");

    return 0;
}

void tambah(int &score) {
    int num1, num2, answer;

    num1 = rand() % 100;
    num2 = rand() % 100;
    answer = num1 + num2;

    printf("Beraapa %d + %d? ==>", num1, num2);
    scanf("%d", &answer);

    if (answer == num1 + num2) {
        printf("Yeayyyy jawaban kamu bener %d.\n", answer);
        score += 10; // Tambahkan point jika jawaban benar
    } else {
        printf("Yahhhhh jawaban kamu kurang tepat nih. Jawaban yang tepat %d.\n", num1 + num2);
    }
}

void kurang(int &score) {
    int num1, num2, answer;

    num1 = rand() % 100;
    num2 = rand() % 100;

    while (num1 < num2) {
        num1 = rand() % 100;
        num2 = rand() % 100;
    }

    answer = num1 - num2;

    printf("Berapa %d - %d? ", num1, num2);
    scanf("%d", &answer);

    if (answer == num1 - num2) {
        printf("Yeayyyy jawaban kamu bener %d.\n", answer);
        score += 10; // Tambahkan point jika jawaban benar
    } else {
        printf("Yahhhhh jawaban kamu kurang tepat nih. Jawaban yang tepat %d.\n", num1 - num2);
    }
}
