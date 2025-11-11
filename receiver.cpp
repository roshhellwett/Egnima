#include <stdio.h>
#include <string.h>
void decryptFunc(char *cipherBytes, char *key, int byteCount)
{
    int keyLen = strlen(key);

    for (int i = 0; i < byteCount; i++)
    {
        cipherBytes[i] = cipherBytes[i] ^ key[i % keyLen];
    }
    cipherBytes[byteCount] = '\0';
}

void receiverfuncMain()
{
    char key[100];
    unsigned char cipher[500];
    int byteCount = 0;
    char hexInput[2000];

    printf("ENTER YOUR HEX CIPHER TEXT (space-separated, e.g. 09 07 0F 0F 0D):\n");
    printf("-->");
    fgets(hexInput, sizeof(hexInput), stdin);

    char *ptr = strtok(hexInput, " ");
    while (ptr != NULL)
    {
        unsigned int value;
        if (sscanf(ptr, "%02X", &value) == 1)
        {
            cipher[byteCount++] = (unsigned char)value;
        }
        ptr = strtok(NULL, " ");
    }

    printf("ENTER YOUR KEY:\n");
    printf("-->");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = '\0';

    decryptFunc((char *)cipher, key, byteCount);

    printf("\nDECRYPTED MESSAGE --> %s\n", cipher);
    getchar();
}
