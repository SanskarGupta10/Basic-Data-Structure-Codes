#include<stdio.h>
int main(){

int arr[14];
int i;

for(i=0;i<10;i++)
{
 printf("Enter the value of %d element \n",i+1);
 scanf("%d",&arr[i]);

}

printf("\n");
for(i=0;i<10;i++)
{
 printf("Value of %d element: %d \n",i+1,arr[i]);

 

}

int  c;
int x=1;
int n;
printf("Enter the value of c");
scanf("%d",&c);

for(i=0;i<10;i++)
{
if(c==arr[i])
{
     printf("element exist\n");
     break;
     
}




}
// to insert  an element in an array 
int pos;
printf("enter the pos in 1 d array from where u want to delete an element");
scanf("%d",&pos);
for(i=10;i>=pos;i--)
{
 
 arr[i+1]=arr[i];
 

}
arr[pos] =5;
for(i=0;i<11;i++)
{
    printf("Value of element is %d\n",arr[i]);

}


return 0;
}