#include "encrypt.h"
#include "decrypt.h"
#include <stdio.h>

void displayFunc()
{
    printf("\n*----DISPLAY SECTION----*\n""1. WANT TO ENCODE MESSAGE\n""2. WANT TO DECODE MESSAGE\n""3. EXIT\n""CHOOSE (1-3)\n-->");
}

int main()
{
    int choice;
    char again;

    do
    {
        displayFunc();
        scanf("%d", &choice);
        getchar(); // clear newline

        switch (choice)
        {
            case 1:
                sendermainFunc();
                break;
            case 2:
                receiverfuncMain();
                break;
            case 3:
                printf("EXITING PROGRAM..... :-}\n");
                return 0;
            default:
                printf("INVALID CHOICE ! TRY AGAIN\n");
        }

        printf("\n*----DISPLAY SECTION----*\nDO YOU WANT TO USE ENIGMA AGAIN?\nY FOR YES\nN FOR NO\n-->");
        scanf(" %c", &again);
        getchar(); // clear newline
    } while (again == 'Y' || again == 'y');

    printf("GOODBYE ! :-}\n");
    return 0;
}
