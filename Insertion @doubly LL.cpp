#include<iostream>
#include<stdlib.h>
using namespace std;

class Node {
public:
    int data;
    Node* next, *prev;
};
void push(Node** head_ref,int new_data) {
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    new_node->prev=NULL;
    if((*head_ref)!=NULL) {
        (*head_ref)->prev=new_node;
    }
    (*head_ref)=new_node;
}

int main () {
    return 0;
}