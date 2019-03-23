
#include <stdio.h>

int main()
{
    int i=0,n,rem;
    scanf("%d",&n);
    while(n)
    {
        rem=n%2;
        if(rem==1)
        i++;
        n=n/2;
        
        
    }
    printf("%d",i);


    return 0;
