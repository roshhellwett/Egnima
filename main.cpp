#include "sender.h"
#include "receiver.h"
#include <stdio.h>
void displayFunc()
{
    printf("1. WANT TO SEND MESSAGE\n");
    printf("2. WANT TO RECEIVE MESSAGE\n");
    printf("3. EXIT\n");
    printf("CHOOSE (1-3)\n");
    printf("-->");
}
void choiceFunc(int choice)
{
    switch (choice)
    {
    case 1:
    {
        sendermainFunc();
        break;
    }
    case 2:
    {
        receiverfuncMain();
        break;
    }
            case 3:
    {
        break;
    }
            default:
            {
                printf("wrong choice\n");
            }
    }
}
int main()
{
    int choice;
    displayFunc();
    scanf("%d", &choice);
    getchar();
    choiceFunc(choice);
    return 0;
}
