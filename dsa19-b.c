#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
struct node* prev;

};

void linkedlistTraversal(struct node * a)
{
  while(a!=NULL)
  {
    printf("Element : %d\n",a->data);
    a=a->next;

  }

}
void reverseTraversal(struct node * head){
    struct node * ptr =head;
    while(ptr->next!=NULL){

    ptr = ptr->next;

    }
while(ptr!=NULL){

  printf("Element is %d\n",ptr->data);
  ptr = ptr->prev;
}


}
//delete  the element in the linked list in the beginning
struct node* deleteATFirst(struct node* head){

struct node* ptr=head;
head=head->next;
free(ptr);
return head;
}

//deleting an element of a given value
struct node * deleteAtValue(struct node * head,int value){
struct node * p = head;
struct node * q = head->next;
while(q->data!=value && q->next!=NULL){

  q=q->next;
  p=p->next;
}
if(q->data == value){
  p->next = q->next;
  free(q);
}
return head;





}


int main(){

struct node* head;  
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
 reverseTraversal(head);
 head = deleteATFirst(head);
 printf("\n");
 linkedlistTraversal(head);
 printf("\n");
 head = deleteAtValue(head,69);
 printf("\n");
 linkedlistTraversal(head);
 

 

return 0;
}