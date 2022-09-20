//implementing the algorithm of merge sort
//it has best case analysis of big -o(nlogn)
#include<stdio.h>
#include<stdlib.h>
void merge(int * arr,int low ,int mid ,int high){
int i,j,k;
i = k = low;
j = mid +1;
int b[high +1];
while(i<=mid && j<=high){
if(arr[i]<arr[j]){
   b[k] = arr[i];
   i++;
   k++;

}
else{
    b[k] = arr[j];
    j++;
    k++;

}
}
while(i<=mid){
    b[k] = arr[i];
    i++;
    k++;
}
while(j<=high){
    b[k] = arr[j];
    j++;
    k++;
}
for(int i =0;i<=high;i++){

    arr[i] = b[i];
}


}
void arrayTraversal(int * arr ,int n ){
for(int i =0;i<n;i++){

    printf("%d \t",arr[i]);
}

}
int main(){
    int arr[] ={1,2,3,4,8,5,6,7};
    int n = 8;
    arrayTraversal(arr,n);
    merge(arr,0,4,7);
    printf("\n The merged array is :- \n");
    arrayTraversal(arr,n);

return 0;
}
//incomplete