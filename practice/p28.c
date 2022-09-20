//infix to postfix and infix to prefix
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

//to reverse an array
char * reverseString(char * a){
    char *b =(char *)malloc((strlen(a)+1)*sizeof(char));
int j = 0;
for(int i=0;a[i]!= '\0';i++)
{
 j = j+1;

}
j--;

for(int i=0;a[i] != '\0';i++ ){
    b[j] = a[i];
    j--;
}
b[j] = '\0';
return b;
}
int precedence(char a){
    if(a == '*' || a=='/'){
        return 3;
    }
    else if(a=='+' || a=='-'){
        return 2;
    }
    else{
        return 0;
    }
}

int isOperator(char a){
if(a=='+' || a=='-' || a=='*' ||  a=='/'){
    return 1;
}
else{
    return 0;
}


}
char * reverseArr( char  pt[]){
    int length =strlen(pt);
    char temp;
    for(int i=0;i<length/2;i++){
    temp=pt[i];
    pt[i]=pt[length-i-1];
    pt[length-i-1]=temp;
    }
return pt;
}


//infix to postfix
char * intopo(char  st[]){
struct stack * s = (struct stack *)malloc(sizeof(struct stack));
s->top=-1;
s->size=20;
s->arr=(char *)malloc(s->size*sizeof(char));
char * postfix = (char *)malloc((strlen(st)+1)*sizeof(char));
int i=0;
int j=0;
while(st[i] != '\0'){
if(!isOperator(st[i])){
    postfix[j]=st[i];
    i++;
    j++;
}
else{
    if(precedence(st[i])>precedence(stackTop(s))){
        push(s,st[i]);
        i++;
    }
    else{
        postfix[j]=pop(s);
        j++;
    }
}

}
while(!isEmpty(s)){
    postfix[j]=pop(s);
    j++;
}
postfix[j]='\0';
return postfix;

}

char *intopre(char infix[]){
char*reverse=reverseArr(infix);
char*post=intopo(reverse);
char*prefix=reverseArr(post);
return prefix;

}


int main(){
char  infix[] = "a+b-c*d+e-g/f";

printf("The postfix string of the infix is %s\n",intopo(infix));
int size = strlen(infix);
char * prefix=intopre(infix);
printf("The prefix string of the infix is %s\n",prefix);





return 0;
}