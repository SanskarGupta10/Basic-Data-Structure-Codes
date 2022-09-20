#include<stdio.h>
int main(){
int n;
int i;
// to print n natural numbers in an array
printf("enter the value of n ");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
printf("Enter the value of %d digit:\n",i+1);
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
printf("Value of %d digit:%d\n",i+1,arr[i]);


}
for(i=0;i<n-1;i++)
{
if((arr[i] + 1) !=arr[i+1])
{
    printf("%d is missing in an array ",i);
    break;
}



}








return 0;
}