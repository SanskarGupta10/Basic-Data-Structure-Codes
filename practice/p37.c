//implementation of selection sort
//here number of swaps is equal to number of elements minus one

#include<stdio.h>
void selectionSort(int A[],int n){
    int temp;
for(int i=0;i<n-1;i++){
int minIndex = i;
for(int j =i+1;j<n;j++){
 if(A[j]<A[minIndex]){
     minIndex = j;
 }
}
temp = A[i];
A[i] = A[minIndex];
A[minIndex]=temp;

}


}

void printArray(int A[],int n){
for(int i=0;i<n;i++){
    printf("%d\t",A[i]);
}

}
int main(){int A[]={2,43,67,89,12,65,8,13,90,123};
int n = 10;
selectionSort(A,n);
printArray(A,n);


return 0;
}