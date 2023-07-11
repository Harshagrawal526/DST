// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
//circular linkedlist
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

void printlist(struct node*head){
    struct node *p=head;
    while(p->next!=head){
        printf("%d ",p->data);
        p=p->next;

    }
    printf("%d",p->data);
}
int main() {

 add(10);
 add(15);
 add(20);
 add(25);
 last->next=head;

 printlist(head);
    return 0;
}
