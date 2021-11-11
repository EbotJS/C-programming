#include <stdio.h>

#define ARR_LENGTH 5

int arr[ARR_LENGTH] = {1,2,7,1,5};
int largestNum;

int largest(int n) {
    if(n==0) 
        return largestNum;

    else if(arr[n] > largestNum){
        largestNum = arr[n];
        return largest(n-1);
    }

    else  return largest(n-1);
}

int main() {
        int largestNum= arr[0];
int l= largest(4);
      printf("%d\n", l);
}