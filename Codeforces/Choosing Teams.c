#include <stdio.h>

int main()
{
    int n,k,v=0;
    scanf("%d %d",&n,&k);

    int s[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
        if(s[i]<=(5-k))
            v++;
    }

    printf("%d",v/3);

    return 0;

}
