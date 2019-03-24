#include <stdio.h>

int main()
{
    int a,b,c,d,l=0,rem,s=0,ba=1;
    scanf("%d%d",&a,&b);
    c=a|b;
    while(c)
    {
        rem=c%2;
        s=s+(rem*ba);
        ba=ba*10;
        c=c/2;
        if(rem==1)
        l++;
        
        
        
    }
    printf("%d",l);

    return 0;
}
