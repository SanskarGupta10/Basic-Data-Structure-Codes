#include<stdio.h>
#include<stdlib.h>
struct node{
 char data;
 struct node* next;
 struct node* prev;

};
void linkedlistTraversal(struct node * a)
{
  while(a!=NULL)
  {
    printf("%c\n",a->data);
    a=a->next;

  }

}
void reverseTraversal(struct node * head){
struct node * ptr = head;
while(ptr->next !=NULL){

ptr = ptr->next;

}


while(ptr!=NULL){
printf("%c\n",ptr->data);
ptr=ptr->prev;
}

}

// to check whether the list of characters of doubly linked list is palindrome or not
int isPalindrome(struct node * head){
    int i =0;
  struct node * p = head;
  struct node * q = head;
  while(q->next!=NULL){
      q = q->next;
  }
  
while(p!=NULL && q!=NULL){
    if(p->data==q->data){
        p=p->next;
        q=q->prev;
       i =1; 
    }
    else{
        i=0;
        break;

}}
 return i;

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
head->data='m';
head->next = second;
head->prev =NULL;
//link second and third node
second->data ='b';
second->next=third;
second->prev = head;
//link third and fourth
third->data='d';
third->next = fourth;
third->prev = second;
//link fourth and fifth
fourth->data='a';
fourth->next =fifth;
fourth->prev = third;
//terminating after fifth node
fifth->data ='m';
fifth->next =NULL;
fifth->prev = fourth;


 linkedlistTraversal(head);
 printf("\n");
 if(isPalindrome(head))
 {
   printf("Yes its a palindrome!\n");

 }
 else
 {
     printf("no its not a palindrome!\n");
 }
 

 


return 0;
}