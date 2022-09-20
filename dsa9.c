#include<stdio.h>
int main(){

int i;
int j;
int arr[3][3];

for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
      if(i<j)
      { 
          arr[i][j]=0;


      }
      else{
          printf("enter the value\n");
          scanf("%d",&arr[i][j]);
      }
      



  }



}



// to print upper triangular  matrix
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