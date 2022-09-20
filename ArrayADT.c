 #include<stdio.h>
 #include<stdlib.h>

 struct myArray{
   int total_size;
   int used_size;
   int * baseaddress;


 };
 void createMyarray( struct myArray *a,int tsize,int usize)
 {
     (*a).total_size=tsize;
     (*a).used_size=usize;
     (*a).baseaddress=(int *)malloc(tsize*sizeof(int));

 }

 void set(struct myArray *a)
 {
    for(int i=0;i<(*a).used_size;i++)
    {   int n;
        printf("Enter element %d :\n",i+1);
        scanf("%d",&n);
        n=(a->baseaddress)[i];
    }


 }
 void show(struct myArray *a)
 {

     for(int i=0;i<(*a).used_size;i++)
    {
        printf("%d\n",(a->baseaddress)[i]);
  
             
    }

 }

 int main()
 {

     struct myArray marks;
     createMyarray(&marks,10,5);
     printf("We are setting the values\n");
     set(&marks);
     printf("we are showing the values\n");
     show(&marks);






 return 0;
 }