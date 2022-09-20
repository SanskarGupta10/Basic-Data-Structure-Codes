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
//delete the element in the linked list in between
struct node* deleteATIndex(struct node* head,int index){

struct node *p=head;
struct node* q=head->next;

for(int i =0;i<index-1;i++)
{
    p = p->next;
    q=q->next;
}
p->next=q->next;
free(q);
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
 printf("After deletion at an given index:\n");
 head =deleteATIndex(head,2);
 linkedlistTraversal(head);

return 0;
}