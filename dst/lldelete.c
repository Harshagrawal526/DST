// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
//linked list insertion
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
struct node*deletestart(struct node*head){
    struct node*p=head;
    head=head->next;
    free(p);
    return head;
}
struct node*deletebtw(struct node*head,int index){
struct node*p=head;
struct node*q=head->next;
int i=0;
while(i!=index-1){
    q=q->next;
    p=p->next;
    i++;
}
p->next=q->next;
free(q);
return head;

}
struct node*deleteend(struct node*head){
    struct node*p=head;
    struct node*q=head->next;
    while(q->next!=NULL){
        q=q->next;
        p=p->next;
    }
    p->next=NULL;
    free(q);
    return head;
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
//head=deletestart(head);
//head=deletebtw(head,1);
head=deleteend(head);
 printlist(head);
    return 0;
}
