//to make circular queue
#include<stdio.h>
#include<stdlib.h>

struct Queue{
 int size;
 int r;
 int f;
 int * arr;
};

int isEmpty(struct Queue * q )
{
  if(q->r==q->f)
  {
      return 1;
  }
  else{
      return 0;
  }
}

int isFull(struct Queue *q)
{if((q->r +1)%q->size==q->f)
{
    return 1;
}
else
{
    return 0;
}
}

void enqueue(struct Queue *q,int val)
{if(isFull(q))
{
    printf("Queue is full\n");
    
}
else
{
    q->r=((q->r +1)%q->size);
    q->arr[q->r]=val;
}

}

int dequeue(struct Queue *q)
{   int a =-1;
    if(isEmpty(q))
{
    printf("Queue is Empty\n");
    return 0;
}
else
{q->f=((q->f + 1)%q->size);
a=q->arr[q->f];

}
return a;
}

int main()
{
  struct Queue q;
  q.size=5;
  q.f=q.r=0;
  q.arr=(int *)malloc(q.size*sizeof(int));

  enqueue(&q,12);
  enqueue(&q,78);
  enqueue(&q,46);
  enqueue(&q,23);
  enqueue(&q,76);
  printf("Dequeuing element is %d\n",dequeue(&q));
   printf("Dequeuing element is %d\n",dequeue(&q));
    printf("Dequeuing element is %d\n",dequeue(&q));
     printf("Dequeuing element is %d\n",dequeue(&q));
     enqueue(&q,87);
     enqueue(&q,88);
     enqueue(&q,89);
     enqueue(&q,90);
    for(int i =0;i<5;i++)
    {

        printf("Element %d of queue : %d\n",i+1,q.arr[i]);
    }



return 0;


}