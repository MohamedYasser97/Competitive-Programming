#include <stdio.h>

int main()
{
    int n,xo,yo,x,y,flag,freqn[101]={0};;
    scanf("%d",&n);
    //int freqn[n]={0} didn't work here

    scanf("%d",&xo);
    for(int i=1;i<=xo;i++)
    {
        scanf("%d",&x);
        if(x>=1 && x<=n)
            freqn[x]=1;
    }

    scanf("%d",&yo);
    for(int i=1;i<=yo;i++)
    {
        scanf("%d",&y);
        if(y>=1 && y<=n)
            freqn[y]=1;
    }

    for(int i=1;i<=n;i++)
        if(freqn[i]==0)
        {
            printf("Oh, my keyboard!");
            return 0;
        }

    printf("I become the guy.");

    return 0;
}
