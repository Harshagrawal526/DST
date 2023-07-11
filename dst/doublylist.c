// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
//doubly linkedlist
struct node{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*head=NULL;
struct node*last=NULL;
void add(int data){
    struct node *n=(struct node*)malloc(sizeof(struct node));
    n->next=NULL;
    n->data=data;
    if(head==NULL){
        head=n;
        last=n;

    }
    else{
        last->next=n;
        n->prev=last;
        last=n;
    }
}
struct node*insertstart(struct node*head,int val){
        struct node *n=(struct node*)malloc(sizeof(struct node));
        if(n==NULL){
            printf("linkedlist is full");
        }
        else{
            n->data=val;
            n->next=head;
            head->prev=n;
            head=n;
            return head;
        }
}

void printlist(struct node*head){
    struct node *p=head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;

    }
}
int main() {

 add(10);
 add(15);
 add(20);
 add(25);
head=insertstart(head,52);
 printlist(head);
    return 0;
}
