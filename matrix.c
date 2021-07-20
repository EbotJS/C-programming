#include<stdio.h>
int main() {
    int arr[100][100];
    printf("Enter the elements of the matrix\n");
    for(int i=1;i<4;i++) {
        for(int j=1;j<4;j++) {
            printf("A%d%d:",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("this is the matrix\n");
    for(int i=1;i<4;i++) {
        for(int j=1;j<4;j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    
}