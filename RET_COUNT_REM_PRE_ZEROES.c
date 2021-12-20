/** Remove the leading zeroes in two binay numbers and return the count of same bits 
x= 4 - 0000 0100 -> 100
y= 5 - 0000 0101 -> 101 
		 -> count 2****/

#include <stdio.h>
int rem_O(int,int);
int main()
{
    auto int x=4,y=5;
    printf("The identical bit count is %d\n", rem_O(x,y));
    printf("%d\t%d\n",x,y);
    printf("Hello World");

    return 0;
}
int rem_O(int a,int b){
   unsigned register int i,j=1<<31;
   unsigned auto int count_0=0,count_1=0;
    for(i=0;i<32;i++){
       if(a&j>>i)
       break;
       else
       continue;
    }
    j=32-i;
    for(i=0;i<j;i++){
        if((1<<i)&a)
        count_1++;
        else
        count_0++;
        
    }
    j=(count_0&1)?count_1:count_0;
    printf("count=%d\n",j);
    
    return j;
}

/*count=2
The identical bit count is 2
4       5
Hello World*/