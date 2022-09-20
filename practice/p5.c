// multi parenthesis matching 
#include<stdio.h>
#include<stdlib.h>
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
int match(char a , char b){
 if(a=='(' && b==')'){
     return 1;
 }
 if(a=='{' && b=='}'){
     return 1;
 }
 if(a=='[' && b==']'){
     return 1;
 }
 else{
     return 0;
 }



}
int multiParenthesis(char * exp){
struct stack * st;
st->size = 100;
st->top = -1;
st->arr = (char*)malloc(sizeof(struct stack));
char popped_ch;


for(int  i =0 ; exp[i]!='\0'; i++){
    
    if(exp[i] == '(' || exp[i]=='{' || exp[i] == '['){

        push(st,exp[i]);
    }
    else if(exp[i] == ')' || exp[i]=='}' || exp[i] == ']'){
        if(isEmpty(st)){
            return 0;
        }
          popped_ch = pop(st);
          if(!match(popped_ch,exp[i])){
            return 0; 
        }
        }    
        
    }

    if(isEmpty(st)){
        return 1;
    }
    else
    {
        return 0;
    }
    
}






int main(){

    char * exp = "(5+(6-87))}";
    if(multiParenthesis(exp)){
        printf("Expression is balanced !\n");
    }
    else{
printf("Expression is unbalanced!\n");

    }

return 0;
}