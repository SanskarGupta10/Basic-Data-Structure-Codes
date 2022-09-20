#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;

};

void circularlinkedlistTraversal(struct node * head)
{
 struct node *p=head;
 do{
   printf("Element is %d\n",p->data);
   p=p->next;


 }while(p!=head);

}


int main(){

struct node* head;  
struct node* second; 
struct node* third;  
struct node* fourth; 

//Allocate memnory for nodes in the linked list in heap
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));

//link first and second node
head->data=7;
head->next = second;
//link second and third node
second->data =11;
second->next=third;

//link third and fourth
third->data=66;
third->next = fourth;

//circular linked list terminates at fourth
fourth->data=90;
fourth->next=head;
 printf("circular linked list is following:\n");
 circularlinkedlistTraversal(head);

return 0;
}