#include <stdio.h>
int main()
{
    int a,i=0,rem=0,b,c=0,m=0,j,sum=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
           // printf("%d",i);
        }
    }
printf("%d",sum);


    return 0;
}

