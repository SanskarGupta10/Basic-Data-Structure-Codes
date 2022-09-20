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
// to write the prog to reverse the elements of an array
for(i=0;i<n/2;i++)
{

//if n is even number
//swapping is needed
int temp;
temp=arr[i];
arr[i]=arr[n- i-1];
arr[n-1-i]=temp;

}
// to print the new array
for(i=0;i<n;i++)
{
    printf("%d\t",arr[i]);
} 





return 0;
}