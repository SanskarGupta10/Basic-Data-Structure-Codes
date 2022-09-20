//implementation of queues using arrays and structures
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct queue{
    int * arr;
    int size;
    int f; // pointer points to delete the element
    int r; // pointer points to insert the new element
};

int isFull(struct queue * q ){
    if(q->r == q->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct queue * q){
    if(q->r == q->f){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(struct queue * q,int value){
 if(isFull(q)){
     printf("Queue is Full !\n");
 }
 else{
        q->r = q->r+1;
        q->arr[q->r] = value;

 }
}

 int dequeue(struct queue * q){
     int val =-1;
     if(isEmpty(q)){
         printf("Queue is Empty!\n");
     }
     else{
    
     q->f++;
      val = q->arr[q->f];
     
     }
 return val;

}
int main(){
    struct queue q;
    q.size = 20;
    q.f=q.r=-1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q,12);
    enqueue(&q,23);
    enqueue(&q,44);
    enqueue(&q,56);
    for(int i=0; i<4 ;i++){
        printf("Element is %d\n",q.arr[i]);
    }
    printf("\n The dequeueing element is %d\n",dequeue(&q));

return 0;
}