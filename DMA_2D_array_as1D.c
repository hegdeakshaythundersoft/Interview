/*1D ptr approach for allocating 2D array in DMA*/
#include <stdio.h>
#include<stdlib.h>
#define ROW_ 3
#define COU_ 4
const volatile int d;
int main(){
    int d=10;
    printf("%d\n",d);
    const int r=ROW_,c=COU_;
    register int i,j;
    int *arr=(int*)malloc(sizeof(int)*r*c);
    printf("Enter the values\n");
    for(i=0;i<ROW_;i++){
        for(j=0;j<COU_;j++){
            scanf("%d",&arr[c*i+j]);//4*0+0=0.....4*1+2=6
            
        }
    }
    printf("Entered elements are\n");
        for(i=0;i<ROW_;i++){
        for(j=0;j<COU_;j++){
            printf("%d\t",arr[c*i+j]);
            
        }
    }
    
    printf("Hello World");

    return 0;
}

/*10
Enter the values
1
2
3
6
5
4
8
9
7
8
9
87
Entered elements are
1       2       3       6       5       4       8       9       7       8       9       87      Hello World*/
