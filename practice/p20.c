//deleting duplicate elements of an array
#include<stdio.h>



int main(){

int arr[10] ={12,13,14,18,12,8,9,16,21,19};
 for(int i =0;i<10;i++){
        printf("%d\t",arr[i]);
    }

printf("\n");
for(int i =0;i<10;i++){
  for(int j=i+1;j<10;j++){
    if(arr[i] == arr[j]){
   
  for(int k =j;k<9;k++){
      arr[k] = arr[k+1];
  }
  j--;
    }
   


  }

} 
 for(int i =0;i<9;i++){
        printf("%d\t",arr[i]);
    }







return 0;
}