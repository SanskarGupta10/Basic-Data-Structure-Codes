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

struct node * searchRecursive(struct node* root,int key){
if(root==NULL){
    return NULL;

}
if(key==root->data){
    return root;
}
else if(key<root->data){
    return searchRecursive(root->left,key);
}
else{
    return searchRecursive(root->right,key);
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

struct node* searchIterative(struct node* root,int key){
while(root!=NULL){
if(key == root->data){
    return root;
}
else if(key<root->data){
    return root->left;
}
else{
    return root->right;
}

}

return NULL;

}

void insert(struct node* root, int key){
struct node* prev =NULL;
while(root!=NULL){
    prev =root;
if(key==root->data){
printf("Duplicate node!\n");

}
else if(key<root->data){
    root = root->left;
}
else{
    root = root->right;
}

struct node * new = createNode(key);
if(key<prev->data){
    prev->left = new;
}
else{
    prev->right = new;
}



}






}


int main(){

    struct node* p=createNode(7);
    struct node* p1=createNode(4);
    struct node* p2 =createNode(9);
    struct node* p3 =createNode(2);

struct node* p4=createNode(5);

struct node* p5 =createNode(8);

struct node* p6 =createNode(11);


    p->left =p1;
    p->right =p2;
    p1->left =p3;
    p1->right=p4;
    p2->left=p5;
    p2->right =p6;
   
    inOrderTraversal(p);
    printf("\n");

    if(isBST(p)){
        printf("yes it is a bst!\n");
    }
    else
    {
        printf("No its not a bst!\n");
    }
    printf("\n");

    struct node * n =searchIterative(p,9);
    if(n!=NULL){
        printf("Found : %d",n->data);
    }else{
        printf("Element not found!");
    }
    printf("\n");
    insert(p,3);
    inOrderTraversal(p);




return 0;
}