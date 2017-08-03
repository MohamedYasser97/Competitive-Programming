#include <stdio.h>

int main()
{
    int n,l=2,maxl=2;

    scanf("%d",&n);

    int a[n];
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);

    if(n<=2)
        printf("%d",n);
    else
    {
        for(int i=1;i<=n-2;i++)
        {
            if((a[i]+a[i+1])==a[i+2])
                {
                    l++;
                    if(l>maxl)  maxl=l;
                }
            else
                l=2;
        }
        printf("%d",maxl);
    }

    return 0;
}
