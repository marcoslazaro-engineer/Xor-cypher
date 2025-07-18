#include <stdio.h>
#include <string.h>

void xor_encrypt_decrypt(char *text, const char *key);

int main() {
    char message[1024];
    char key[1024];
    int option;
    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y') {
        printf("===== XOR CIPHER =====\n");
        printf("1. Encrypt\n");
        printf("2. Decrypt\n");
        printf("Choose an option: ");
        scanf(" %d", &option);
        while ((getchar()) != '\n'); 

        printf("Enter the message: ");
        fgets(message, sizeof(message), stdin);
        message[strcspn(message, "\n")] = '\0';

        printf("Enter the key: ");
        fgets(key, sizeof(key), stdin);
        key[strcspn(key, "\n")] = '\0';

        xor_encrypt_decrypt(message, key);

        if (option == 1) {
            printf("Encrypted message (XOR output): %s\n", message);
        } else if (option == 2) {
            printf("Decrypted message: %s\n", message);
        } else {
            printf("Invalid option.\n");
        }

        printf("\nAnother operation? (y/n): ");
        scanf(" %c", &repeat);
    }

    return 0;
}

void xor_encrypt_decrypt(char *text, const char *key) {
    int keyLen = strlen(key);
    for (int i = 0; text[i] != '\0'; i++) {
        text[i] ^= key[i % keyLen];  
    }
}

