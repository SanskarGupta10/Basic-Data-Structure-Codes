// to insert an element in an array!
#include<stdio.h>
int main(){
    int input;
    int j;
    int prev;

    int arr[11] ={1,2,3,5,6,7,8,9,10,11};
    for(int i = 0;i<10;i++ ){
        printf("%d\t",arr[i]);
    }

    printf("\nEnter the value of new element to be added!\n");
    scanf("%d",&input);

    printf("Enter the value of index!\n");
    scanf("%d",&j);
    prev = arr[j];
    

    
    
     
    
    for(int i = 9 ; i>=j ;i--){
        

        arr[i+1] = arr[i];
        
         
    }
    arr[j] = input;
    
    
    
    
    printf("Printing the element of the new array!\n");
     for(int i = 0;i<=10;i++ ){
        printf("%d\t",arr[i]);
    }







return 0;
}