#include <stdio.h>
#include <string.h>
void encryptFunc(char *message, char *key)
{
    int msgLen = strlen(message);
    int keyLen = strlen(key);

    for (int i = 0; i < msgLen; i++)
    {
        message[i] = message[i] ^ key[i % keyLen];
    }
}

void discipherFunc(const char *message)
{
    for (int i = 0; message[i] != '\0'; i++)
    {
        printf("%02X ", (unsigned char)message[i]);
    }
}

void sendermainFunc()
{
    char message[500], key[100];

    printf("ENTER THE MESSAGE\n");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0'; // remove newline

    printf("ENTER YOUR KEY\n");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = '\0'; // remove newline

    encryptFunc(message, key);

    printf("\nYOUR KEY IS -> %s\n", key);
    printf("YOUR CIPHER TEXT (HEX) -> ");
    discipherFunc(message);
    getchar();
}
