#include <stdio.h>

int main()
{
    int n,min,max,minp,maxp,time=0;
    scanf("%d",&n);

    int a[n];
    scanf("%d",&a[0]); min=max=a[0]; minp=maxp=0;

    for(int i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i]; maxp=i;
        }
        else if(a[i]<=min)
        {
            min=a[i]; minp=i;
        }
    }

    while(maxp!=0)
    {
        maxp--; time++;

        if(maxp==minp)
            minp++;

    }

    while(minp!=n-1)
    {
        minp++;
        time++;
    }

    printf("%d",time);

    return 0;
}
