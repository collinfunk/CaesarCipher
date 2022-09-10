#include "CaesarCipher.h"
#include <string.h>
#include <stdlib.h>

char* caesar_cipher(char* message, int key) {
    char* result = malloc(strlen(message) + 1);
    int i = 0;

    while (message[i] != '\0') {
        if (message[i] >= 'a' && message[i] <= 'z') {
            result[i] = (message[i] - 'a' + key) % 26 + 'a';
        }
        else if (message[i] >= 'A' && message[i] <= 'Z') {
            result[i] = (message[i] - 'A' + key) % 26 + 'A';
        }
        else {
            result[i] = message[i];
        }

        i++;
    }
    result[i] = '\0';
    return result;
}

char* caesar_decipher(char* message, int key) {
    char* result = malloc(strlen(message) + 1);
    int i = 0;
    while (message[i] != '\0') {
        if (message[i] >= 'a' && message[i] <= 'z') {
            result[i] = (message[i] - 'a' - key + 26) % 26 + 'a';
        }
        else if (message[i] >= 'A' && message[i] <= 'Z') {
            result[i] = (message[i] - 'A' - key + 26) % 26 + 'A';
        }
        else {
            result[i] = message[i];
        }

        i++;
    }
    result[i] = '\0';
    return result;
}
