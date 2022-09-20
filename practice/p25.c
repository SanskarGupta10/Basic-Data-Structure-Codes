// to revrese an array in an optimised way
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

char st[] = "a+b-c+d";
int size=7;
int temp;
int i;


for(int i=0;i<size/2;i++){
temp = st[i];
st[i] = st[size-i-1];
st[size-i-1]=temp;

}



printf("\n The new string is %s\n",st);

// another way to reversing the string
printf("Another way for string reversal !\n");
char a[]="a+b-c*d";
char *b =(char *)malloc((strlen(a)+1)*sizeof(char));
int j = 0;
for(int i=0;a[i]!= '\0';i++)
{
 j = j+1;

}
j--;
for(int i=0;a[i] != '\0';i++){
    b[j] = a[i];
    j--;
}
b[j] = '\0';
printf("\n The reverse string is %s\n",b);


return 0;
}