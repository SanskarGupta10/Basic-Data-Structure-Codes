// implementation of linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
 struct node * next;
 struct node * prev;
 int data;
};

//insert at beginning
struct node * insAtBeg(struct node * head, int value){
  struct node * ptr =(struct node *)malloc(sizeof(struct node));
     ptr->data = value;
     ptr->next = head;
     head = ptr;
     return head;

}
// insert at between with the given index
struct node * insAtInd(struct node * head, int index,int value){
    struct node * ptr= (struct node *)malloc(sizeof(struct node));
    struct node * p = head;
    ptr->data = value;
int i =0;
while(i != index-1){
   p = p->next;
   i++;
}
ptr->next = p->next;
p->next= ptr;
return head;

}
// insert after or before a given value
struct node * insGiv(struct node * head,int value,int data){
  struct node * ptr = (struct node *)malloc(sizeof(struct node));
     ptr->data = data;
      struct node * p =head;
      while(p->next != NULL && p->data != value){
           p = p->next;
      }
      if(p->data == value){
      ptr->next = p->next;
      p->next = ptr;
      }
      return head;


}

// insertion at the end
struct node * insATEnd(struct node * head, int value){
  struct node * ptr = (struct node *)malloc(sizeof(struct node));
  ptr->data = value;
  struct node * p = head;
  while(p->next != NULL){
    p = p->next;
  }
  p->next = ptr;
  ptr->next = NULL;
  return head;

}

// deletion at the beginning
struct node * delAtBeg(struct node * head){
 struct node * p = head;
 head = head->next;
 free(p);
 return head;


}
// delete at a particular index value
struct node * delAtInd(struct node * head,int index){
   struct node * p =head;
   struct node * q = head->next;
   int i =0;
   while( i != index-1){
       p = p->next;
       q = q->next;
       i++;
   }
   p->next = q->next;
   free(q);
      return head;
}

// delete the node having a particular value
struct node * delGiv(struct node * head,int value){
    struct node * p = head;
    struct node * q = head->next;
    while(q->next != NULL && q->data != value){
        p = p->next;
        q= q->next;
    }
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
}
// deleting a node at the end
void delAtEnd(struct node * head){
 struct node * p = head;
 struct node * q = head->next;
 while(q->next != NULL){
    p = p->next;
    q = q->next;

 }
 p->next = NULL;
 free(q);
 


}

void traversal(struct node * ptr){
  while(ptr != NULL){
   printf("%d\n",ptr->data);
   ptr = ptr->next;

  }

}

void revTraversal(struct node * head){
  struct node * ptr = head;
 while(ptr->next != NULL){
    ptr = ptr->next;
 }
  
 while(ptr != NULL){
    printf("%d\n",ptr->data);
    ptr = ptr->prev;
 }




}

int main(){
    struct node * head;
    struct node * second;
    struct node* third;
    struct node* fourth;
    struct node* fifth;

 head = (struct node *)malloc(sizeof(struct node));
  second= (struct node *)malloc(sizeof(struct node));
   third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
     fifth = (struct node *)malloc(sizeof(struct node));

     head->next = second;
     head->prev = NULL;
     head->data = 12;
     
     second->next = third;
     second->prev = head;
     second->data = 45;

     third->next = fourth;
     third->prev = second;
     third->data=89;

     fourth->next=fifth;
     fourth->prev = third;
     fourth->data = 57;

     fifth->next = NULL;
     fifth->prev = fourth;
     fifth->data = 61;

     
   printf("\n");
   revTraversal(head);
   printf("\n");
  

return 0;
}