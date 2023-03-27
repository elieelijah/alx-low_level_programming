#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 8

/**
 * C that generates random passwords
 *
 * @s: This program generates a random password with a length of PASSWORD_LENGTH characters
 *
 * Return: Succes
*/

int main() {
    char password[PASSWORD_LENGTH + 1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char command[100];
    int i;

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }
    password[PASSWORD_LENGTH] = '\0';

    sprintf(command, "./101-crackme %s", password);

    printf("Trying password: %s\n", password);

    FILE *fp = popen(command, "r");
    if (fp == NULL) {
        printf("Error running command\n");
        return 1;
    }
    char output[100];
    if (fgets(output, sizeof(output), fp) == NULL) {
        printf("Error reading output\n");
        pclose(fp);
        return 1;
    }
    pclose(fp);

    if (strcmp(output, "Tada! Congrats\n") == 0) {
        printf("Password found: %s\n", password);
    } else {
        printf("Wrong password\n");
    }

    return 0;
}

