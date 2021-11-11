#include <stdio.h> 
 
 int main() {
     int x, polynomial;

     printf("Enter a value of x: ");
     scanf("%d", &x);
//first polynomial
    //  polynomial = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;

//The same polynomial in another form (Horner's Rule)
         polynomial = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;

     printf("Value of polynomial: %d\n", polynomial);
 }