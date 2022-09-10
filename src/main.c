#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "CaesarCipher.h"
#include <string.h>
#include <string.h>



int main(int arg, char* argv[]) {
    // Format: ./CesarCipher <message> <0: decipher, 1: cipher> <key>
    if (arg != 4) {
        printf("Usage: ./CesarCipher <message> <0: decipher, 1: cipher> <key>");
        return 1;
    }

    // Get the message and key from the command line arguments
    char* message = argv[1];
    int opt = strtol(argv[2], NULL, 10);
    int key = strtol(argv[3], NULL, 10);

    if (opt != 0 && opt != 1) {
        printf("Invalid option. Please use 0 for decipher and 1 for cipher.\n");
        return 1;
    }

    if (key < 1 || key > 26) {
        printf("Invalid key. Please use a key between 1 and 26.\n");
        return 1;
    }

    // Call the appropriate function
    char* result;

    if (opt == 0) {
        result = caesar_decipher(message, key);

        printf("Deciphered message: %s\n", result);
        free(result);
    }
    else {
        result = caesar_cipher(message, key);

        printf("Ciphered message: %s\n", result);
        free(result);
    }
    return 0;
}