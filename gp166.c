#include <stdio.h>

int main()
{
    
    int i,m,c=0,l=0,n,k,a[100];
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(k<a[i])
        {
        m=a[i];
        break;
        }
    }
    printf("%d",m);

    return 0;
}
