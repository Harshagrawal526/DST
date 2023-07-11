#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node* create(int val){
    struct node*n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->right=NULL;
    n->left=NULL;
    return n;
}
void insert(struct node*root,int key){
    struct node*prev=NULL;
    while(root!=NULL){
        prev=root;
        if(root->data==key){
            printf("key is already present");
        }
        else if(root->data>key){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    struct node*n=create(key);
    if(prev->data>key){
        prev->left=n;
    }
    else{
        prev->right=n;
    }
}
void postorder(struct node*root){
    if(root==NULL){
        return;
    }
    else{
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
int main(){
    struct node*p=create(10);
    struct node*p1=create(8);
    struct node*p2=create(12);
    struct node*p3=create(7);
    struct node*p4=create(9);
    struct node*p5=create(11);
    struct node*p6=create(13);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=p6;
    insert(p,4);
    postorder(p);
}
