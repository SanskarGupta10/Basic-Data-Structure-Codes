//to implement the best ways to reverse  an array
#include<stdio.h>
#include<string.h>
int main(){
     char st[] = "a+b-c*d/e-z^m";
     int length = 13;
     
     
     printf("The size of the string is %d\n",length);
     char temp;
     for(int i=0;i<length/2;i++){
temp = st[i];
st[i]=st[length-i-1];
st[length-i-1]=temp;

     }
     printf("The new reversed string is %s\n",st);


return 0;
}