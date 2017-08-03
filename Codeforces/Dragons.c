#include <stdio.h>

int main()
{
    int s,n,swaps,swapb;
    scanf("%d %d",&s,&n);
    int ds[n],db[n];

    for(int i=0;i<n;i++)
        scanf("%d %d",&ds[i],&db[i]);

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(ds[i]>ds[j])
            {
                swaps=ds[j];    swapb=db[j];
                ds[j]=ds[i];    db[j]=db[i];
                ds[i]=swaps;    db[i]=swapb;
            }

    for(int i=0;i<n;i++)
        if(s>ds[i])
            s+=db[i];
        else
        {
            printf("NO");
            return 0;
        }

    printf("YES");

    return 0;
}
