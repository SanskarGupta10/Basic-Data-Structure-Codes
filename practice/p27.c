// single parenthesis matching as well as multi parenthesis matching
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
    char *arr;
    int top;
    int size;
};

int isFull(struct stack * s){
    if(s->top==s->size-1){
        return 1;

    }
    else{
        return 0;
    }
}
int isEmpty(struct stack * s){
    if(s->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack * s,char val){
    if(isFull(s)){
        printf("Stack Overflow!\n");
    }
    else{
        s->top=s->top+1;
        s->arr[s->top]=val;
    }
}
char pop(struct stack * s){
    char val;
    if(isEmpty(s)){
        printf("Stack Underflow!\n");
    }
    else{
        val=s->arr[s->top];
        s->top--;
        
    }
    return val;
}
char stackTop(struct stack * s){
    return s->arr[s->top];
}
int match(char a , char b){
if(a=='{' && b=='}'){
    return 1;
}
if(a=='(' && b==')'){
    return 1;
}
if(a=='[' && b==']'){
    return 1;
}
else{
    return 0;
}

}
int isParMat(char * st){
    
    struct stack * s;
    s->top=-1;
    s->size=20;
    s->arr =(char *)malloc(s->size*sizeof(char));
    for(int i=0;st[i] != '\0';i++){
       if(st[i] == '('){
           push(s,st[i]);
       }
       else if(st[i]==')'){
           if(isEmpty(s)){
               return 0;
           }
           else{
               pop(s);
           }
       }

    }
    if(isEmpty(s)){
        return 1;
    }
    else{
        return 0;
    }
}
int multiParMat(char * st){
    char popped_ch;
     struct stack * s;
    s->top=-1;
    s->size=20;
    s->arr =(char *)malloc(s->size*sizeof(char));
    for(int i=0;st[i] != '\0';i++){
       if(st[i] == '(' || st[i]=='[' || st[i]=='{'){
           push(s,st[i]);
       }
       else if(st[i]==')' || st[i]==']' || st[i]=='}'){
           if(isEmpty(s)){
               return 0;
           }
            popped_ch = pop(s);
               if(!match(popped_ch,st[i])){
               return 0;
           }
           
              
       }

    }
    if(isEmpty(s)){
        return 1;
    }
    else{
        return 0;
    }
}



int main(){
    char exp[]="[{(a+b-c)*d}]";
    if(multiParMat(exp)){
        printf("Parenthesis Matching!\n");
    }
    else{
        printf("Parenthesis not matching!\n");
    }


return 0;
}