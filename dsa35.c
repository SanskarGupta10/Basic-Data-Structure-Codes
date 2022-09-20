// bubble sorting an algorithm
#include<stdio.h>
#include<stdlib.h>

void arrayTraversal(int * A, int n){
int i;
for(i=0;i<n;i++){
   printf("Element : %d\n",A[i]);

}


}

void bubbleSort(int * A, int n){

for(int i =0;i<n-1;i++){
   
   for(int j =0;j< n-1-i;j++){
int temp;
if(A[j]>A[j+1]){


 temp = A[j];
 A[j]= A[j+1];
 A[j+1]=temp;
}
   }
}
  
}

int main(){
 int * A ;
 A[0]=56;
 A[1]=23;
 A[2]=34;
 A[3]=78;
 A[4]=13;
 A[5]=98;

 int n =6;
 arrayTraversal(A,6);
 bubbleSort(A,6);
 printf("\n");

 arrayTraversal(A,6);



return 0;


}