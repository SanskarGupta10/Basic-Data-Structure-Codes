#include<stdio.h>
int main(){
int product;
product = 1;
int n;
printf("Enter the value of n!\n");
scanf("%d",&n);
for(int i = 1;i<=n;i++){
    product = product * i;
}
printf("The value of n factorial is %d",product);




return 0;
}