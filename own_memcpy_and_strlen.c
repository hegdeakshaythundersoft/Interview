/**Implement own memcopy function**/

#include <stdio.h>
void *memcpy(void*,void*,size_t);
size_t len(void*);
int main()
{
    char *Me="HAPPINESS__IS_STATE_OF_MIND";
    char advise[]="HAPPINESS_NEEDS_MONEY________RIGHT?";
    char *People=advise;
    printf("%s\n",(char*)memcpy(People,Me,len(Me)));

    return 0;
}
size_t len(void *vptr){
    
    char *cptr=(char*)vptr;
    size_t count=0;
    for(count=0;*cptr!='\0';count++,cptr++){
        ;
    }
    return count; 
    
}
void *memcpy(void *d,void *s,size_t l){
    
    char *p=(char*)d,*q=(char*)s;
    register int i;
    for(i=0;i<l;i++){
        p[i]=q[i];
    }
    return p;
}