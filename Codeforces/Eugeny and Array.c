#include <stdio.h>

int main()
{
    unsigned int n,m,pos=0,neg=0;
    scanf("%d %d",&n,&m);

    int a[n];
    for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==1)
                pos++;
            else
                neg++;
        }

    int l,r;

    for(int i=0;i<m;i++)
    {
        scanf("%d %d",&l,&r);

        if((r-l+1)%2==0 && pos>=(r-l+1)/2 && neg>=(r-l+1)/2)
            printf("1\n");
            else
                printf("0\n");

    }

    return 0;
}
