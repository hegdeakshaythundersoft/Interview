/**Allocating 2D array dynamically -> ptr->ptr approach**/

#include <stdio.h>
#include<stdlib.h>
#define R 2
#define C 3
int main()
{
    int c=C,r=R; 
    int **arr=(int**)malloc(sizeof(int*)*r);//allocated the rows 2x8=16bytes  segment
    register int i,j;
    for(i=0;i<C;i++){
       *(arr+i)=(int*)malloc(sizeof(int)*c);
    }
    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            printf("%d\t",*(*(arr+i)+j));
            
        }
        
    }


    return 0;
}
