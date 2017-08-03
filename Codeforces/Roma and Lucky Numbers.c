#include <stdio.h>

int luck(int a)
{
    int b=0;
    while(a!=0)
    {
        if(a%10==4 || a%10==7)
            b++;
        a/=10;
    }
    return b;
}

int main()
{
    unsigned int n,k,a,f=0;

    scanf("%d %d", &n, &k);

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(luck(a)<=k)
            f++;
    }

    printf("%d", f);

    return 0;
}
