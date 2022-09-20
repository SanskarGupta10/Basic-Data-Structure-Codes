#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void arrayTraversal(int A[],int n){
for(int i =0;i<n;i++){

    printf("%d\t",A[i]);
}
printf("\n");
}

int maximum(int A[],int n){
int max= INT_MIN;
for(int i =0;i<n;i++){
if(A[i]>max){
    max =A[i];
}

}

return max;

}

void countSort(int A[], int n){
int max,i,j;
max = maximum(A,n);

//creating a count array
int * count =(int *)malloc((max+1)*sizeof(int));

for(i =0;i<=max;i++){
count[i]=0;

}

for(i=0;i<n;i++){

    count[A[i]] =count[A[i]] +1;
}

i=0; //pointer to the count array
j=0; //pointer to the given array

while(i<=max){
if(count[i]>0){
  A[j]=i;
  count[i] = count[i]-1;
  j++;

}else
{
    i++;
}

}

}



int main(){
    int A[]={9,1,4,14,4,15,6};
    int n =7;
    arrayTraversal(A,n);
    countSort(A,n);
    arrayTraversal(A,n);
    



return 0;
}