#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int evaluateAnswer(int expected, int userInput) {
    if (userInput == expected) {
        printf("Correct!\n");
        return 1;
    } else {
        printf("Incorrect. The correct answer is %d.\n", expected);
        return 0;
    }
}

int addition() {
    int a = rand() % 100;
    int b = rand() % 100;
    int result;
    printf("%d + %d = ", a, b);
    scanf("%d", &result);
    return evaluateAnswer(a + b, result);
}

int subtraction() {
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

int multiplication() {
    int a = rand() % 100;
    int b = rand() % 100;
    int result;
    printf("%d * %d = ", a, b);
    scanf("%d", &result);
    return evaluateAnswer(a * b, result);
}

int division() {
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

    while (stop == 'n') {
        printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n\n");
        printf("Enter your choice \n");
        printf("ketik n jika ingin berhenti" , stop);
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                score += addition();
                break;
            case 2:
                score += subtraction();
                break;
            case 3:
                score += multiplication();
                break;
            case 4:
                score += division();
                break;
            case 5:
                printf("\nYour score is: %d\n", score);
                exit(0);
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    }
    return 0;
}
