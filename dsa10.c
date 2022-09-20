#include<stdio.h>
int main(){
 int i,j;

 int arr[3][3];

 for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
      if(i>=j)
      {
        printf("Enter the value:\n");
        scanf("%d",&arr[i][j]);  
      }


   }

 }
 for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
      if(i>j)
      {
        arr[j][i]=arr[i][j]; 
      }


   }

 }
 printf("Symmetric matrix is:\n");
 for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
       printf("%d\t",arr[i][j]);

   }
   printf("\n");

 }








return 0;
}