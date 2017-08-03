#include <stdio.h>

int main()
{
    int n,ev=0,od=0;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<3;i++)
        if(a[i]%2==0)
            ev++;
        else
            od++;

    if(ev>od)
    {
        for(int i=0;i<n;i++)
            if(a[i]%2!=0)
                printf("%d",i+1);
    }
    else
        for(int i=0;i<n;i++)
            if(a[i]%2==0)
                printf("%d",i+1);

    return 0;
}
