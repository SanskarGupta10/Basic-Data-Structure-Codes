//implementation of the bubble sort algorithm
//sorting here is taking place in ascending order

#include<stdio.h>
#include<stdlib.h>
void bubblesort(int * arr, int n){
    int sort = 1;
    int temp;
  for(int i =0;i<n;i++){
       printf("The number of pass is %d\n",i+1);
   for(int j =0; j< n+i-1; j++){

    
       if(arr[j]>arr[j+1]){
           temp = arr[j];
           arr[j] = arr[j+1];
           arr[j+1]= temp;
            sort = 0;

       }
   }
   if(sort ==1){
      
      printf("Sorted array!\n");
       return;
    
   }


  }  

}


int main(){
    int arr[] ={1,2,3,4,15,6,7,8};
    
    bubblesort(arr,8);
    for(int i =0; i<8; i++){
        printf("%d\t",arr[i]);
    }







return 0;
}