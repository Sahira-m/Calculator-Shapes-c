#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game(char you, char computer)
{
    if (you == computer)
        printf("\nTIE!!!!");
    else if ((computer == 'r' && you == 'p') || (computer == 'p' && you == 's') || (computer == 's' && you == 'r'))
        printf("\n USER WINS");
    else if (you == 'p' || you == 'r' || you == 's')
        printf("\n COMPUTER WINS");
    else
        printf("\n The user selected invalid choice");
}

int RockPaperSciccor()
{
    int n;
    char you, computer, result;
    srand(time(NULL));
    // Make the random number less than 100, divided it by 100
    n = rand() % 100;
    if (n < 33)
        computer = 'r';
    else if (n > 33 && n < 66)
        computer = 'p';
    else
        computer = 's';
    printf("\n\t\tEnter r for Rock, p for PAPER and s for SCISSOR\n");
    scanf("%s", &you);
    printf("\t\tYOU choose : %c and COMPUTER choose : %c\n", you, computer);
    game(you, computer);
    return 0;
}
