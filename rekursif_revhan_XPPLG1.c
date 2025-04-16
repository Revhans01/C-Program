#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    char input;

    // Meminta pengguna memasukkan jumlah elemen deret Fibonacci yang diinginkan
    while (1) {
        printf("Masukkan jumlah elemen deret Fibonacci: ");
        scanf("%d", &n);

        // Menampilkan deret Fibonacci hingga n elemen
        printf("Deret Fibonacci:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", fibonacci(i));
        }

        printf("\nUlangi perhitungan (y/n)? ");
        scanf(" %c", &input);

        if (input == 'n' || input == 'N') {
            break;
        }
    }

    return 0;
}
