#include <stdio.h>

int main() {
    int height,i,j,count=1;
    do{
         printf("Height: ");
         scanf("%d", &height);
    }while(height<1 || height>8);

    for(i=1;i<=height;i++) {
        for(j=1;j<=(height+height+2);j++) {
            if(j<=height-i || j==(height+1) || j==(height+2)){
                printf(" ");
            }
            else if(j<=(i+height+2)){
            printf("#"); 
        }
        
        
    }
    printf("\n");
}
}
