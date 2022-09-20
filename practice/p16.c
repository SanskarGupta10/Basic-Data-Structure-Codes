#include<stdio.h>
int main(){
int arr[3][3];
printf("To make the upper triangular matrix!\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(i>j){
            scanf("%d",&arr[i][j]);
        }
        else if(i==j){
            scanf("%d",&arr[i][j]);
        }

    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(i>j){
           arr[j][i]=arr[i][j]; 
        }
    }
}

printf("The following is the upper triangular matrix !\n");

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        
        printf("%d\t",arr[i][j]);

    }
    printf("\n");
}




return 0;
}