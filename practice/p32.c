//circular queues 
#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int * arr;
};

int isEmpty(struct queue * q ){
    if(q->r == q->f){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct queue * q){
    if(((q->r + 1)%q->size) == q->f){
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
        q->r = (q->r+1)%q->size;
        q->arr[q->r] = value;

 }
}

 int dequeue(struct queue * q){
     int val =-1;
     if(isEmpty(q)){
         printf("Queue is Empty!\n");
     }
     else{
    
     q->f = (q->f+1)%q->size;
      val = q->arr[q->f];
     
     }
 return val;

}

int main(){
    struct queue q;
    q.size = 20;
    q.arr=(int *)malloc(q.size * sizeof(int));
    q.r=q.f=0;
    enqueue(&q,12);
    enqueue(&q,23);
    enqueue(&q,44);
    enqueue(&q,56);
    for(int i=1; i<=q.r ;i++){
        printf("Element is %d\n",q.arr[i]);
    }
    printf("The dequeuing element is %d\n",dequeue(&q));
   

return 0;
}