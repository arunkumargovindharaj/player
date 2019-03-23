#include<stdio.h>
int main()
{
    long long m,sum=0,rem;
    scanf("%lld",&n);
    while(m)
    {
        rem=m%10;
        if(rem%2!=0)
        {
            sum=sum+rem;
        }
        m=m/10;
    }
    if(sum%2==0)
    printf("E");
    else
    printf("O");
    return 0;
}
