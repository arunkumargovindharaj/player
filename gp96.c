#include <stdio.h>
int main()
{
    int a,i=0,rem=0,b[100],c=0,m=0,j,f;
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        b[c]=rem;
        c++;
        a=a/10;
    }
    printf("%d",(b[0]+b[c-1]));


    return 0;
}

