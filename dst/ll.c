// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
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
struct node*insertstart(struct node*head,int data){
        struct node *n=(struct node*)malloc(sizeof(struct node));
        if(n==NULL){
            printf("linked list is full");
        }
        n->data=data;
        n->next=head;
        head=n;
        return head;
}
struct node*insertlast(struct node*head,int val){
        struct node *n=(struct node*)malloc(sizeof(struct node));
         if(n==NULL){
            printf("linked list is full");
        }
        n->data=val;
        n->next=NULL;
        struct node*p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=n;
        return head;

}
struct node*insertbtw(struct node*head,int val,int index){
    int i=0;
      struct node *n=(struct node*)malloc(sizeof(struct node));
         if(n==NULL){
            printf("linked list is full");
        }
        n->data=val;
        struct node*p=head;
        while(i!=index-1){
            p=p->next;
            i++;
        }
        n->next=p->next;
        p->next=n;
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
 head=insertstart(head,45);
 head=insertlast(head,52);
 head=insertbtw(head,92,2);
 printlist(head);
    return 0;
}
