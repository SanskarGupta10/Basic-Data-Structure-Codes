#include<stdio.h>

void arrayTraversal(int * A,int n){

for(int i =0;i<=n-1;i++)
{

    printf("Element : %d\n",A[i]);
}

}

void selectionSort(int *A,int n){
int iM,temp;

for(int i=0;i<n-1;i++)
{
  iM =i;
  for(int j = i+1;j<n;j++)
  {
    if(A[j]<A[iM])
    {
       iM=j;

    }}
    temp =A[i];
    A[i]=A[iM];
    A[iM]=temp;

  
}
}

int main(){
    int a[]={3,5,2,13,26,18};
    int n =6;

    arrayTraversal(a,n);
    selectionSort(a,n);
    printf("\n");
    arrayTraversal(a,n);

return 0;
}