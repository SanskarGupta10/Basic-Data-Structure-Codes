#include<stdio.h>
int main(){
int n;
int i;
printf("Enter the value of n");
scanf("%d",&n);
int arr[n];


for(i=0;i<n;i++)
{
    printf("Enter the value of %d element :\n",i+1);
    scanf("%d",&arr[i]);

}
for(i=0;i<n;i++)
{
    printf("Value of %d element : %d\n",i+1,arr[i]);

    
}

for(i=0;i<n;i++)
{
   for(int j=i+1;j<n;j++)
   {
      if(arr[i]==arr[j])
      {
         for(int k=j;k<n-1;k++)
         {
             arr[k]=arr[k+1];

         }
          j--;
  n--;

      }

  

   }




}
for(i=0;i<n;i++)
{
printf("Element value is : %d\n",arr[i]);

}





return 0;
}