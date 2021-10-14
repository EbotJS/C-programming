#include <stdio.h>

int main() {
    char bookNumber[100];
int i;
    //prompt user for ISBN
    printf("Enter ISBN: ");
    scanf("%s", &bookNumber);
    
    //prints the GSI prefix
    // printf("GSI prefix: %c%c%c", bookNumber[0],bookNumber[1],bookNumber[2]);
    printf("GSI prefix: ");
    for(int i=0; i < 3; i++){
        printf("%c", bookNumber[i]);
    }
    printf("\n");

    //prints the group identifier
    printf("Group identifier: %c\n", bookNumber[4]);

     //prints the publisher code
    // printf("Publisher code: %c%c%c", bookNumber[6],bookNumber[7],bookNumber[8]);
    printf("Publisher code: ");
    for(int i=6; i < 9; i++){
        printf("%c", bookNumber[i]);
    }
    printf("\n");

    //prints the item number

    // printf("Item number: %c%c%c%c%c", bookNumber[10],bookNumber[11],bookNumber[12],bookNumber[13],bookNumber[14]);
    printf("Item number: ");
     for(int i=10; i < 15; i++){
        printf("%c", bookNumber[i]);
    }
    printf("\n");

    //prints the check digit

    printf("Check digit: %c\n", bookNumber[16]);


}