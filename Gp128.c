
#include <stdio.h>

int main()
{
    int a[100],n,m=1,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    m=m*a[i];
    }
    if(m%2==0)
    printf("even");
    else
    printf("odd");
    

    return 0;
}
    
