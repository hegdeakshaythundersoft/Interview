/* Write function for swapping a nibbles of number.
	e.g Input: 0x123456ab
	   Output: 0x214365ba*/

#include <stdio.h>

int main()
{
    
    unsigned auto int x=0x123456ab,y=0x00;
    register int i;
    for(i=0;i<=24;i+=8){
    y|=(x&(0x0f<<i))<<4|(x&(0xf0<<i))>>4;
    }
    printf("%x\n",y);
    
    return 0;
}
/*214365ba*/