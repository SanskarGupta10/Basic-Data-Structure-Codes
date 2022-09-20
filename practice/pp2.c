// binary search having logn complexity
#include<stdio.h>

int binarySearch(int arr[],int size,int value){
int low =0;
int high = size-1;
int mid;


for(int i =0;i<size;i++){
    mid =(low + high)/2;
  if(value == arr[mid]){
    return mid;
  }
  else if(value > arr[mid]){
    low = mid+1;
  }
  else{
    high = mid-1;
  }
  


}


}


int main(){

int arr[]={1,2,3,4,5,6,7,10,8,9};
int found;
found = binarySearch(arr,10,7);
printf("The index value is %d\n",found);
return 0;
}