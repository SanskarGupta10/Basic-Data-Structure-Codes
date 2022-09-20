//implementation of insertion sort
#include<stdio.h>
void insertionSort(int A[],int n ){

    for(int i=1;i<n;i++){
     int key;
     key = A[i];
    int j=i-1;
     while(A[j]>key){
        A[j+1] = A[j];
        j--;
     }
     A[j+1] = key;


    }
     
}
void printArray(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",A[i]);
}
}
int main(){

int A[]={2,43,67,89,12,65,8,13,90,123};
int n = 10;
insertionSort(A,n);
printArray(A,n);
return 0;
}