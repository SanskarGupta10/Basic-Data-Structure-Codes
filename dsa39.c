#include<stdio.h>

void printArray(int * A,int n){

for(int i =0;i<n;i++){

    printf("%d\t",A[i]);
}

printf("\n");
}

void quickSort(int * A,int low,int high){
int partitionIndex;
int n;
 
 if(low<high)
 {
   partitionIndex= partition( A,low,high);//to get the index of pivot
   printArray(A,8);// to tell about each partition
   quickSort(A,low,partitionIndex-1);
   quickSort(A,partitionIndex+1,high);

 }
}

int partition(int * A, int low ,int high){
int i,j,temp,pivot;
pivot =A[low];
i = low +1;
j = high;

do{
    while(A[i]<=pivot){
        i++;
    }
    while(A[j]>pivot){
        j--;
    }
    if(i<j){
    temp=A[i];
    A[i]=A[j];
    A[j]=temp;
    }
}while(i<j);

    temp =A[low];
    A[low]=A[j];
    A[j]= temp;
    return j;

}
int main(){
    int A[]={12,14,25,67,89,71,90,3};
    int n =8;
    printArray(A,n);
    quickSort(A,0,7);
    printArray(A,n);



return 0;
}