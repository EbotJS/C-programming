#include <stdio.h>

int main() {
    int count = 0;
    char word[100];
    printf("Enter word: ");
    scanf("%s", &word);

    while(count>=0 ) {
         count++;
        if(word[count-1] == '\0') {
            printf("%d", count-1);
            break;
        }
       
    }



}