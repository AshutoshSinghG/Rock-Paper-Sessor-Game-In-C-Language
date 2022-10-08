/* Credit: Code writer's details-
Name Ashutosh Kumar/Singh
Github - @AshutoshSinghG
intagram - @ashutoshsingh.me
Twitter - @ashutoshsinghf
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int randomgenrate(int n) // Auto Number Genrate
{
    srand(time(NULL));
    return rand() % n;
}


// started main function
int main()
{

    int playerscore = 0, i, CPUscore = 0, b, comp;
    char playerchar, CPUchar;
    char temp[] = {'P', 'R', 'S'}, a, c;

top:
    printf("\n***welcome to our game ROCK PAPPER SESSOR***\n\n");
    for (i = 0; i < 3; i++)
    {
        // User Input
        printf("Your turn - \n");
        printf("Plese you choose: \n");
        printf("press 'P' for Papper , Press 'R' for Rock And press 'S' for Sessors : \n");
    again:
        scanf("%c", &playerchar);
        getchar();


        // Check user input And Continue next
        if (playerchar == 'P' || playerchar == 'p' || playerchar == 'S' || playerchar == 's' || playerchar == 'R' || playerchar == 'r')
        {
            goto next;
        }
        else
        {
            printf("Oh!Ho!!\nPlease Enter Valide Choice\n");
            goto again;
        }


    // Computer's Turn
    next:
        printf("Now, Computer's Turn....... \n");
        Sleep(999);
        comp = randomgenrate(3);
        CPUchar = temp[comp];


        // Compare Both's Choose Choice And Increse Scores
        if ((playerchar == 'P' || playerchar == 'p') && CPUchar == 'R')
        {
            playerscore = playerscore + 1;
        }
        else if ((playerchar == 'R' || playerchar == 'r') && CPUchar == 'S')
        {
            playerscore = playerscore + 1;
        }
        else if ((playerchar == 'S' || playerchar == 's') && CPUchar == 'P')
        {
            playerscore = playerscore + 1;
        }

        else if ((playerchar == 'R' || playerchar == 'r') && CPUchar == 'P')
        {
            CPUscore = CPUscore + 1;
        }
        else if ((playerchar == 'S' || playerchar == 's') && CPUchar == 'R')
        {
            CPUscore = CPUscore + 1;
        }
        else if ((playerchar == 'P' || playerchar == 'p') && CPUchar == 'S')
        {
            CPUscore = CPUscore + 1;
        }
        else
        {
            printf("Both Are Same\n");
        }

        system("cls");

        // Tatal Score Calculate With Choices
        printf("you choose: %c    Score: %d\n", playerchar, playerscore);
        printf("CPU choose: %c    Score: %d\n\n", CPUchar, CPUscore);
    }


    // decession section
    if (playerscore > CPUscore)
    {
        printf("You win the match\n");
    }
    else if (playerscore < CPUscore)
    {
        printf("You Loss the match\n");
    }
    else
    {
        printf("match is Draw\n\n");
    }


    // Game Exit And Continue
    printf("Press any Button for Exit And 1 for Continue the game:\n");
    scanf("%d", &b);
    if (b == 1)
    {

        playerscore = 0;
        CPUscore = 0;
        system("cls");
        goto top;
    }
    else
    {
        goto end;
    }

end:
    return 0;
}
