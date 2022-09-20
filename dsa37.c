//insertion sort algorithms
#include<stdio.h>

void arrayTraversal(int * A,int n){

for(int i =0;i<=n-1;i++)
{

    printf("Element : %d\n",A[i]);
}

}

void insertionSort(int * A, int n){
// for number of passes
int key,i,j;
for(i=1;i<=n-1;i++)
{
  key =A[i];
  j= i-1;
  while( A[j]>key){
   A[j+1] =A[j];
   j--;
  }
  A[j+1]=key;



}

}
int main()
{

int a[]={12,34,16,98,67,91};
int n =6;

arrayTraversal(a,n);
insertionSort(a,n);
printf("\n");
arrayTraversal(a,n);
return 0;


}




