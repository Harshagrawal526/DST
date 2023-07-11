#include<stdio.h>
#include<stdlib.h>
//stack by using array
struct stack{
    int top;
    int *arr;
    int size;
};
void push( struct stack*s,int data){
    if(s->top==s->size-1){
        printf("stack overflow\n");

    }
    else{
        s->top++;
        s->arr[s->top]=data;
    }
}
int pop(struct stack*s){
    if(s->top==-1){
        printf("stack is empty\n");
        return -1;

    }
    else{
        int val=s->arr[s->top];
        s->top--;
        return val;
    }
}

int main(){
    struct stack*s=(struct stack *)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=5;
    s->arr=(int *)malloc(s->size*sizeof(int));
    push(s,10);
    push(s,20);
    push(s,30);
    push(s,40);
    push(s,50);

        printf("pop:%d ",pop(s));

    for(int i=0;i<=s->top;i++){
        printf("%d ",s->arr[i]);
    }

}
