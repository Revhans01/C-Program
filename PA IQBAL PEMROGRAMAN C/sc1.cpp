#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void play_game(int player_choice);

int main()
{
    int player_choice;
    srand(time(0));
    printf("Welcome to the Gambling Game!\n");
    printf("Choose your move:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Enter your choice: ");
    scanf("%d", &player_choice);

    play_game(player_choice);

    return 0;
}

void play_game(int player_choice);
{
    int computer_choice = rand() % 3 + 1;
    int result;

    printf("You chose %d\n", player_choice);
    printf("Computer chose %d\n", computer_choice);

    if (player_choice == computer_choice)
    {
        printf("It's a tie!\n");
    }
    else
    {
        switch (player_choice)
        {
        case 1:
            result = (computer_choice == 2) ? 1 : 0;
            break;
        case 2:
            result = (computer_choice == 3) ? 1 : 0;
            break;
        case 3:
            result = (computer_choice == 1) ? 1 : 0;
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            return;
        }

        if (result == 1)
        {
            printf("You win!\n");
        }
        else
        {
            printf("You lose.\n");
	}
