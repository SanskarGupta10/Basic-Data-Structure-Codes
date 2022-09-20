#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
int size;
int top;
char * arr;

};
char stackTop(struct stack * st){
 return st->arr[st->top];

}

int isFull(struct stack *st){
    if(st->top == st->size -1){
        return 1;
    }
    else{
        return 0;
    }


}
int isEmpty(struct stack * st){
    if(st->top == -1){
        return 1;
    }
    else{
        return 0;
    }



}
void push(struct stack * st,char  data){
    if(isFull(st)){
        printf("Stack is Full so push operation will be failed\n");
    }
    else{
     
     st->top = st->top + 1;
     st->arr[st->top] = data;



    }

}
char * reverseArr( char * pt){
    char * st = (char*)malloc((strlen(pt)+1)* sizeof(char));
int j = -1;
for(int i =0; pt[i] != '\0'; i++){
    j++;
}
for(int i =0; pt[i] != '\0';i++){
   st[j] = pt[i];
   j--;
}
st[j] = '\0';
return st;
}
char pop(struct stack * st){
    char c;
if(isEmpty(st)){
    printf("Empty stack!\n");
}
else{
    c =st->arr[st->top];
    st->top--;
    return c;
}


}

int isOperator(char ch){
if(ch=='+' || ch== '-' || ch=='*' || ch=='/'){
    return 1;
}else
{
    return 0;
}

}

int isPrecedence(char ch){
 if(ch=='*' || ch=='/'){
     return 2;
 }
 else if(ch=='+' || ch=='-'){
     return 1;
 }
 else{
     return 0;
 }


}

char * intopo(char * infix){
    struct stack * st = (struct stack *)malloc(sizeof(struct stack));
    st->size = 100;
    st->top =-1;
    st->arr = (char*)malloc(st->size * sizeof(char));

    //creating the new postfix string
    char * postfix= (char *)malloc((strlen(infix)+1)* sizeof(char));
    //creating 2 variables tracing postfix and infix
    int i=0;
    int j=0;
    
    

    while(infix[i]!= '\0'){
    if(!isOperator(infix[i])){
    postfix[j] = infix[i];
    j++;
    i++;
    }
    else 
    { 
        if(isPrecedence(infix[i])>isPrecedence(stackTop(st))){

       push(st,infix[i]);
       i++;

        }
        else{
      postfix[j] = pop(st);
      j++;

        }

    }
    }
    while(!isEmpty(st)){
      postfix[j] = pop(st);
      j++;
    
    }
 postfix[j] = '\0';
    return postfix;
}

int main(){
    char * infix = "a+b-c";
    char * revInfix = reverseArr(infix);
    
    printf("The postfix conversion of the given infix string is %s\n",intopo(infix));
    char * post = intopo(revInfix);
    char * rev = reverseArr(post);
    printf("The reverse of this postfix expression i.e. prefix expression is %s\n",rev);



return 0;
}