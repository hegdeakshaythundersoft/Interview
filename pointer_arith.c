/***

int *i=0; 
   char *c =1; 
   Void *v =2;
   print i,c,v,i+1,c+1,v+1
*******/

#include <stdio.h>

int main()
{

    int *i=0; 
    char *c =1; 
    void *v =2;
    printf("i=%p\t,c=%p\t,v=%p\t,i+1=%p\t,c+1=%p\t,v+1=%p\t",i,c,v,i+1,c+1,v+1);
    printf("Hello World");
    return 0;
}
