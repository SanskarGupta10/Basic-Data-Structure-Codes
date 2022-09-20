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
//delete the element in the linked list by checking the given value of node
struct node* deleteAtGivenValue(struct node* head,int value){

struct node *p=head;
struct node*q=head->next;
while(q->data != value && q->next != NULL)
{
    p = p->next;
    q =q->next;
}
if(q->data == value)
{
p->next=q->next;
free(q);
}
return head;

}


int main(){

struct node* head;  
struct node* second; 
struct node* third;   

//Allocate memnory for nodes in the linked list in heap
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));

//link first and second node
head->data=7;
head->next = second;
//link second and third node
second->data =11;
second->next=third;

//terminate the list at third node
third->data=66;
third->next = NULL;

 linkedlistTraversal(head);
 printf("After deletion at an given value of an index:\n");
 head =deleteAtGivenValue(head,11);
 linkedlistTraversal(head);

return 0;
}