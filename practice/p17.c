#include<stdio.h>
int bubblesort(int element,int * arr,int size){
    int low = 0;
    int high = size-1;
    int mid;
    while(low<=high){
  mid = (low + high)/2;

  if(element == arr[mid]){
      return mid;
  }

  else if(element > arr[mid]){
      low = mid + 1;
  }
  else{
      high = mid -1;
  }

    }
}
int main(){
    int arr[]={1,4,5,6,9,23,13,12};
    int size = 8;
    int f;
    f = bubblesort(9, arr, 8);
    printf("The index find is %d\n",f);
    printf("The position find is %d\n",f+1);
return 0;
}