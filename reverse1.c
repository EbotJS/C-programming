#include <stdio.h>

int main() {
    char word[20];
    int numOfLetters;
    printf("Enter word: ");
    scanf("%s", &word);
    printf("How many letters does your word have?");
    scanf("%d", &numOfLetters);
    printf("reverse: ");
    for(int i = numOfLetters-1;i >= 0;i--) {
        printf("%c", word[i] );
    }
    printf("\n");
}