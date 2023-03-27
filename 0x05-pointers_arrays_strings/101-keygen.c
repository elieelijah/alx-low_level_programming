#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

/**
 * C that generates random passwords
 *
 * @s: This program generates a random password with a length of PASSWORD_LENGTH characters
 *
 * Return: Succes
*/

int main() {
    char password[PASSWORD_LENGTH + 1]; // Add 1 for null terminator
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; // Add more characters as needed
    int i;

    srand(time(NULL)); // Seed the random number generator with the current time

    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % (sizeof(charset) - 1)]; // Generate a random character from the charset
    }
    password[PASSWORD_LENGTH] = '\0'; // Add null terminator to the end of the password string

    printf("Random password: %s\n", password);

    return 0;
}
