#include<stdio.h>
#include<stdlib.h>
//queue using array
struct queue{
    int f;
    int r;
    int arr[5];
    int size;
};
void enqueue(struct queue*q,int data){
    if(q->r==q->size-1){
        printf("queue is full");
    }
    else{
        q->r++;
        q->arr[q->r]=data;
    }
}
int dequeue(struct queue*q){
    if(q->f==q->r){
        printf("queue is empty");
      return -1;
    }
    else{
        q->f++;
        int v=q->arr[q->f];
        return v;
    }
}
int main()
{
    struct queue *q=(struct queue*)malloc(sizeof(struct queue));
    q->size=5;
    q->f=q->r=-1;
    enqueue(q,10);
        enqueue(q,20);
            enqueue(q,30);
                enqueue(q,40);
                    enqueue(q,50);
                    printf("deueue:%d\n",dequeue(q));
                    for(int i=0;i<5;i++){
                        printf("%d ",q->arr[i]);
                        }
}
