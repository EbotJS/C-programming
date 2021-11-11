
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>


#define size 5
#define EMPTY (-1)
#define EMPTY_STACK INT_MIN

int *queue;
int end = EMPTY;
int head = 0;

int* create(){
    return (int*)malloc(sizeof(int)*size);
}
bool enqueue(int num) {
    if(end >= size-1) return false;

    (end++)%size;
    queue[end] = num;
    return true;
}
int dequeue() {
    if(head > end) return EMPTY_STACK;

    int result = queue[(head++)%size];
    return result;
}

int headOfQueue(){
      if(head > end) return EMPTY_STACK;

    int result = queue[head % size];
    return result;
}

int sizeOfQueue() {
    return end-head+1;
}

int endOfQueue(){
      if(head > end) return EMPTY_STACK;

    int result = queue[end % size];
    return result;
}

void display(){
     for(int i=head;i <= end; i++) {
         printf("%d\n", queue[i % size]);
     }
}

int main() {
    queue= create();
     enqueue(56);
     enqueue(25);
     enqueue(12);
     enqueue(1);
     
     display();

     int t = headOfQueue();
     int s = sizeOfQueue();
     printf("top of queue: %d\n", t);
     printf("size of queue: %d\n", s);
     free(queue);
}
