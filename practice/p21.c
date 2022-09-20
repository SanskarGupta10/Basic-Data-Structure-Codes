//deleting an element
#include<stdio.h>
int main(){
    int n;
    int index;
    printf("Enter the value of n \n");
    scanf("%d",&n);

int arr[n];

for(int i =0;i<n;i++){
    printf("enter the value of element %d\n",i+1);
    scanf("%d",&arr[i]);
}

printf("printing the elements of an array!\n");
for(int i =0;i<n;i++){
    printf("Element is %d\n",arr[i]);
}

//to delete the element at a particular index
int toggle;
printf("Enter the value of toggle as 0 or 1\n");
scanf("%d",&toggle);
if(toggle == 1){
printf("Enter the value of an index!\n");
scanf("%d",&index);
for(int i = index;i<n-1;i++){
    arr[i] = arr[i+1];
}


printf("Array after element deletion!\n");
for(int i=0;i<n-1;i++){
    printf("Element is %d\n",arr[i]);
}
}
printf("\n");

//to delete the duplicate element
if(toggle ==0){
for(int i=0;i<n;i++){

for(int j=i+1;j<n;j++){

    if(arr[i]==arr[j]){

        for(int k=j;k<n-1;k++){

            arr[k] = arr[k+1];
        }
        j--;
        n--;
    }
}

}
printf("Array after element deletion!\n");
for(int i=0;i<n;i++){
    printf("Element is %d\n",arr[i]);
}
}

return 0;
}