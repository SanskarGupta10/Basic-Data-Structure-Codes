#include<stdio.h>

int main(){

int arr[10];
for(int i=0;i<9;i++){

printf("Enter the value of element %d\n",i+1);
scanf("%d",&arr[i]);

}

//printing the given array
for(int i=0;i<9;i++){

printf("%d\n",arr[i]);


}

//to add the element at an index n of the array
int n,value;
printf("Enter the value of n!");
scanf("%d",&n);

printf("Enter the value to be added!");
scanf("%d",&value);

for(int j=8;j>=n;j--){
    arr[j+1]=arr[j];
}
arr[n]=value;
for(int i=0;i<10;i++){

printf("%d\n",arr[i]);


}

// to delete the element from the given array
int del;
printf("Enter the value of deleting index!\n");
scanf("%d",&del);
int yes;
printf("yes?");
scanf("%d",&yes);
if(yes == 1){
for(int i=n;i<10;i++){
    arr[i] = arr[i+1];
}}
//printing the elements of an array'
for(int i=0;i<9;i++){

printf("\n%d\n",arr[i]);


}
//searching the element in an array
int element;
printf("Enter the element to be search!\n");
scanf("%d",&element);
 int count =0;
for(int i=0;i<10;i++){
    
if(arr[i]== element){
    count++;
}

}
printf("Element found %d times\n",count);



return 0;
}