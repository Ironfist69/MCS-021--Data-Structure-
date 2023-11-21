#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    Node* next;
};

void push(struct Node** head_ref, int new_data) {                                   //INSERTION
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}

void deleteNode(struct Node** head, int delNode) {                                 //DELETION
    struct Node* temp;                                
    if((*head)->data==delNode)
    temp=(*head);
    (*head)=(*head)->next;
    free(temp);
}

void print(struct Node* node) {                                                //PRINT
    while(node!=NULL) {
        printf("%d->",node->data);
        node=node->next;
    }
    printf("NULL \n");
}

int main () {
    struct Node* head=NULL;
    push(&head,2);
    push(&head,4);
    push(&head,6);
    push(&head,9);
    push(&head,10);
    push(&head,14);
    printf("Linked list after insertion: \n");                  //it will show in 14,10,9,...bcz pushing it to stack LIFO
    print(head);

    deleteNode(&head,14);
    printf("\n\nLinked list after deletion: \n");
    print(head);
    printf("\n\n\n");
    system("pause");
    return 0;
}