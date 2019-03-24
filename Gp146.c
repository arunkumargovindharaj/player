#include <stdio.h>

int main()
{
    int a,b,i,j,n,l=1,m=1,k;
    scanf("%d%d",&a,&b);
   for(i=1;i<=a;i++)
    {
        l=l*i;
    }
    for(i=1;i<=b;i++)
    {
        m=m*i;
    }
    k=l/m;
    printf("%d",k);
    
    return 0;
}
