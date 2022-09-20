//implementing the algorithm of insertion sort
#include<stdio.h>

void insertionSort(int * arr, int n){
int key,j;
for(int i =1; i<n ;i++){
key = arr[i];
j = i-1;
while(arr[j]>key ){
arr[j+1] = arr[j];
j--;

}
arr[j+1] = key;
}

}
void arrayTraversal(int * arr, int n){
 for(int i =0; i<n ;i++){
  printf("%d \t",arr[i]);

 }

}
int main(){
    int arr[] = {23,12,5,78,91,2,4,15};
    int n =8;
     arrayTraversal(arr,n);
    insertionSort(arr,n);
    printf("\nThe sorted array is :-\n");
    arrayTraversal(arr,n);

return 0;
}