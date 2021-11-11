#include <stdio.h> 
#include <math.h>

int  main() {
          float dollars;
          int cents, amountLeft;
          
          do{
 printf("Change owed: ");
          scanf("%f", &dollars);
          cents = round(dollars * 100);
          }
          while(dollars < 0);
         
        //   printf("cents: %d\n", cents);
        int i=0, coins;
        amountLeft = cents;
        while(amountLeft > 0){
            if(amountLeft >= 25){
               amountLeft -= 25;
               i++;
            }else if(amountLeft < 25 && amountLeft >= 10){
                amountLeft -= 10;
                i++;
            }else if(amountLeft < 10 && amountLeft >= 5){
                amountLeft -= 5;
                i++;
            }else if(amountLeft < 5 && amountLeft >= 1) {
                amountLeft -= 1;
                i++;
            }
            coins = i;
        }
        printf("%d\n", coins);
}