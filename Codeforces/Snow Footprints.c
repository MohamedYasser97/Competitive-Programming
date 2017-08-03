#include <stdio.h>

int main()
{
    int n,flag=0,s,xs;
    scanf("%d",&n);

    char f[n+1];
    for(int i=0;i<=n;i++)
    {
        scanf("%c",&f[i]);
        if(flag==0)
            if(f[i]=='R' || f[i]=='L')
            {
                xs=i; s=xs; flag=1;
            }
    }

    while(1)
    {
        if(f[xs]=='R' && f[xs+1]=='R')
            xs++;
        else if(f[xs]=='R' && f[xs+1]=='L')
            {
               printf("%d %d",s,xs); return 0;
            }
        else if(f[xs]=='L' && f[xs+1]=='L')
            {
                xs--; printf("%d %d",s,xs); return 0;
            }
        else if(f[xs]=='R' && f[xs+1]=='.')
            {
                xs++; printf("%d %d",s,xs); return 0;
            }
        else if(f[xs]=='L' && f[xs+1]=='.')
            {
                xs--; printf("%d %d",s,xs); return 0;
            }
        else if(f[xs]=='L' && f[xs-1]=='.')
            {
                xs--; printf("%d %d",s,xs); return 0;
            }
    }


}
