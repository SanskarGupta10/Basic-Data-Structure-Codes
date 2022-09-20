#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node* next;
 struct node* prev;

};

//searching the element 
struct node *searchNode(struct node * head,int value){
    struct node * p = head;
    while(p->next !=NULL && p->data!=value){
        p=p->next;
    }
    if(p->data==value){
        return p;
    }
}

void linkedlistTraversal(struct node * a)
{
  while(a!=NULL)
  {
    printf("Element : %d\n",a->data);
    a=a->next;

  }

}
void reverseTraversal(struct node * head){
struct node * ptr = head;
while(ptr->next !=NULL){

ptr = ptr->next;

}


while(ptr!=NULL){
printf("Element : %d\n",ptr->data);
ptr=ptr->prev;
}

}

int middleElement(struct node * head){
struct node * fastptr = head;
struct node * slowptr = head;
while(fastptr!=NULL && fastptr->next!=NULL){

    fastptr = fastptr->next->next;
    slowptr = slowptr->next;
}
return slowptr->data;



}
// to find the size of doubly linked list
int sizeDoubly(struct node * head){
struct node * ptr = head;
int i =0;
while(ptr !=NULL){

    ptr = ptr->next;
    i++;
}

int size = i * sizeof(struct node);
return size;


}
void isCircular(struct node * head){

if(head == NULL){
  printf("yes\n");
}else{
  struct node* ptr = head->next;
  while(ptr!=NULL && ptr!=head){
      ptr = ptr->next;
  }

  if(ptr==head){
    printf("yes\n");
  }
  else
  {
    printf("no\n");
  }
  
}
}




int main(){struct node* head;  
struct node* second; 
struct node* third; 
struct node* fourth;
struct node* fifth;  


//Allocate memnory for nodes in the linked list in heap
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));
fifth=(struct node*)malloc(sizeof(struct node));

//link first and second node
head->data=7;
head->next = second;
head->prev =NULL;
//link second and third node
second->data =11;
second->next=third;
second->prev = head;
//link third and fourth
third->data=66;
third->next = fourth;
third->prev = second;
//link fourth and fifth
fourth->data=78;
fourth->next =fifth;
fourth->prev = third;
//terminating after fifth node
fifth->data =69;
fifth->next =NULL;
fifth->prev = fourth;


 linkedlistTraversal(head);
 printf("\n");
isCircular(head);
 printf("\n");
 struct node * z =searchNode(head,78);
 printf("The value of the searched node is %d",z->data);
 printf("\n");

 reverseTraversal(head);
 printf("\n");
 printf("The value of middle element is %d\n",middleElement(head));
 printf("The size of this doubly linked list is %d",sizeDoubly(head));

 

return 0;

}