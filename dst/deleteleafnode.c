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

struct node* deleteleaf(struct node* root, int target) {
            if(root==NULL)
                return root;
            root->left=deleteleaf(root->left,target);
            root->right=deleteleaf(root->right,target);
            if(root->data==target && root->left==NULL && root->right==NULL)
                return NULL;
            return root;
        }
void inorder(struct node*root){
    if(root==NULL){
        return;
    }
    else{
        inorder(root->left);

        printf("%d ",root->data);
           inorder(root->right);
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

    printf("%d",deleteleaf(p,13));
    printf("\n");
    inorder(p);
}
