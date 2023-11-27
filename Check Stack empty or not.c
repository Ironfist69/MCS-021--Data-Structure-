#include<stdio.h>
int MAXSIZE=8;
int top=-1;
int isFull() {
    if(top==MAXSIZE)
    return 1;
    else
    return 0;
}
int main () {
    printf("Stack is full..", isFull()?"true":"false");
    return 0;
}
