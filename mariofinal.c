#include <stdio.h>

int main() {
    int height,i,j,count=1;
    do{
        if(height<1 || height>8){
         printf("Height: ");
         scanf("%d", &height);
        }
        else{
            printf("Stored: %d\n", height);
            break;
        }
count++;
    }while(count>0);

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
