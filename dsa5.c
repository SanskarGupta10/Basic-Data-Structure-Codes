#include<stdio.h>
int main(){
 int i;
 int j;
 int x,y;
 printf("enter the value of x:");
 scanf("%d",&x);
 printf("\n");
 printf("enter the value of y:");
 scanf("%d",&y);


 int arr[x][y];
 for(i=0;i<x;i++)
 {
   for(j=0;j<y;j++)
   {
       printf("%d,%d element value :\n",i+1,j+1);
       scanf("%d",&arr[i][j]);
   }

 }
 for(i=0;i<x;i++)
 {
   for(j=0;j<y;j++)
   {
       printf("%d,%d element value is %d\n",i+1,j+1,arr[i][j]);
       
   }


 }

 int array[x][y];
 for(i=0;i<x;i++)
 {
   for(j=0;j<y;j++)
   {
       array[i][j]=arr[j][i];
       
   }


 }
 printf("\n");
 for(i=0;i<x;i++)
 {
   for(j=0;j<y;j++)
   {
       printf("%d ,%d element is : %d\n",i+1,j+1,array[i][j]);
       
   }


 }


 







return 0;
}