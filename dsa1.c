#include<stdio.h>
int main(){

int arr[10];
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
//linear search
for(i=0;i<10;i++)
{
if(c==arr[i])
{
     printf("element exist\n");
     break;
     
}




}
// to delete an array 
int pos;
printf("enter the pos in 1 d array from where u want to delete an element");
scanf("%d",&pos);
for(i=pos;i<10;i++)
{
 
 arr[i]=arr[i+1];

}
for(i=0;i<9;i++)
{
    printf("Value of element is %d\n",arr[i]);

}


return 0;
}