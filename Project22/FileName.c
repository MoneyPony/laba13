#include <stdio.h>
#include <string.h>
#include <locale.h>
#define MAX 100

void word(char* str);

int main() {
    char string[MAX];
    setlocale(LC_ALL, "RUS");
    system("chcp 1251");
    printf("Введите строку с пробелами: ");
    fgets(string, sizeof(string), stdin);
    printf("Слова с четным числом букв:\n");
    word(string);
}

void word(char* str) {
    char word[MAX];
    int i, j, len;
    len = strlen(str);
    for (i = 0; i < len; i++) {
        while (i < len && str[i] == ' ') {
            i++;
        }
        j = 0;
        while (i < len && str[i] != ' ') {
            word[j++] = str[i++];
        }
        word[j] = '\0';
        if (j % 2 == 0) {
            printf("%s\n", word);
        }
    }
}