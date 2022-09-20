//implementing the algorithm of selection sort
#include<stdio.h>
void selectionSort(int * arr, int n){
int indexOfMin,temp;
for(int i = 0;i<n-1;i++){
indexOfMin = i;
for(int j = i+1; j<n ; j++){
if(arr[j] < arr[indexOfMin]){
  indexOfMin = j;

}

}
temp = arr[i];
arr[i] = arr[indexOfMin];
arr[indexOfMin]= temp;

}

}
void arrayTraversal(int * arr, int n){

for(int i =0;i<n ; i++){
printf("%d \t",arr[i]);

}



}
int main(){
    int arr[] ={23,12,5,78,91,2,15,82};
    arrayTraversal(arr,8);
    selectionSort(arr,8);
    printf("\n The sorted array is :- \n");
    arrayTraversal(arr,8);

return 0;
}