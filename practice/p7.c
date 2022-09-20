// implementation of queue using linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
 int data;
 struct node * next;

};

struct node* f = NULL;
struct node* r = NULL;

void enqueue(int val){
struct node * ptr = (struct node*)malloc(sizeof(struct node));
if(ptr == NULL){

    printf("The queue is full!\n");
}
ptr->data = val;
ptr->next = NULL;
if(f == NULL && r == NULL){
  f = r =ptr;
}
else
{
   r->next = ptr;
   r = ptr;

}
}

void traversal(struct node *ptr){      
    
  while(ptr!= NULL){
printf("%d \t",ptr->data);
ptr = ptr->next;

  }

}
int dequeue(){
int a = -1; //default value
struct node * ptr = f;
if(f == NULL){
    printf("The queue is empty!\n");
}

a = ptr->data;
f = f->next;
free(ptr);
return a;
}

int main(){

enqueue(19);
enqueue(18);
enqueue(17);
enqueue(65);
enqueue(13);
traversal(f);
return 0;

}