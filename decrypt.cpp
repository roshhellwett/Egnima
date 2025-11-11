#include <stdio.h>
#include <string.h>

void decryptFunc(unsigned char *cipherBytes, const char *key, int byteCount)
{
    int keyLen = strlen(key);
    for (int i = 0; i < byteCount; i++)
    {
        cipherBytes[i] ^= key[i % keyLen];
    }
}

void receiverfuncMain()
{
    char key[100];
    unsigned char cipher[500];
    int byteCount = 0;
    char hexInput[2000];

    printf("\n*----DISPLAY SECTION----*\n""\nENTER YOUR ALPHANUMERIC PASSWORD:\n-->");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = '\0';

    printf("\nENTER YOUR HEX CIPHER TEXT [SPACE-SEPERATED |--> 09 07 0F 0F 0D <--|]:\n-->");
    fgets(hexInput, sizeof(hexInput), stdin);
    hexInput[strcspn(hexInput, "\n")] = '\0';

    char *ptr = strtok(hexInput, " ");
    while (ptr != NULL)
    {
        unsigned int value;
        if (sscanf(ptr, "%x", &value) == 1)
        {
            cipher[byteCount++] = (unsigned char)value;
        }
        ptr = strtok(NULL, " ");
    }

    decryptFunc(cipher, key, byteCount);
    printf("[DEBUG] PARSED CIPHER LENGTH --> %d bytes\n", byteCount);
    printf("\nDECRYPTED MESSAGE --> ");
    for (int i = 0; i < byteCount; i++)
    {
        printf("%c", cipher[i]);
    }
    printf("\n");
}
