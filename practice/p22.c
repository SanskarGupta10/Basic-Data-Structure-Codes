// doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
    struct node * prev;
};

void reverseTrav(struct node * head){
    struct node * p = head;
    while(p->next != NULL){
        p = p->next;
    }

    while(p!=NULL){
        printf("Element is %d\n",p->data);
        p = p->prev;
    }
}

int midElement(struct node * head){
 struct node * p = head;
 struct node * q = head->next;
 while(q->next->next != NULL && p->next != NULL){
     p = p->next;
     q= q->next;
 }

 return p->data;

}
int isPalindrome(struct node * head){
    int i =0;
struct node * p = head;
struct node * q = head;
while(q->next != NULL){
    q = q->next;
}
while(q != NULL && p != NULL ){
    if(q->data == p->data){
        q = q->prev;
        p = p->next;
         i =1;
    }
    else{
        i = 0;
        break;
    }
}
return i;
}



int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;
    struct node * fifth;
    struct node * sixth;
     head = (struct node *)malloc(sizeof(struct node));
     second = (struct node *)malloc(sizeof(struct node));
     third = (struct node *)malloc(sizeof(struct node));
     fourth = (struct node *)malloc(sizeof(struct node));
     fifth = (struct node *)malloc(sizeof(struct node));
     sixth = (struct node *)malloc(sizeof(struct node));

     head->data =3;
     head->prev =NULL;
     head->next = second;

     second->data=2;
     second->prev=head;
     second->next=third;

     third->data=1;
     third->prev=second;
     third->next=fourth;

     fourth->data=1;
     fourth->prev=third;
     fourth->next=fifth;

     fifth->data=2;
     fifth->prev=fourth;
     fifth->next=sixth;

     sixth->data=3;
     sixth->prev=fifth;
     sixth->next=NULL;

reverseTrav(head);


int p = midElement(head);
printf("Middle element is %d\n",p);

if(isPalindrome(head)){
    printf("Yes its a palindrome!\n");
}
else{
    printf("No its not a palindrome!\n");
}




return 0;
}