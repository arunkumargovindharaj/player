#include <stdio.h>

int main()
{
    long long n,a[100],l=0,i,j,rem,t;
    scanf("%lld",&n);
    while(n)
    {
        rem=n%10;
        a[l]=rem;
        l++;
        n=n/10;
    }
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
            
        }
    }
   for(i=0;i<l;i++)
   {
       printf("%d",a[i]);
   }
    return 0;
}
