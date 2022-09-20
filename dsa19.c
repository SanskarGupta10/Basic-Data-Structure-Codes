#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;

};

void linkedlistTraversal(struct node * a)
{
  while(a!=NULL)
  {
    printf("Element : %d\n",a->data);
    a=a->next;

  }

}
//delete  the element in the linked list in the beginning
struct node* deleteATFirst(struct node* head){

struct node* ptr=head;
head=head->next;
free(ptr);
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
//link second and third node
second->data =11;
second->next=third;

//link third and fourth
third->data=66;
third->next = fourth;

//link fourth and fifth
fourth->data=78;
fourth->next =fifth;

//terminating after fifth node
fifth->data =69;
fifth->next =NULL;



 linkedlistTraversal(head);
 printf("linked list after deletion:\n");
 head =deleteATFirst(head);
 linkedlistTraversal(head);
 

return 0;
}