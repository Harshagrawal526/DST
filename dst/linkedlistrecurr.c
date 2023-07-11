// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
//linkedlist reverse
struct node{
    int data;
    struct node*next;
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
        last=n;
    }
}
struct node*revrecurr(struct node*head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    else{
        struct node*newhead=revrecurr(head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;
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
head=revrecurr(head);
 printlist(head);
    return 0;
}
