#include <stdio.h>

int main() {
    float money,tax,moneyWithTax;
    
    printf("Enter an amount: ");
    scanf("%f", &money);

    tax = (5 * 100) / money;
    moneyWithTax = tax + money;

    printf("With tax added: $%0.2f\n", moneyWithTax);
}