// stacks using arrays
#include<stdio.h>
#include<stdlib.h>

struct stack{
int *arr;
int size;
int top;
};

int isFull(struct stack * s){
    if(s->top == s->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(struct stack * s){
    if(s->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack * s,int value){
    if(isFull(s)){
        printf("Stack is overflow!\n");
    }
    else
    {
s->top = s->top+1;
s->arr[s->top]=value;
    }
}
int pop(struct stack * s){
    int val;
    if(isEmpty(s)){
        printf("Stack is underflow!\n");
    }
    else{
     val=s->arr[s->top];
     s->top--;
    }
    return val;
}
void stackTraversal(struct stack * s){
    
 for(int i=0;i<=s->top;i++){
     printf("Element : %d\n",s->arr[i]);
 }

}
int index(struct stack *s,int index){
    if(s->top-index+1 <0){
        printf("Not a valid position!\n");
    }
    else{
        return s->arr[s->top-index+1];
    }
}



int main(){
    
    struct stack * sp;
    sp->top=-1;
    sp->arr = (int *)malloc(sp->size*sizeof(int));
    sp->size =20;
    
    push(sp,12);
    push(sp,34);
    push(sp,89);
    push(sp,23);
    push(sp,67);
    stackTraversal(sp);
    printf("popped element is %d\n",pop(sp));
   int q = index(sp,2);
    printf("Indexed element is %d\n",q);

return 0;
}