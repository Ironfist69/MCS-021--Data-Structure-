#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;      //Defined structure
};

void print_Linkedlist (struct Node* head) {
    while(head!=NULL) {
        printf("%d->",head->data);             //print data part
        head=head->next;                        //move to next link part
    }
    printf ("NULL \n");                            //else print null
}

struct Node* create_LinkedList(int arr[], int n) {     //function to create linked list from array
    struct Node* head=NULL;
    struct Node* temp=NULL;
    struct Node* newNode=NULL;
    for(int i=0;i<n;i++) {                           //iterate through array
        newNode=(struct Node*)malloc(sizeof(struct Node));
        newNode->data=arr[i];
        newNode->next=NULL;

        if(head==NULL) {
            head=newNode;
            temp=newNode;
        } else {
            temp->next=newNode;
            temp=newNode;
        }
    }
    return head;  
}

int main () {
    int arr[] = {10,20,45,55,69,70,90,100,169};
    int n = sizeof(arr)/sizeof(arr[0]);
    struct Node* head=create_LinkedList(arr,n);
    printf("Linked List: ");
    print_Linkedlist(head);
    system("pause");
    return 0;
}
