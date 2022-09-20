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
//insert the element in the linked list after the node
struct node* insertAfterNode(struct node* head, struct node* prevNode,int data){
struct node *ptr=(struct node*)malloc(sizeof(struct node));
ptr->data =data;
ptr->next=prevNode->next;
prevNode->next =ptr;
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
 head =insertAfterNode(head,second,45);
 linkedlistTraversal(head);

return 0;
}