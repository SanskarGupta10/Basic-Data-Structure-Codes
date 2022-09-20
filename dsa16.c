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
//insert the element in the linked list in between
struct node* insertATIndex(struct node* head,int data,int index){
struct node *ptr=(struct node*)malloc(sizeof(struct node));
struct node *p=head;
int i =0;
while(i!= index-1)
{
    p = p->next;
    i++;
}
ptr->data=data;
ptr->next=p->next;
p->next=ptr;
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
 head =insertATIndex(head,45,2);
 linkedlistTraversal(head);

return 0;
}