//implementation of queue using linked list 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int data;
    struct node * next;
};

struct node * f=NULL;
struct node * r=NULL;

int isFull(){
    struct node * n = (struct node *)malloc(sizeof(struct node));
    if(n==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(){
    if(f==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(int value){
     struct node * n = (struct node *)malloc(sizeof(struct node));
    if(n == NULL){
        printf("Queue is Full!\n");
    }
    else{
          
          n->data = value;
          n->next =NULL;
        if(r==NULL && f==NULL){
            f=r=n; //it has to point towards the pointer n or node n
        }
        else{
            r->next = n;
            r = n;
        }
    }
}
int dequeue(){
    int val =-1;
    struct node * ptr = f;

if(f==NULL){
    printf("Queue is Empty!\n");
}
else{
    f = f->next;
    val = ptr->data;
    free(ptr);
}

 return val;
}
void queueTrav(struct node * ptr){
    
    while(ptr != NULL){
        printf("Element is %d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){

enqueue(12);
enqueue(23);
enqueue(34);
enqueue(45);
enqueue(56);
queueTrav(f);
return 0;
}