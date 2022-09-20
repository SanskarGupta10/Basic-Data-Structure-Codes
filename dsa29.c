#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    char * arr;
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
void Push(struct stack * ptr,char value)
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
char pop(struct stack *ptr)
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
int parenthesisMatch(char * exp)
{
  struct stack * sp;
  //create nd initialize the stack
  sp->size=100;
  sp->top=-1;
  sp->arr=(char *)malloc(sp->size* sizeof(char));
  for(int i =0;exp[i]!='\0';i++)
  { if(exp[i]=='(')
  {
      Push(sp,exp[i]);

  }
  else if(exp[i]==')')
  {

      if(isEmpty(sp))
      {
          return 0;
      }
      pop(sp);
  }
  }
  if(isEmpty(sp))
  {
      return 1;
  }
else{
    return 0;
}

}

int main()
{

char * exp ="(8*9 + 34)";
//check whether the stack is empty
if(parenthesisMatch(exp))
{

    printf("The parenthesis is matching");
}
else{
    printf("The parenthesis is not matching");
}



return 0;
}