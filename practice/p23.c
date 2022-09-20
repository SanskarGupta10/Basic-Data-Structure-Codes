//operations on li nked list
#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node * next;

};
//to find the middle element 
int midElement(struct node * head){
struct node * p =head;
struct node * q = head->next;
while(p->next != NULL && q->next->next != NULL){
   p=p->next;
   q=q->next;
}
return p->data;
}
// to check whether the given linked list is circular or not
void isCircular(struct node * head){
struct node * ptr = head->next;
if(head == NULL){
    printf("YES \n");

}

while(ptr->next != NULL && ptr->next != head){
    ptr = ptr->next;
}
if(ptr->next == head){
    printf("YES\n");
}
else{
    printf("NO\n");
}




}

void traversal(struct node * ptr){
    
while(ptr!= NULL){
printf("Element is %d\n",ptr->data);
ptr=ptr->next;

}



}

struct node *insertAtBeg(struct node *head,int value){
struct node *ptr=(struct node *)malloc(sizeof(struct node));
ptr->next=head;
ptr->data=value;
head = ptr;
return head;



}
struct node * insertAtIndex(struct node * head,int value,int index){
struct node * ptr = (struct node *)malloc(sizeof(struct node));
struct node *p = head;
ptr->data = value;
int i=0;
while(i != index-1)
{
p = p->next;
i++;

}
ptr->next = p->next;
p->next = ptr ;
return head;



}
struct node *cirInsertAtHead(struct node * head,int value){
struct node * ptr =(struct  node*)malloc(sizeof(struct node));
struct node * p = head->next;
while(p->next != head){
    p = p->next;
}
p->next = ptr;
ptr->next = head;
head = ptr;
return head;
}

//deleting the elements of linked list
struct node *deleteAtFirst(struct node * head){
    struct node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct node *deleteAtIndex(struct node * head,int index){
struct node * p = head;
struct node * q = head->next;
for(int i =0;i< index-1;i++){
    p = p->next;
    q= q->next;
}
p->next = q->next;
free(q);
return head;

}
struct node * deleteAtEnd(struct node * head){
struct node * p = head;
struct node * q = head->next;
while(q->next != NULL){
    q=q->next;
    p=p->next;
}
p->next = NULL;
return head;

}
struct node * deleteAfterVal(struct node * head,int value){
struct node * p = head;
struct node * q =head->next;
while(q->data != value && q->next != NULL){
    q = q->next;
    p = p->next;
}
if(q->data == value){
    p->next = q->next;
    free(q);
}
return head;
}

struct node *insertAtEnd(struct node * head,int value){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    struct node * p =head;
    ptr->data = value;
    while(p->next != NULL){
        p = p->next;
    }
    
    p->next = ptr;
    ptr->next = NULL;
   return head;
}
struct node * insertAtPrev(struct node * head,int value,struct node * prevnode){
struct node * ptr = (struct node *)malloc(sizeof(struct node));
ptr->data = value;
ptr->next = prevnode->next;
prevnode->next = ptr;
return head;



}
int lengthOfll(struct node * head){
struct node * ptr = head;
int len = 0;
while(ptr!= NULL){
 ptr=ptr->next;
 len++;

}
return len;

}



int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;

    head =(struct node *)malloc(sizeof(struct node));
     second =(struct node *)malloc(sizeof(struct node));
      third =(struct node *)malloc(sizeof(struct node));
       fourth =(struct node *)malloc(sizeof(struct node));


head->data = 78;
head->next=second;

second->data=90;
second->next=third;

third->data=89;
third->next=fourth;

fourth->data=45;
fourth->next=NULL;

traversal(head);

printf("\n");
  
 head=insertAtPrev(head,97,second);
 head=insertAtBeg(head,82);
 head=insertAtIndex(head,77,3);
 head=insertAtEnd(head,48);
traversal(head);
int t = lengthOfll(head);
printf("\n The length of the linked list is %d\n",t);
isCircular(head);

head = deleteAtIndex(head,2);
head = deleteAtEnd(head);
head = deleteAfterVal(head,97);
traversal(head);
int middle = midElement(head);
printf("\n The middle element is %d \n",middle);
return 0;
}