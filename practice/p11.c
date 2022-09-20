//implementing the algorithm of count sort
//best time complexity with big -o(n);
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>


void arrayTraversal(int * arr,int n){
for(int i =0; i<n ; i++){
    printf("%d\t",arr[i]);
}
}

int maximum(int * arr, int n){
int max = INT_MIN;
for(int i =0;i<n;i++){
if(max<arr[i]){
    max = arr[i];
}

}
return max;
}

void countSort(int * arr ,int n){
int m = maximum(arr,n);

int *count = (int *)malloc((m+1) * sizeof(int));
for(int i =0;i<m;i++){
    count[i] =0;
}

for(int i =0;i<n;i++){
    count[arr[i]] = count[arr[i]] + 1;

}
int i =0; //for count array traversal
int j =0;//for given array traversal

while(i<=m){
if(count[i]>0){
arr[j] = i;
count[i] = count[i] - 1;
j++;
}
else{
    i++;
}

}

}
int main(){
    int arr[] ={23,12,5,78,91,2,15,82};
    arrayTraversal(arr,8);
    countSort(arr,8);
    printf("\n The sorted array is :- \n");
    arrayTraversal(arr,8);

return 0;
}