#include <stdio.h>
#include <string.h>

void encryptFunc(const char *message, const char *key, unsigned char *cipher)
{
    int msgLen = strlen(message);
    int keyLen = strlen(key);

    for (int i = 0; i < msgLen; i++)
    {
        cipher[i] = message[i] ^ key[i % keyLen];
    }
}

void discipherFunc(const unsigned char *cipher, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%02X ", cipher[i]);
    }
    printf("\n");
}

void sendermainFunc()
{
    char message[500], key[100];
    unsigned char cipher[500];

    printf("\n*----DISPLAY SECTION----*\n""ENTER THE MESSAGE\n-->");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';

    printf("\nSET ALPHANUMERIC PASSWORD\n-->");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = '\0';

    int msgLen = strlen(message);
    encryptFunc(message, key, cipher);

    printf("\nYOUR KEY IS -> %s\n", key);
    printf("YOUR CIPHER TEXT (HEX) -> ");
    discipherFunc(cipher, msgLen);
    printf("\n[DEBUG] MESSAGE LENGTH: %d bytes\n", msgLen);

}
