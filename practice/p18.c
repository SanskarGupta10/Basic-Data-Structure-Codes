#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
FILE * ptr1;
FILE * ptr2;
ptr1 = fopen("s1.txt","r");
ptr2 = fopen("s2.txt","w");
fscanf(ptr1,"%d",&num);
printf("value is %d",num);

fprintf(ptr2,"The value of the roll number is %d",num);

fclose(ptr1);
fclose(ptr2);


return 0;
}