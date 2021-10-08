#include <stdio.h>

int main() {
    int height,i,j;
    printf("Height: ");
    scanf("%d", &height);

    for(i=1;i<=height;i++) {
        for(j=1;j<=height;j++) {
            if(j<=i) {
                printf("#");
            }
        
    }
    printf("\n");
}
}
