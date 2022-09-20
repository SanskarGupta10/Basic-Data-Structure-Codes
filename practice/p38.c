//implementation of count sort algorithm
//it is one of tha fastest algorithm but it takes more space
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

int maximum(int A[],int n){
int max = INT_MIN;
for(int i =0;i<n;i++){
    if(max<A[i]){
        max = A[i];
    }
    return max;
}

}
void countSort(int A[],int n){
  int i,j,max;
 max = maximum(A,n);

int * count = (int *)malloc((max +1)*sizeof(int));
//initialising the value of each element of the count array to zero
for(i=0;i<=max;i++){
    count[i]=0;
}

//increment
for(i=0;i<n;i++){
    count[A[i]] = count[A[i]] +1;
}
 
 i=0; //for the traversal of count array
 j=0; //for the traversal of the given array
while(i<=max){
if(count[i]>0){
      A[j] = i;
      count[i] = count[i]-1;
      j++;
}
else{
    i++;
}


}

}
void printArray(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
}

int main(){
    int A[]={1,5,9,3,2,8,7,6};
    int n =8;
    countSort(A,n);
    printArray(A,n);

return 0;
}