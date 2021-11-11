#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>


#define size 5
#define EMPTY (-1)
#define EMPTY_STACK INT_MIN

int *stack;
int top = EMPTY;

int* create(){
    return (int*)malloc(sizeof(int)*size);
}
bool push(int num) {
    if(top >= size-1) return false;

    top++;
    stack[top] = num;
    return true;
}
int pop() {
    if(top == EMPTY) return EMPTY_STACK;

    int result = stack[top];
    top--;
    return result;
}

int topOfStack(){
      if(top == EMPTY) return EMPTY_STACK;

    int result = stack[top];
    return result;
}

int sizeOfStack() {
    return top+1;
}

void display(){
     for(int i=top;i >= 0; i--) {
         printf("%d\n", stack[i]);
     }
}

int main() {
    stack= create();
     push(56);
     push(25);
     push(12);
     push(1);
     
     display();

     int t = topOfStack();
     int s = sizeOfStack();
     printf("top of stack: %d\n", t);
     printf("size of stack: %d\n", s);
     free(stack);
}