#include <stdio.h>

int main() {
    int height,i,j,count=1;
    do{
         printf("Height: ");
         scanf("%d", &height);
    }while(height<1 || height>8);

    for(i=1;i<=height;i++) {
        for(j=1;j<=height;j++) {
            if(j<=height-i){
                printf(" ");
            }
            else{
            printf("#");
        }
        
    }
    printf("\n");
}
}
