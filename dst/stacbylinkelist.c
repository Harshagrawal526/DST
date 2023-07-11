#include<stdio.h>
#include<stdlib.h>
//stack by linked list
struct node{
    int data;
    struct node*next;
};
struct node*top=NULL;

void push(struct node**top,int val){
    struct node*n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    if(n==NULL){
        printf("stack overflow");
    }
    else{

            n->next=(*top);
            (*top)=n;

    }
}
int pop(struct node**top){
if((*top)==NULL){
    printf("stack underflow");
    return -1;
}
else{
    int val=(*top)->data;
    struct node*p=(*top);
    (*top)=(*top)->next;
    free(p);
    return val;
}

}
void printlist(struct node*top){
    struct node *p=top;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;

    }
}
int main(){
    push(&top,45);
    push(&top,50);
    push(&top,55);
    push(&top,90);
    printf("pop:%d \n",pop(&top));
    printlist(top);
}
