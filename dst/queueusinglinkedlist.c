#include<stdio.h>
#include<stdlib.h>
struct node{

    int data;
    struct node*next;
};
struct node*f=NULL;
struct node*r=NULL;
void enqueue(int val){
    struct node*n=(struct node*)malloc(sizeof(struct node));

    if(n==NULL){
        printf("queue is full");
    }
    else{
          n->data=val;
    n->next=NULL;
        if(f==NULL){
            f=n;
            r=n;
        }
        else{
            r->next=n;
            r=n;
        }
    }
}
int dequeue(struct node**f){
    if((*f)==NULL){
        printf("queue is empty");
        return -1;
    }
    else{
        struct node*p=(*f);
        int val=p->data;
        (*f)=(*f)->next;
        free(p);
        return val;
    }
}
void printlist(struct node*f){
    struct node *p=f;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;

    }
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    printf("dequeue:%d\n",dequeue(&f));
    printlist(f);
}
