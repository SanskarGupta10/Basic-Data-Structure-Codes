//implementation of stacks  using linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node * next;
};

struct node * top=NULL;

int isEmpty(struct node * top){
if(top == NULL){
    return 1;
}else{
    return 0;
}

}

int isFull(struct node * top){
    struct node * n=(struct node *)malloc(sizeof(struct node));
    if(n==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
 struct node * push(struct node * top,int value){
     struct node *n=(struct node *)malloc(sizeof(struct node));
  if(isFull(top)){
      printf("The stack is overflow!\n");
  }
  else{n->data=value;
      n->next = top;
       top = n;            }

return top;
 }

void stackTraversal(struct node * top){
struct node * ptr = top;
while(ptr != NULL){
    printf("Element is %d\n",ptr->data);
    ptr=ptr->next;
}
}



int main(){
    top = push(top,12);
    top = push(top,89);
    top = push(top,67);
    top = push(top,43);
    top = push(top,99);
    top = push(top,22);
    stackTraversal(top);
    

return 0;
}