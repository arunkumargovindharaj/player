#include <stdio.h>

int main()
{
    int a[100],m,c=1,i,sum,sum1=0,sum2=0;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
    scanf("%d",&a[i]);
    
    }
    for(i=0;i<m;i++)
    {
        
        sum1=a[i]+sum1;
        printf("%d ",sum1);
        
    }


    

    return 0;
}
