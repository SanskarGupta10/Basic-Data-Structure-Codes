//to just take any random number from the system
#include<stdio.h>
#include<time.h>

int main(){
    int number;
    srand(time(0));
    number = rand()%100 + 1;
    printf("The random number chosen by the system is %d\n",number);




return 0;
}