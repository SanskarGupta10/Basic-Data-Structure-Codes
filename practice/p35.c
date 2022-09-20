// bubble sorting algorithm
#include<stdio.h>
void bubbleSort(int A[], int n){
    int temp;
    int sort = 1;
    
  for(int i=0;i<n-1;i++){
       printf("Sorted in %d pass\n",i+1);

  for(int j=0;j<n-i-1;j++){
      if(A[j]>A[j+1]){
      temp = A[j];
      A[j]=A[j+1];
      A[j+1]= temp;
      sort = 0;
      }

  }
  
  if(sort){
      return;
  }


  }

}
void printArray(int A[],int n){
 for(int i=0;i<n;i++){
 printf("%d\t",A[i]);

 }

}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n =6;
    bubbleSort(arr,n);
    printArray(arr,n);

return 0;
}