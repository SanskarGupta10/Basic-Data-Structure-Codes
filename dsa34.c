#include<stdio.h>
#include<stdlib.h>
//declaring global variable
struct Node* f=NULL;
struct Node* r=NULL;


struct Node{
  int data;
  struct Node * next;
};

void queueTraversal(struct Node * ptr)
{
 printf("Printing the elements of queue\n");
 while(ptr!=NULL)
 {
  printf("Element: %d\n",ptr->data);
  ptr=ptr->next;

 }


}

void enqueue(int val)
{
 struct Node* n= (struct Node*)malloc(sizeof(struct Node));
 if(n==NULL)
 {
     printf("Queue is full\n");
 }
 else{
      n->data=val;
      n->next=NULL;
      //if the enqueue node will be the first node
      if(f==NULL && r==NULL){
          f=r=n;
      }
      else{
          r->next=n;
          r=n;}
      }

 }




int dequeue()
{   int val =-1;
    struct Node* ptr=f;
if(f==NULL)
{
    printf("Queue is empty\n");
}
else{ f=f->next;
     val = ptr->data;
    free(ptr);

}
return val;

}



int main()
{  
    enqueue(19);
    enqueue(28);
    enqueue(98);
    enqueue(44);
queueTraversal(f);
printf("Dequeuing element is %d\n",dequeue());
    
   

return 0;
}