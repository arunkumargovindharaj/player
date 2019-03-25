#include <stdio.h>

int main()
{
    int i,j,n,a[100],t,c=0;
    scanf("%d",&n);
     for(i=0;i<n;i++)
     {
      scanf("%d",&a[i]);
     }
      for(i=0;i<n;i++)
      {
        if(a[i]==0)
        {
          c++; 
        }
        else
        printf("%d\t",a[i]);
          
        }
       
        for(j=0;j<c;j++)
        {
        printf("%c\t",'0');
            
        }
      
    return 0;
}
