// Bubble sorting is not adaptive sorting algo by default but we can make it adaptive sorting algo
#include<stdio.h>
#include<stdlib.h>

void arrayTraversal(int * A,int n)
{
  for(int i =0;i<n;i++){

      printf("Element : %d\n",A[i]);
  }

}

void adaptiveBubbleSort(int * A,int n){
int isSorted=0;
int temp;
for(int i=0;i<n;i++){
    isSorted=1;
    printf("Sorting is done in %d  pass!\n ",i+1);
for(int j=0;j<n-1-i;j++){
    if(A[j]>A[j+1]){

    
    temp = A[j];
    A[j]=A[j+1];
    A[j+1]=temp;
    isSorted =0;}


}
if(isSorted){
    return;   // return is used to return the function call;
}

}

}
int main(){
int * A;
A[0]=197;
A[1]=212;
A[2]=33;
A[3]=42;
A[4]=18;
A[5]=23;
int n =6;
arrayTraversal(A,6);

adaptiveBubbleSort(A,6);
printf("\n");
arrayTraversal(A,6);




}