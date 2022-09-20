//implementing the algorithm of quick sort
//its a recursive algorithm
#include<stdio.h>
#include<stdlib.h>

//creating a function which gives the index of pivot
int partition(int * arr,int low , int high){
    int pivot = arr[low];
    int i = low+1;
    int j = high;
    int temp;
do{
    while(arr[i]<=pivot){
        i++;
    }
    while(arr[j]>pivot){
        j--;
    }

if(i<j){
    //swap arr[i] and arr[j]
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
}while(i<j);
//swap pivot and arr[j]
temp = arr[low];
arr[low] = arr[j];
arr[j] = temp;



return j;


}
void arrayTraversal(int * arr,int n){
for(int i =0;i<n;i++){

    printf("%d \t",arr[i]);
}



}


void quickSort(int * arr , int low, int high){
    int partitionIndex;
    if(low<high){
   partitionIndex = partition(arr,low,high);
   quickSort(arr,low,partitionIndex-1);
   quickSort(arr,partitionIndex+1,high);

    }
}
int main(){
    int arr[]={23,12,5,78,91,2,15,82};
    int n =8;
    arrayTraversal(arr,n);
    quickSort(arr,0,7);
    printf("\n The sorted array is :- \n");
    arrayTraversal(arr,n);

return 0;
}