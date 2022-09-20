#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node* left;
struct node* right;
};

struct node* createNode(int data){
struct node *n;
n = (struct node*)malloc(sizeof(struct node));
n->data =data;
n->left=NULL;
n->right =NULL;
return n;
}

void inOrderTraversal(struct node * root){
if(root!=NULL){
  inOrderTraversal(root->left);
  printf("%d\t",root->data);
  inOrderTraversal(root->right);

}

}

int isBST(struct node* root){
static struct node* prev =NULL;
if(root!=NULL){
if(!isBST(root->left)){
    return 0;
}
if(prev!=NULL && root->data<=prev->data){
    return 0;}

prev = root;
return isBST(root->right);}

else{
    return 1;
}


}


int main(){

    struct node* p=createNode(7);
    struct node* p1=createNode(4);
    struct node* p2 =createNode(9);

    p->left =p1;
    p->right =p2;
    inOrderTraversal(p);
    printf("\n");

    if(isBST(p)){
        printf("yes it is a bst!\n");
    }
    else
    {
        printf("No its not a bst!\n");
    }





return 0;
}