#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;
};

int isEmpty(struct stack * ptr)
{
   if(ptr->top==-1){
       return 1;
   }
   else{
       return 0;
   }

}

int isFull(struct stack * ptr){
if(ptr->top == ptr->size -1)
{
    return 1;
}
else{
    return 0;
}
}
void Push(struct stack * ptr,int value)
{
  if(isFull(ptr))
  {
      printf("stack is full\n");
  }
  else
  {
      ptr->top++;
      ptr->arr[ptr->top]=value;


  }
 


}
int pop(struct stack *ptr)
{
  if(isEmpty(ptr))
  {
      printf("Stack is empty");
  }
  else{
    int value=ptr->arr[ptr->top];
    ptr->top=ptr->top -1;
    return value;


  }



}
int peak(struct stack * ptr,int i){
if((ptr->top - i + 1)<0)
{
    printf("Not a valid position");
    return -1;

}
else{

 return ptr->arr[ptr->top-i+1];

}


}




int main(){

    struct stack *s;
    s->size=5;
    s->top=6;
    s->arr= (int *)malloc(s->size * sizeof(int));

    //to check whether the stack is empty
    int i=isEmpty(s);
    int j=isFull(s);
    if(i==1)
    {
        printf("stack is empty\n");
    }
    else if(j==1)
    {
       printf("stack is full\n");
    }
    else{
        printf("stack can store further elements and remove as well\n");
    }
  
   Push(s,16);
   
   // printf("stack after pushing empty: %d\n",isEmpty(s));
   //printf("stack after  pushing full: %d\n",isFull(s));
    int k=isEmpty(s);
    int l=isFull(s);
    if(i==1)
    {
        printf("stack is empty\n");
    }
    else if(j==1)
    {
       printf("stack is full\n");
    }
    else{
        printf("stack can store further elements and remove as well\n");
    }
     Push(s,24);
   Push(s,32);

    
    printf("The value of popped index is %d\n",pop(s));


    printf("The value after popping in the stack is following:\n");
    
    int z =2;
      printf("Value of element at position %d is %d\n",z,peak(s,z));

    

    
     







return 0;
}