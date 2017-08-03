#include <stdio.h>

int main()
{
    int n,k,t=0;
    scanf("%d %d",&n,&k);

    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<n;i++)
        if(a[i]!=a[n-1])
            t=i+1;

    if(k>t)
        printf("%d",t);
    else
        printf("-1");

    return 0;
}
