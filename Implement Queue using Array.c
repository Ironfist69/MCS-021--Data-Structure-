#include <stdio.h>
#define MAX 69
int front=-1;
int rear=-1;
int queue_arr[MAX];
void enqueue();
void dequeue();
void display();

main () {
    int choice;
    while(1){
        printf("1. Insert \n");
        printf("2. Delete \n");
        printf("3. Print \n");
        printf("Enter your choice (1-3): \n");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            default:
            printf("ERROR \n");
        }
    }
    return 0;
}

void enqueue() {
    int add_item;
    if(rear==MAX-1)
    printf("Overflow!!");
    else {
        if(front==-1)
        front=0;
        printf("Insert element in Queue: ");
        scanf("%d", &add_item);
        rear=rear+1;
        queue_arr[rear]=add_item;
    }
}

void dequeue() {
    if(front==-1||front>rear) {
        printf("Underflow!!");
        return;
    }
    else {
        printf("Item %d is deleted from Queue \n",queue_arr[front]);
        front=front+1;
    }
}

void display() {
    if(front==-1)
    printf("Queue is empty\n");
    else
    for(int i=front;i<=rear;i++) {
        printf("%d  ",queue_arr[i]);
    }
    printf("\n");
}
